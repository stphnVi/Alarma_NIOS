
module CPU1 (
	buz_export,
	clk_clk,
	hours_export,
	leds_export,
	minutes_export,
	off_export,
	s1_export,
	s2_export,
	s3_export,
	s4_export,
	set_alarm_export,
	set_clock_export,
	switch_reset_export);	

	output		buz_export;
	input		clk_clk;
	input		hours_export;
	output	[1:0]	leds_export;
	input		minutes_export;
	input		off_export;
	output	[6:0]	s1_export;
	output	[6:0]	s2_export;
	output	[6:0]	s3_export;
	output	[6:0]	s4_export;
	input		set_alarm_export;
	input		set_clock_export;
	input		switch_reset_export;
endmodule
