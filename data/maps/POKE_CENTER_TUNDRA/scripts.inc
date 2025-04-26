POKE_CENTER_TUNDRA_MapScripts::
# 2 "data/maps/POKE_CENTER_TUNDRA/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Poke_Center_TundraW_OnTransition
# 3 "data/maps/POKE_CENTER_TUNDRA/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Poke_Center_TundraW_OnTransition::
# 7 "data/maps/POKE_CENTER_TUNDRA/scripts.pory"
	setrespawn HEAL_LOCATION_TUNDRAWOOD_CITY
	end


Pokemart_Employee_Simple_Tundra::
# 13 "data/maps/POKE_CENTER_TUNDRA/scripts.pory"
	setvar VAR_0x800B, 1
# 14 "data/maps/POKE_CENTER_TUNDRA/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/POKE_CENTER_TUNDRA/scripts.pory"
	waitmessage
# 16 "data/maps/POKE_CENTER_TUNDRA/scripts.pory"
	waitbuttonpress
# 17 "data/maps/POKE_CENTER_TUNDRA/scripts.pory"
	release
	end

