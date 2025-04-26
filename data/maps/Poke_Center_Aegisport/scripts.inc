Poke_Center_Aegisport_MapScripts::
# 2 "data/maps/Poke_Center_Aegisport/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Poke_Center_Aegisport_OnTransition1
# 3 "data/maps/Poke_Center_Aegisport/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


Poke_Center_Aegisport_OnTransition1::
# 7 "data/maps/Poke_Center_Aegisport/scripts.pory"
	setrespawn HEAL_LOCATION_POKE_CENTER_1_AEGISPORT
	end


Pokemart_Employee_Aegisport1::
# 13 "data/maps/Poke_Center_Aegisport/scripts.pory"
	setvar VAR_0x800B, 1
# 14 "data/maps/Poke_Center_Aegisport/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/Poke_Center_Aegisport/scripts.pory"
	waitmessage
# 16 "data/maps/Poke_Center_Aegisport/scripts.pory"
	waitbuttonpress
# 17 "data/maps/Poke_Center_Aegisport/scripts.pory"
	release
	end

