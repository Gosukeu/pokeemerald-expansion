Poke_Mart_EmberfallTown_MapScripts::
	.byte 0


Littleroot_Mart_Employee::
# 6 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
	lock
# 7 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
	faceplayer
# 8 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
	message Littleroot_Mart_Employee_Text_0
# 9 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
	waitmessage
# 10 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
	pokemart Littleroot_Mart
# 11 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
	msgbox Littleroot_Mart_Employee_Text_1
# 12 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
	release
	end


# 16 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"

# 17 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
 
# 18 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
.align 2
# 19 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
Littleroot_Mart::
# 20 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 21 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 22 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
	.2byte ITEM_ABILITY_PATCH
# 23 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
	.2byte ITEM_RARE_CANDY
# 24 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
    .2byte ITEM_NONE
# 25 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
	pokemartlistend

Littleroot_Mart_Employee_Text_0:
# 8 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
	.string "How may I serve you?$"

Littleroot_Mart_Employee_Text_1:
# 11 "data/maps/Poke_Mart_EmberfallTown/scripts.pory"
	.string "Please Come Again.$"
