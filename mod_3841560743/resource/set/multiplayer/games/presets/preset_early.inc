; == EARLY WAR STANDARD RESOURCES ==
(define "standard_all"
	{common
		{unitset
			{value "early^conquestonly|doctrineonly"}
		}
		{commandPoints "*=%cp"}
		(include "/set/multiplayer/games/presets/global_parameters/unitlimits.inc")
		{chargeFactors
			{value "*=1.00"}
		}
		(include "/set/multiplayer/games/presets/global_parameters/budget.inc" s(%start) f(%finish) d(%doctrine))
	}
	{bots
		(include "/set/multiplayer/games/presets/global_parameters/bots_generic.inc" period("early"))
	}
)

; == EARLY WAR CUSTOM RESOURCES ==
(define "custom_all"
	{common
		{unitset
			{value "early^conquestonly|doctrineonly"}
		}
		{commandPoints "*=%cp"}
		(include "/set/multiplayer/games/presets/global_parameters/unitlimits.inc")
		{chargeFactors
			{value "*=1.00"}
			{customize "0;0.25;0.5;1;2"}
		}
		(include "/set/multiplayer/games/presets/global_parameters/budget_custom.inc" s(%start) f(%finish) d(%doctrine))
	}
	{bots
		(include "/set/multiplayer/games/presets/global_parameters/bots_generic.inc" period("early"))
	}
)

;------------------------------------------------------------------------------------------------------------
{presets
	{"s:early_standard_100"
		{gameMode "standard"}
		{unitMode "early"}
		{specMode "all_normal"}
		{apply "only_roster_early"}
		("standard_all"			start(200) finish(4500) doctrine(200) cp(0:100,900:150,1800:200))
		{ranked}
	}
;------------------------------------------------------------------------------------------------------------	

	{"c:early_custom_80"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_80"}
		{apply "only_roster_early"}
		("custom_all"			start(200) finish(4000) doctrine(200) cp(0:80,900:130,1800:180))
	}
	{"c:early_custom_100"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_100"}
		{apply "only_roster_early"}
		("custom_all"			start(200) finish(4500) doctrine(200) cp(0:100,900:150,1800:200))
	}
	{"c:early_custom_120"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_120"}
		{apply "only_roster_early"}
		("custom_all"			start(200) finish(5000) doctrine(200) cp(0:120,900:170,1800:220))
	}
	{"c:early_custom_140"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_140"}
		{apply "only_roster_early"}
		("custom_all"			start(200) finish(5500) doctrine(200) cp(0:140,900:190,1800:240))
	}
	{"c:early_custom_160"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_160"}
		{apply "only_roster_early"}
		("custom_all"			start(200) finish(6000) doctrine(200) cp(0:160,900:210,1800:260))
	}
	{"c:early_custom_180"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_180"}
		{apply "only_roster_early"}
		("custom_all"			start(200) finish(6500) doctrine(200) cp(0:180,900:230,1800:280))
	}
	{"c:early_custom_200"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_200"}
		{apply "only_roster_early"}
		("custom_all"			start(200) finish(7000) doctrine(200) cp(0:200,900:250,1800:300))
	}
	{"c:early_custom_250"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_250"}
		{apply "only_roster_early"}
		("custom_all"			start(200) finish(7500) doctrine(200) cp(0:250,900:300,1800:350))
	}
;------------------------------------------------------------------------------------------------------------
	{"c:early_custom_300"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_300"}
		{apply "only_roster_early"}
		("custom_all"		start(600) finish(9000) doctrine(400) cp(0:300,900:350,1800:400))
	}
	{"c:early_custom_400"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_400"}
		{apply "only_roster_early"}
		("custom_all"		start(1000) finish(12000) doctrine(600) cp(0:400,900:450,1800:500))
	}
	{"c:early_custom_600"
		{gameMode "custom"}
		{unitMode "early"}
		{specMode "cp_600"}
		{apply "only_roster_early"}
		("custom_all"		start(2000) finish(20000) doctrine(1000) cp(0:600,900:700,1800:800))
	}
}