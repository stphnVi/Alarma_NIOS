	component CPU1 is
		port (
			buz_export          : out std_logic;                           -- export
			clk_clk             : in  std_logic                    := 'X'; -- clk
			hours_export        : in  std_logic                    := 'X'; -- export
			leds_export         : out std_logic_vector(1 downto 0);        -- export
			minutes_export      : in  std_logic                    := 'X'; -- export
			off_export          : in  std_logic                    := 'X'; -- export
			s1_export           : out std_logic_vector(6 downto 0);        -- export
			s2_export           : out std_logic_vector(6 downto 0);        -- export
			s3_export           : out std_logic_vector(6 downto 0);        -- export
			s4_export           : out std_logic_vector(6 downto 0);        -- export
			set_alarm_export    : in  std_logic                    := 'X'; -- export
			set_clock_export    : in  std_logic                    := 'X'; -- export
			switch_reset_export : in  std_logic                    := 'X'; -- export
			reset_reset_n       : in  std_logic                    := 'X'  -- reset_n
		);
	end component CPU1;

	u0 : component CPU1
		port map (
			buz_export          => CONNECTED_TO_buz_export,          --          buz.export
			clk_clk             => CONNECTED_TO_clk_clk,             --          clk.clk
			hours_export        => CONNECTED_TO_hours_export,        --        hours.export
			leds_export         => CONNECTED_TO_leds_export,         --         leds.export
			minutes_export      => CONNECTED_TO_minutes_export,      --      minutes.export
			off_export          => CONNECTED_TO_off_export,          --          off.export
			s1_export           => CONNECTED_TO_s1_export,           --           s1.export
			s2_export           => CONNECTED_TO_s2_export,           --           s2.export
			s3_export           => CONNECTED_TO_s3_export,           --           s3.export
			s4_export           => CONNECTED_TO_s4_export,           --           s4.export
			set_alarm_export    => CONNECTED_TO_set_alarm_export,    --    set_alarm.export
			set_clock_export    => CONNECTED_TO_set_clock_export,    --    set_clock.export
			switch_reset_export => CONNECTED_TO_switch_reset_export, -- switch_reset.export
			reset_reset_n       => CONNECTED_TO_reset_reset_n        --        reset.reset_n
		);

