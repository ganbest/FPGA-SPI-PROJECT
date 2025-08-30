`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:32:06 07/28/2025 
// Design Name: 
// Module Name:    spi_master 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module spi_master (
    input wire clk,              
    input wire rst,              
    input wire start,            
    input wire [7:0] data_in,    
    output reg [7:0] data_out,   
    output reg busy,             
    output reg sclk,             
    output reg mosi,             
    input wire miso,            
    output reg cs                
);

    reg [2:0] bit_cnt;
    reg [7:0] shift_reg_tx;
    reg [7:0] shift_reg_rx;
    reg [1:0] state;
    
    localparam IDLE = 2'd0,
               LOAD = 2'd1,
               TRANSFER = 2'd2,
               DONE = 2'd3;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            sclk <= 0;
            mosi <= 0;
            busy <= 0;
            cs <= 1;
            bit_cnt <= 0;
        end else begin
            case (state)
                IDLE: begin
                    sclk <= 0;
                    busy <= 0;
                    cs <= 1;
                    if (start) begin
                        state <= LOAD;
                    end
                end
                LOAD: begin
                    cs <= 0;
                    shift_reg_tx <= data_in;
                    shift_reg_rx <= 8'd0;
                    bit_cnt <= 3'd7;
                    busy <= 1;
                    state <= TRANSFER;
                end
                TRANSFER: begin
                    sclk <= ~sclk;
                    if (sclk == 0) begin
                        // Gửi bit tiếp theo trên MOSI
                        mosi <= shift_reg_tx[bit_cnt];
                    end else begin
                        // Nhận bit từ MISO vào khi SCLK lên
                        shift_reg_rx[bit_cnt] <= miso;
                        if (bit_cnt == 0) begin
                            state <= DONE;
                        end else begin
                            bit_cnt <= bit_cnt - 1;
                        end
                    end
                end
                DONE: begin
                    cs <= 1;
                    busy <= 0;
                    data_out <= shift_reg_rx;
                    state <= IDLE;
                end
            endcase
        end
    end

endmodule
