Poke_Center_1_AEGISPORT_MapScripts::
# 2 "data/maps/Poke_Center_1_AEGISPORT/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Poke_Center_Aegisport_OnTransition
# 3 "data/maps/Poke_Center_1_AEGISPORT/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Poke_Center_Aegisport_OnTransition::
# 7 "data/maps/Poke_Center_1_AEGISPORT/scripts.pory"
	setrespawn HEAL_LOCATION_AEGISPORT
	end


Pokemart_Employee_Aegisport::
# 13 "data/maps/Poke_Center_1_AEGISPORT/scripts.pory"
	setvar VAR_0x800B, 1
# 14 "data/maps/Poke_Center_1_AEGISPORT/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/Poke_Center_1_AEGISPORT/scripts.pory"
	waitmessage
# 16 "data/maps/Poke_Center_1_AEGISPORT/scripts.pory"
	waitbuttonpress
# 17 "data/maps/Poke_Center_1_AEGISPORT/scripts.pory"
	release
	end

