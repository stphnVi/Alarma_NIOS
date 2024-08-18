module CPU1_inst (input clk, 
						reset, 
						output [1:0] leds,
						output [6:0] seg1,
						output [6:0] seg2,
						output [6:0] seg3,
						output [6:0] seg4,
						output [1:0] buzz,
						input  [1:0] switch1,
						input  [1:0] switch2,
						input  [1:0] switch3,
						input  [1:0] switch4,
						input  [1:0] button1,
						input  [1:0] button2 );

CPU1 u0 (
		.clk_clk       (clk),       //   clk.clk
		.reset_reset_n (reset), // reset.reset_n
		.leds_export   (leds), //  leds.export
		.s1_export (seg1),
		.s2_export (seg2),
		.s3_export (seg3),
		.s4_export (seg4),
		.buzz_export (buzz),
		.switch_reset_export(switch1),
		.set_clock_export(switch2),
		.set_alarm_export(switch3),
		.off_export(switch4),
		.hours_export(button1),
		.minutes_export(button2)
		
	);

endmodule 

