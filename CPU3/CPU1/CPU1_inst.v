module CPU1_inst (input clk, 
						reset, switch1, switch2, switch3, switch4,
						button1, button2,
						output [1:0] leds,
						output [6:0] seg1,
						output [6:0] seg2,
						output [6:0] seg3,
						output [6:0] seg4,
						output buzz);

	
	CPU1 u0 (
		.clk_clk             (clk),             //          clk.clk
		.leds_export         (leds),         //         leds.export
		.s1_export           (seg1),           //           s1.export
		.s2_export           (seg2),           //           s2.export
		.s3_export           (seg3),           //           s3.export
		.s4_export           (seg4),           //           s4.export
		.buz_export          (buzz),          //          buz.export
		.switch_reset_export (switch1), // switch_reset.export
		.set_clock_export    (switch2),    //    set_clock.export
		.set_alarm_export    (switch3),    //    set_alarm.export
		.off_export          (switch4),          //          off.export
		.hours_export        (button1),        //        hours.export
		.minutes_export      (button2)       //      minutes.export
	);

endmodule 