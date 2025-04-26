Poke_Mart_MapScripts::
	.byte 0


Aegisport_Mart_Employee::
# 6 "data/maps/Poke_Mart/scripts.pory"
	lock
# 7 "data/maps/Poke_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/Poke_Mart/scripts.pory"
	message Aegisport_Mart_Employee_Text_0
# 9 "data/maps/Poke_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/Poke_Mart/scripts.pory"
	pokemart Aegisport_Mart
# 11 "data/maps/Poke_Mart/scripts.pory"
	msgbox Aegisport_Mart_Employee_Text_1
# 12 "data/maps/Poke_Mart/scripts.pory"
	release
	end


# 16 "data/maps/Poke_Mart/scripts.pory"

# 17 "data/maps/Poke_Mart/scripts.pory"
 
# 18 "data/maps/Poke_Mart/scripts.pory"
.align 2
# 19 "data/maps/Poke_Mart/scripts.pory"
Aegisport_Mart::
# 20 "data/maps/Poke_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 21 "data/maps/Poke_Mart/scripts.pory"
	.2byte ITEM_PP_UP
# 22 "data/maps/Poke_Mart/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 23 "data/maps/Poke_Mart/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 24 "data/maps/Poke_Mart/scripts.pory"
	.2byte ITEM_POTION
# 25 "data/maps/Poke_Mart/scripts.pory"
    .2byte ITEM_SUPER_POTION
# 26 "data/maps/Poke_Mart/scripts.pory"
	pokemartlistend

Aegisport_Mart_Employee_Text_0:
# 8 "data/maps/Poke_Mart/scripts.pory"
	.string "How may I serve you?$"

Aegisport_Mart_Employee_Text_1:
# 11 "data/maps/Poke_Mart/scripts.pory"
	.string "Please Come Again.$"
