`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:58:58 07/28/2025 
// Design Name: 
// Module Name:    spi_slave 
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
module spi_slave (
    input wire sclk,            
    input wire cs,              
    input wire mosi,            
    output reg miso,            
    output reg [7:0] data_rx,   
    input wire [7:0] data_tx,  
    input wire rst,            
    input wire clk              
);

    reg [2:0] bit_cnt;
    reg [7:0] shift_reg_rx;
    reg [7:0] shift_reg_tx;
    reg prev_sclk;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            bit_cnt <= 0;
            shift_reg_rx <= 0;
            shift_reg_tx <= 0;
            miso <= 0;
            prev_sclk <= 0;
        end else begin
            prev_sclk <= sclk;

            if (cs == 0) begin
             
                if (prev_sclk == 1 && sclk == 0) begin
                    shift_reg_rx <= {shift_reg_rx[6:0], mosi};
                    bit_cnt <= bit_cnt + 1;
                end

                
                if (prev_sclk == 0 && sclk == 1) begin
                    miso <= shift_reg_tx[7];
                    shift_reg_tx <= {shift_reg_tx[6:0], 1'b0};
                end

                if (bit_cnt == 7 && prev_sclk == 1 && sclk == 0) begin
                    data_rx <= {shift_reg_rx[6:0], mosi};
                end
            end else begin
              
                bit_cnt <= 0;
                shift_reg_tx <= data_tx;
            end
        end
    end

endmodule

