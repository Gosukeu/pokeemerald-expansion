Poke_Center_EmberfallTown_MapScripts::
# 2 "data/maps/Poke_Center_EmberfallTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Poke_Center_EmberfallTown_OnTransition
# 3 "data/maps/Poke_Center_EmberfallTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Poke_Center_EmberfallTown_OnTransition::
# 7 "data/maps/Poke_Center_EmberfallTown/scripts.pory"
	setrespawn HEAL_LOCATION_EMBERFALL_TOWN
	end


Pokemart_Employee_Simple::
# 13 "data/maps/Poke_Center_EmberfallTown/scripts.pory"
	setvar VAR_0x800B, 1
# 14 "data/maps/Poke_Center_EmberfallTown/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/Poke_Center_EmberfallTown/scripts.pory"
	waitmessage
# 16 "data/maps/Poke_Center_EmberfallTown/scripts.pory"
	waitbuttonpress
# 17 "data/maps/Poke_Center_EmberfallTown/scripts.pory"
	release
	end

