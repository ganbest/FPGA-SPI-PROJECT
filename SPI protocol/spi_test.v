`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:00:44 07/28/2025
// Design Name:   spi_master
// Module Name:   /home/nguyenquan/Desktop/SPI/SPI_master/spi_test.v
// Project Name:  SPI_master
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: spi_master
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
module tb_spi;

    reg clk, rst, start;
    reg [7:0] master_data_in;
    wire [7:0] master_data_out;
    wire busy;
    wire sclk, mosi, miso, cs;

    reg [7:0] slave_data_tx;
    wire [7:0] slave_data_rx;

    // Clock 50 MHz
    always #10 clk = ~clk;

    // SPI Master
    spi_master master (
        .clk(clk),
        .rst(rst),
        .start(start),
        .data_in(master_data_in),
        .data_out(master_data_out),
        .busy(busy),
        .sclk(sclk),
        .mosi(mosi),
        .miso(miso),
        .cs(cs)
    );

    // SPI Slave
    spi_slave slave (
        .clk(clk),
        .rst(rst),
        .sclk(sclk),
        .cs(cs),
        .mosi(mosi),
        .miso(miso),
        .data_rx(slave_data_rx),
        .data_tx(slave_data_tx)
    );

    initial begin
        // Init signals
        clk = 0;
        rst = 1;
        start = 0;
        master_data_in = 8'hA5;   
        slave_data_tx = 8'h3C;   

        #100;
        rst = 0;

        #50;
        start = 1;
        #20;
        start = 0;

        
        wait (busy == 0);

        #100;

   
 
    end

endmodule
