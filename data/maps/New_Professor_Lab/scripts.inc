New_Professor_Lab_MapScripts::
	.byte 0


NewProfessor_EventScript_Turtwig::
# 11 "data/maps/New_Professor_Lab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x495, NewProfessor_EventScript_Turtwig_2
# 16 "data/maps/New_Professor_Lab/scripts.pory"
	showmonpic SPECIES_TURTWIG, 10, 3
# 17 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_1, MSGBOX_YESNO
# 18 "data/maps/New_Professor_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Turtwig_4
# 63 "data/maps/New_Professor_Lab/scripts.pory"
	hidemonpic
# 64 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_5, MSGBOX_AUTOCLOSE
	return

NewProfessor_EventScript_Turtwig_2:
# 12 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_0
	end

NewProfessor_EventScript_Turtwig_4:
# 19 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_2, MSGBOX_YESNO
# 20 "data/maps/New_Professor_Lab/scripts.pory"
	givemon SPECIES_TURTWIG, 5, ITEM_MIRACLE_SEED, isShiny = VAR_RESULT
# 22 "data/maps/New_Professor_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Turtwig_7
# 42 "data/maps/New_Professor_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Turtwig_8
# 58 "data/maps/New_Professor_Lab/scripts.pory"
	hidemonpic
# 59 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_4
	return

NewProfessor_EventScript_Turtwig_7:
# 23 "data/maps/New_Professor_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 24 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_3
# 25 "data/maps/New_Professor_Lab/scripts.pory"
	removeobject 4
# 26 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 27 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 28 "data/maps/New_Professor_Lab/scripts.pory"
	call NicknamePartyMon
# 29 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 30 "data/maps/New_Professor_Lab/scripts.pory"
	setvar VAR_UNUSED_0x40FF, 2
# 31 "data/maps/New_Professor_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 32 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 33 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 34 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 35 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 36 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 37 "data/maps/New_Professor_Lab/scripts.pory"
	call GivePokedex
	return

NewProfessor_EventScript_Turtwig_8:
# 43 "data/maps/New_Professor_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 44 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_3
# 45 "data/maps/New_Professor_Lab/scripts.pory"
	removeobject 4
# 46 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x022
# 47 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 48 "data/maps/New_Professor_Lab/scripts.pory"
	call NicknameBoxMon
# 49 "data/maps/New_Professor_Lab/scripts.pory"
	setvar VAR_UNUSED_0x40FF, 2
# 50 "data/maps/New_Professor_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 51 "data/maps/New_Professor_Lab/scripts.pory"
	call GivePokedex
	return


NewProfessor_EventScript_Oshawott::
# 74 "data/maps/New_Professor_Lab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x495, NewProfessor_EventScript_Oshawott_2
# 79 "data/maps/New_Professor_Lab/scripts.pory"
	showmonpic SPECIES_OSHAWOTT, 10, 3
# 80 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_0, MSGBOX_YESNO
# 81 "data/maps/New_Professor_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Oshawott_4
# 130 "data/maps/New_Professor_Lab/scripts.pory"
	hidemonpic
# 131 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_5, MSGBOX_AUTOCLOSE
	return

NewProfessor_EventScript_Oshawott_2:
# 75 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_0
	end

NewProfessor_EventScript_Oshawott_4:
# 82 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_2, MSGBOX_YESNO
# 83 "data/maps/New_Professor_Lab/scripts.pory"
	givemon SPECIES_OSHAWOTT, 5, ITEM_MYSTIC_WATER, isShiny = VAR_RESULT
# 85 "data/maps/New_Professor_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Oshawott_7
# 108 "data/maps/New_Professor_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Oshawott_8
# 125 "data/maps/New_Professor_Lab/scripts.pory"
	hidemonpic
# 126 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_4, MSGBOX_AUTOCLOSE
	return

NewProfessor_EventScript_Oshawott_7:
# 86 "data/maps/New_Professor_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 87 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_1
# 88 "data/maps/New_Professor_Lab/scripts.pory"
	removeobject 2
# 89 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 90 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 91 "data/maps/New_Professor_Lab/scripts.pory"
	call NicknamePartyMon
# 92 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 93 "data/maps/New_Professor_Lab/scripts.pory"
	setvar VAR_UNUSED_0x40FF, 2
# 94 "data/maps/New_Professor_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 95 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 96 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 97 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 98 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 99 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 100 "data/maps/New_Professor_Lab/scripts.pory"
	call GivePokedex1
	return

NewProfessor_EventScript_Oshawott_8:
# 109 "data/maps/New_Professor_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 110 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Oshawott_Text_1
# 111 "data/maps/New_Professor_Lab/scripts.pory"
	removeobject 2
# 112 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x021
# 113 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 114 "data/maps/New_Professor_Lab/scripts.pory"
	call NicknameBoxMon
# 115 "data/maps/New_Professor_Lab/scripts.pory"
	setvar VAR_UNUSED_0x40FF, 2
# 116 "data/maps/New_Professor_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 117 "data/maps/New_Professor_Lab/scripts.pory"
	call GivePokedex1
	return


New_Professor_Event_Script::
# 137 "data/maps/New_Professor_Lab/scripts.pory"
	compare VAR_UNUSED_0x40FF, 0
	goto_if_eq New_Professor_Event_Script_1
# 146 "data/maps/New_Professor_Lab/scripts.pory"
	lockall
# 147 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox New_Professor_Event_Script_Text_1, MSGBOX_AUTOCLOSE
# 148 "data/maps/New_Professor_Lab/scripts.pory"
	releaseall
	return

New_Professor_Event_Script_1:
# 138 "data/maps/New_Professor_Lab/scripts.pory"
	lockall
# 139 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox New_Professor_Event_Script_Text_0, MSGBOX_AUTOCLOSE
# 140 "data/maps/New_Professor_Lab/scripts.pory"
	releaseall
	return


NewProfessor_EventScript_Fuecoco::
# 157 "data/maps/New_Professor_Lab/scripts.pory"
	goto_if_set FLAG_UNUSED_0x495, NewProfessor_EventScript_Fuecoco_2
# 162 "data/maps/New_Professor_Lab/scripts.pory"
	showmonpic SPECIES_FUECOCO, 10, 3
# 163 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Fuecoco_Text_0, MSGBOX_YESNO
# 164 "data/maps/New_Professor_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewProfessor_EventScript_Fuecoco_4
# 213 "data/maps/New_Professor_Lab/scripts.pory"
	hidemonpic
# 214 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_5, MSGBOX_AUTOCLOSE
	return

NewProfessor_EventScript_Fuecoco_2:
# 158 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_0
	end

NewProfessor_EventScript_Fuecoco_4:
# 165 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_2, MSGBOX_YESNO
# 166 "data/maps/New_Professor_Lab/scripts.pory"
	givemon SPECIES_FUECOCO, 5, ITEM_RARE_CANDY, isShiny = VAR_RESULT
# 168 "data/maps/New_Professor_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewProfessor_EventScript_Fuecoco_7
# 191 "data/maps/New_Professor_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewProfessor_EventScript_Fuecoco_8
# 208 "data/maps/New_Professor_Lab/scripts.pory"
	hidemonpic
# 209 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Turtwig_Text_4, MSGBOX_AUTOCLOSE
	return

NewProfessor_EventScript_Fuecoco_7:
# 169 "data/maps/New_Professor_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 170 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Fuecoco_Text_1
# 171 "data/maps/New_Professor_Lab/scripts.pory"
	removeobject 3
# 172 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 173 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 174 "data/maps/New_Professor_Lab/scripts.pory"
	call NicknamePartyMon
# 175 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 176 "data/maps/New_Professor_Lab/scripts.pory"
	setvar VAR_UNUSED_0x40FF, 2
# 177 "data/maps/New_Professor_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 3
# 178 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 179 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 180 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 181 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 182 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_ADVENTURE_STARTED
# 183 "data/maps/New_Professor_Lab/scripts.pory"
	call GivePokedex2
	return

NewProfessor_EventScript_Fuecoco_8:
# 192 "data/maps/New_Professor_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 193 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NewProfessor_EventScript_Fuecoco_Text_1
# 194 "data/maps/New_Professor_Lab/scripts.pory"
	removeobject 3
# 195 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x023
# 196 "data/maps/New_Professor_Lab/scripts.pory"
	setflag FLAG_UNUSED_0x495
# 197 "data/maps/New_Professor_Lab/scripts.pory"
	call NicknameBoxMon
# 198 "data/maps/New_Professor_Lab/scripts.pory"
	setvar VAR_UNUSED_0x40FF, 3
# 199 "data/maps/New_Professor_Lab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 200 "data/maps/New_Professor_Lab/scripts.pory"
	call GivePokedex2
	return


NicknamePartyMon::
# 221 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 222 "data/maps/New_Professor_Lab/scripts.pory"
	hidemonpic
# 223 "data/maps/New_Professor_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 224 "data/maps/New_Professor_Lab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 225 "data/maps/New_Professor_Lab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 230 "data/maps/New_Professor_Lab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 231 "data/maps/New_Professor_Lab/scripts.pory"
	hidemonpic
# 232 "data/maps/New_Professor_Lab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_1
	return

NicknameBoxMon_1:
# 233 "data/maps/New_Professor_Lab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	return


NewProfessor_EventScript_Turtwig_Text_0:
# 12 "data/maps/New_Professor_Lab/scripts.pory"
	.string "You've already chosen a Pokémon! No more are available.$"

NewProfessor_EventScript_Turtwig_Text_1:
# 17 "data/maps/New_Professor_Lab/scripts.pory"
	.string "Do you want to choose Turtwig?$"

NewProfessor_EventScript_Turtwig_Text_2:
# 19 "data/maps/New_Professor_Lab/scripts.pory"
	.string "Do you want it to be shiny?$"

NewProfessor_EventScript_Turtwig_Text_3:
# 24 "data/maps/New_Professor_Lab/scripts.pory"
	.string "Received Turtwig!$"

NewProfessor_EventScript_Turtwig_Text_4:
# 59 "data/maps/New_Professor_Lab/scripts.pory"
	.string "No More Room!$"

NewProfessor_EventScript_Turtwig_Text_5:
# 64 "data/maps/New_Professor_Lab/scripts.pory"
	.string "Maybe you'll choose another Pokémon.$"

NewProfessor_EventScript_Oshawott_Text_0:
# 80 "data/maps/New_Professor_Lab/scripts.pory"
	.string "Do you want to choose Oshawott?$"

NewProfessor_EventScript_Oshawott_Text_1:
# 87 "data/maps/New_Professor_Lab/scripts.pory"
	.string "Received Oshawott!$"

New_Professor_Event_Script_Text_0:
# 139 "data/maps/New_Professor_Lab/scripts.pory"
	.string "You must take a Pokémon$"

New_Professor_Event_Script_Text_1:
# 147 "data/maps/New_Professor_Lab/scripts.pory"
	.string "Good luck on your adventure!$"

NewProfessor_EventScript_Fuecoco_Text_0:
# 163 "data/maps/New_Professor_Lab/scripts.pory"
	.string "Do you want to choose Fuecoco?$"

NewProfessor_EventScript_Fuecoco_Text_1:
# 170 "data/maps/New_Professor_Lab/scripts.pory"
	.string "Received Fuecoco!$"

NicknamePartyMon_Text_0:
# 221 "data/maps/New_Professor_Lab/scripts.pory"
	.string "Give it a nickname?$"
