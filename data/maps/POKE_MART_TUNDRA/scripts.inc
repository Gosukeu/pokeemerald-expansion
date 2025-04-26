POKE_MART_TUNDRA_MapScripts::
	.byte 0


TundraWood_Mart_Employee::
# 6 "data/maps/POKE_MART_TUNDRA/scripts.pory"
	lock
# 7 "data/maps/POKE_MART_TUNDRA/scripts.pory"
	faceplayer
# 8 "data/maps/POKE_MART_TUNDRA/scripts.pory"
	message TundraWood_Mart_Employee_Text_0
# 9 "data/maps/POKE_MART_TUNDRA/scripts.pory"
	waitmessage
# 10 "data/maps/POKE_MART_TUNDRA/scripts.pory"
	pokemart Tundra_Mart
# 11 "data/maps/POKE_MART_TUNDRA/scripts.pory"
	msgbox TundraWood_Mart_Employee_Text_1
# 12 "data/maps/POKE_MART_TUNDRA/scripts.pory"
	release
	end


# 16 "data/maps/POKE_MART_TUNDRA/scripts.pory"

# 17 "data/maps/POKE_MART_TUNDRA/scripts.pory"
 
# 18 "data/maps/POKE_MART_TUNDRA/scripts.pory"
.align 2
# 19 "data/maps/POKE_MART_TUNDRA/scripts.pory"
Tundra_Mart::
# 20 "data/maps/POKE_MART_TUNDRA/scripts.pory"
	.2byte ITEM_POKE_BALL
# 21 "data/maps/POKE_MART_TUNDRA/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 22 "data/maps/POKE_MART_TUNDRA/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 23 "data/maps/POKE_MART_TUNDRA/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 24 "data/maps/POKE_MART_TUNDRA/scripts.pory"
    .2byte ITEM_NONE
# 25 "data/maps/POKE_MART_TUNDRA/scripts.pory"
	pokemartlistend

TundraWood_Mart_Employee_Text_0:
# 8 "data/maps/POKE_MART_TUNDRA/scripts.pory"
	.string "How may I serve you?$"

TundraWood_Mart_Employee_Text_1:
# 11 "data/maps/POKE_MART_TUNDRA/scripts.pory"
	.string "Please Come Again.$"
