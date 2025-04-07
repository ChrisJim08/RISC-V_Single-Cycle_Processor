`timescale 1ns / 1ps

module tb_risc_v (
  output logic clk,
  output logic rst
);

  // Instantiate the DUT (Device Under Test)
  risc_v DUT (
    .clk_i(clk),
    .rst_i(rst)
  );

  // Clock generator: 10ns period (100MHz)
  always #5 clk = ~clk;

  // Initial block
  initial begin
    // Initialize signals
    clk = 0;
    rst = 1;

  

    $dumpfile("wave.vcd");
    $dumpvars(0, risc_v_tb); // or whatever your TB module is called

    // Hold reset for a few cycles
    #20;
    rst = 0;

    // Let it run
    #100;

    // End simulation
    $finish;
  end

endmodule
