Emberfall_Town_House_1_MapScripts::
	.byte 0


NPC_EMBERFALL_TOWN_SHAYMIN::
# 6 "data/maps/Emberfall_Town_House_1/scripts.pory"
	lock
# 7 "data/maps/Emberfall_Town_House_1/scripts.pory"
	faceplayer
# 8 "data/maps/Emberfall_Town_House_1/scripts.pory"
	message NPC_EMBERFALL_TOWN_SHAYMIN_Text_0
# 9 "data/maps/Emberfall_Town_House_1/scripts.pory"
	waitmessage
# 10 "data/maps/Emberfall_Town_House_1/scripts.pory"
	pokemart shayminshop
# 11 "data/maps/Emberfall_Town_House_1/scripts.pory"
	msgbox NPC_EMBERFALL_TOWN_SHAYMIN_Text_1
# 12 "data/maps/Emberfall_Town_House_1/scripts.pory"
	release
	end


# 16 "data/maps/Emberfall_Town_House_1/scripts.pory"

# 17 "data/maps/Emberfall_Town_House_1/scripts.pory"
 
# 18 "data/maps/Emberfall_Town_House_1/scripts.pory"
.align 2
# 19 "data/maps/Emberfall_Town_House_1/scripts.pory"
shayminshop::
# 20 "data/maps/Emberfall_Town_House_1/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 21 "data/maps/Emberfall_Town_House_1/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 22 "data/maps/Emberfall_Town_House_1/scripts.pory"
	.2byte ITEM_ODD_INCENSE
# 23 "data/maps/Emberfall_Town_House_1/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 24 "data/maps/Emberfall_Town_House_1/scripts.pory"
    .2byte ITEM_LUCK_INCENSE
# 25 "data/maps/Emberfall_Town_House_1/scripts.pory"
    .2byte ITEM_ROCK_INCENSE
# 26 "data/maps/Emberfall_Town_House_1/scripts.pory"
    .2byte ITEM_ROSE_INCENSE
# 27 "data/maps/Emberfall_Town_House_1/scripts.pory"
    .2byte ITEM_WAVE_INCENSE
# 28 "data/maps/Emberfall_Town_House_1/scripts.pory"
    .2byte ITEM_FULL_INCENSE
# 29 "data/maps/Emberfall_Town_House_1/scripts.pory"
	pokemartlistend

NPC_EMBERFALL_TOWN_SHAYMIN_Text_0:
# 8 "data/maps/Emberfall_Town_House_1/scripts.pory"
	.string "Sup, do you want some incence$"

NPC_EMBERFALL_TOWN_SHAYMIN_Text_1:
# 11 "data/maps/Emberfall_Town_House_1/scripts.pory"
	.string "Please Come Again.$"
