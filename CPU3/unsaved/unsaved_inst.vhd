	component unsaved is
		port (
			onchip_memory2_0_clk1_clk : in std_logic := 'X'  -- clk
		);
	end component unsaved;

	u0 : component unsaved
		port map (
			onchip_memory2_0_clk1_clk => CONNECTED_TO_onchip_memory2_0_clk1_clk  -- onchip_memory2_0_clk1.clk
		);

