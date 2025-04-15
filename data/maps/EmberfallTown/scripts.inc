# 1 "data/maps/EmberfallTown/scripts.pory"

# 2 "data/maps/EmberfallTown/scripts.pory"
EmberfallTown_MapScripts::
# 3 "data/maps/EmberfallTown/scripts.pory"
	.byte 0

AEGISLASH::
# 10 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 11 "data/maps/EmberfallTown/scripts.pory"
	faceplayer
# 12 "data/maps/EmberfallTown/scripts.pory"
	applymovement 2, exlamationmovement
# 13 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 2
# 14 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


PokeCenter_Employee::
# 21 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 22 "data/maps/EmberfallTown/scripts.pory"
	faceplayer
# 23 "data/maps/EmberfallTown/scripts.pory"
	msgbox PokeCenter_Employee_Text_0, MSGBOX_YESNO
# 24 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PokeCenter_Employee_1
# 34 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 35 "data/maps/EmberfallTown/scripts.pory"
	msgbox PokeCenter_Employee_Text_3, MSGBOX_NPC
# 36 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return

PokeCenter_Employee_1:
# 25 "data/maps/EmberfallTown/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 26 "data/maps/EmberfallTown/scripts.pory"
	special HealPlayerParty
# 27 "data/maps/EmberfallTown/scripts.pory"
	msgbox PokeCenter_Employee_Text_1
# 28 "data/maps/EmberfallTown/scripts.pory"
	msgbox PokeCenter_Employee_Text_2
# 29 "data/maps/EmberfallTown/scripts.pory"
	waitmessage
# 30 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	end


Mom_Start_Game_Dialogue::
# 44 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_NEW0, 0
	goto_if_eq Mom_Start_Game_Dialogue_1
	return

Mom_Start_Game_Dialogue_1:
# 45 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceMom
# 46 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 47 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MomGreeting
# 48 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 49 "data/maps/EmberfallTown/scripts.pory"
	msgbox Mom_Start_Game_Dialogue_Text_0, MSGBOX_AUTOCLOSE
# 50 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Face_DOWN_Team_MAGMA
# 51 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Momgoesback
# 52 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 53 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_NEW0, 1
# 54 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_MOM_STARTER_CHOICE_SPEECH, 0
# 55 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 60 "data/maps/EmberfallTown/scripts.pory"
Momgoesback:
# 61 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 61 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 61 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 61 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 61 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 62 "data/maps/EmberfallTown/scripts.pory"
	face_up
	step_end

# 66 "data/maps/EmberfallTown/scripts.pory"
MomGreeting:
# 67 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 67 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 67 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 67 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 67 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 68 "data/maps/EmberfallTown/scripts.pory"
	face_player
	step_end

# 71 "data/maps/EmberfallTown/scripts.pory"
FaceMom:
# 72 "data/maps/EmberfallTown/scripts.pory"
	face_left
	step_end

Mom_Start_Game_Dialogue1::
# 77 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_NEW0, 0
	goto_if_eq Mom_Start_Game_Dialogue1_1
	return

Mom_Start_Game_Dialogue1_1:
# 78 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceMom
# 79 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 80 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MomGreeting1
# 81 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 82 "data/maps/EmberfallTown/scripts.pory"
	msgbox Mom_Start_Game_Dialogue_Text_0, MSGBOX_AUTOCLOSE
# 83 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Face_DOWN_Team_MAGMA
# 84 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Momgoesback1
# 85 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 86 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_NEW0, 1
# 87 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_MOM_STARTER_CHOICE_SPEECH, 0
# 88 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 94 "data/maps/EmberfallTown/scripts.pory"
Momgoesback1:
# 95 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 95 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 95 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 95 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 95 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 95 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 95 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 96 "data/maps/EmberfallTown/scripts.pory"
	face_up
	step_end

# 100 "data/maps/EmberfallTown/scripts.pory"
MomGreeting1:
# 101 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 101 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 101 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 101 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 101 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 101 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 101 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 102 "data/maps/EmberfallTown/scripts.pory"
	face_player
	step_end

Mom_Start_Game_Dialogue2::
# 108 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_NEW0, 0
	goto_if_eq Mom_Start_Game_Dialogue2_1
	return

Mom_Start_Game_Dialogue2_1:
# 109 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceMom
# 110 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 111 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MomGreeting2
# 112 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 113 "data/maps/EmberfallTown/scripts.pory"
	msgbox Mom_Start_Game_Dialogue_Text_0, MSGBOX_AUTOCLOSE
# 114 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Face_DOWN_Team_MAGMA
# 115 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, momgoesback2
# 116 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 117 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_NEW0, 1
# 118 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_MOM_STARTER_CHOICE_SPEECH, 0
# 119 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 124 "data/maps/EmberfallTown/scripts.pory"
momgoesback2:
# 125 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 125 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 126 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 127 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 127 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 127 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 127 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 128 "data/maps/EmberfallTown/scripts.pory"
	face_up
	step_end

# 131 "data/maps/EmberfallTown/scripts.pory"
MomGreeting2:
# 132 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 132 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 132 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 132 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 132 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 133 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 134 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 135 "data/maps/EmberfallTown/scripts.pory"
	face_player
	step_end

Mom_speech::
# 144 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_MOM_STARTER_CHOICE_SPEECH, 0
	goto_if_eq Mom_speech_2
Mom_speech_1:
# 155 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq Mom_speech_5
Mom_speech_4:
# 166 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_MOM_STARTER_CHOICE_SPEECH, 2
	goto_if_eq Mom_speech_8
Mom_speech_7:
# 177 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_MOM_STARTER_CHOICE_SPEECH, 3
	goto_if_eq Mom_speech_10
	return

Mom_speech_2:
# 145 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 146 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MOMFACERIGHT
# 147 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 148 "data/maps/EmberfallTown/scripts.pory"
	msgbox Mom_speech_Text_0, MSGBOX_AUTOCLOSE
# 149 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MOMFACEUP
# 150 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 151 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	goto Mom_speech_1

Mom_speech_5:
# 156 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 157 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MOMFACERIGHT
# 158 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 159 "data/maps/EmberfallTown/scripts.pory"
	msgbox Mom_speech_Text_1, MSGBOX_AUTOCLOSE
# 160 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MOMFACEUP
# 161 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 162 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	goto Mom_speech_4

Mom_speech_8:
# 167 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 168 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MOMFACERIGHT
# 169 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 170 "data/maps/EmberfallTown/scripts.pory"
	msgbox Mom_speech_Text_2, MSGBOX_AUTOCLOSE
# 171 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MOMFACEUP
# 172 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 173 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	goto Mom_speech_7

Mom_speech_10:
# 178 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 179 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MOMFACERIGHT
# 180 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 181 "data/maps/EmberfallTown/scripts.pory"
	msgbox Mom_speech_Text_3, MSGBOX_AUTOCLOSE
# 182 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MOMFACEUP
# 183 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 184 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 192 "data/maps/EmberfallTown/scripts.pory"
MOMFACERIGHT:
# 193 "data/maps/EmberfallTown/scripts.pory"
	faceplayer
	step_end

# 196 "data/maps/EmberfallTown/scripts.pory"
MOMFACEUP:
# 197 "data/maps/EmberfallTown/scripts.pory"
	face_up
	step_end

BED::
# 202 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 203 "data/maps/EmberfallTown/scripts.pory"
	msgbox BED_Text_0, MSGBOX_YESNO
# 204 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BED_1
# 213 "data/maps/EmberfallTown/scripts.pory"
	msgbox BED_Text_2, MSGBOX_AUTOCLOSE
	return

BED_1:
# 205 "data/maps/EmberfallTown/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 206 "data/maps/EmberfallTown/scripts.pory"
	special HealPlayerParty
# 207 "data/maps/EmberfallTown/scripts.pory"
	msgbox BED_Text_1
# 208 "data/maps/EmberfallTown/scripts.pory"
	waitmessage
# 209 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


Trigger_Go_Get_Your_Starters::
# 223 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_UNUSED_0x40FF, 0
	goto_if_eq Trigger_Go_Get_Your_Starters_1
# 232 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return

Trigger_Go_Get_Your_Starters_1:
# 224 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 225 "data/maps/EmberfallTown/scripts.pory"
	msgbox Trigger_Go_Get_Your_Starters_Text_0
# 226 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Knockback
# 227 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 228 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 237 "data/maps/EmberfallTown/scripts.pory"
Knockback:
# 238 "data/maps/EmberfallTown/scripts.pory"
	face_left
# 239 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 240 "data/maps/EmberfallTown/scripts.pory"
	walk_left
	step_end

GivePokedex::
# 248 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_UNUSED_0x40FF, 0
	goto_if_ne GivePokedex_1
# 273 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return

GivePokedex_1:
# 249 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 250 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GivePokdexMovement
# 251 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 252 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Professor_Pokdex
# 253 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 254 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex_Text_0, MSGBOX_AUTOCLOSE
# 255 "data/maps/EmberfallTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 256 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 257 "data/maps/EmberfallTown/scripts.pory"
	message GivePokedex_Text_1
# 258 "data/maps/EmberfallTown/scripts.pory"
	waitfanfare
# 259 "data/maps/EmberfallTown/scripts.pory"
	closemessage
# 260 "data/maps/EmberfallTown/scripts.pory"
	special SetUnlockedPokedexFlags
# 261 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex_Text_2, MSGBOX_AUTOCLOSE
# 262 "data/maps/EmberfallTown/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 263 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex_Text_3, MSGBOX_DEFAULT
# 264 "data/maps/EmberfallTown/scripts.pory"
	waitmessage
# 265 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Professor_goes_back
# 266 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 267 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 279 "data/maps/EmberfallTown/scripts.pory"
Professor_goes_back:
# 280 "data/maps/EmberfallTown/scripts.pory"
	face_down
	step_end

# 287 "data/maps/EmberfallTown/scripts.pory"
GivePokdexMovement:
# 288 "data/maps/EmberfallTown/scripts.pory"
	face_right
	step_end

# 292 "data/maps/EmberfallTown/scripts.pory"
Professor_Pokdex:
# 293 "data/maps/EmberfallTown/scripts.pory"
	face_left
	step_end

GivePokedex1::
# 300 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_UNUSED_0x40FF, 0
	goto_if_ne GivePokedex1_1
# 325 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return

GivePokedex1_1:
# 301 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 302 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GivePokdexMovement
# 303 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 304 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Professor_Pokdex1
# 305 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 306 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex1_Text_0, MSGBOX_AUTOCLOSE
# 307 "data/maps/EmberfallTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 308 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 309 "data/maps/EmberfallTown/scripts.pory"
	message GivePokedex_Text_1
# 310 "data/maps/EmberfallTown/scripts.pory"
	waitfanfare
# 311 "data/maps/EmberfallTown/scripts.pory"
	closemessage
# 312 "data/maps/EmberfallTown/scripts.pory"
	special SetUnlockedPokedexFlags
# 313 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex_Text_2, MSGBOX_AUTOCLOSE
# 314 "data/maps/EmberfallTown/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 315 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex_Text_3, MSGBOX_DEFAULT
# 316 "data/maps/EmberfallTown/scripts.pory"
	waitmessage
# 317 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Professor_goes_back1
# 318 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 319 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 330 "data/maps/EmberfallTown/scripts.pory"
Professor_goes_back1:
# 331 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 332 "data/maps/EmberfallTown/scripts.pory"
	face_down
	step_end

# 338 "data/maps/EmberfallTown/scripts.pory"
Professor_Pokdex1:
# 339 "data/maps/EmberfallTown/scripts.pory"
	walk_left
	step_end

GivePokedex2::
# 347 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_UNUSED_0x40FF, 0
	goto_if_ne GivePokedex2_1
# 372 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return

GivePokedex2_1:
# 348 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 349 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GivePokdexMovement
# 350 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 351 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Professor_Pokdex2
# 352 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 353 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex1_Text_0, MSGBOX_AUTOCLOSE
# 354 "data/maps/EmberfallTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 355 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 356 "data/maps/EmberfallTown/scripts.pory"
	message GivePokedex_Text_1
# 357 "data/maps/EmberfallTown/scripts.pory"
	waitfanfare
# 358 "data/maps/EmberfallTown/scripts.pory"
	closemessage
# 359 "data/maps/EmberfallTown/scripts.pory"
	special SetUnlockedPokedexFlags
# 360 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex_Text_2, MSGBOX_AUTOCLOSE
# 361 "data/maps/EmberfallTown/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 362 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex_Text_3, MSGBOX_DEFAULT
# 363 "data/maps/EmberfallTown/scripts.pory"
	waitmessage
# 364 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Professor_goes_back2
# 365 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 366 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 377 "data/maps/EmberfallTown/scripts.pory"
Professor_goes_back2:
# 378 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 379 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 380 "data/maps/EmberfallTown/scripts.pory"
	face_down
	step_end

# 384 "data/maps/EmberfallTown/scripts.pory"
Professor_Pokdex2:
# 385 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 386 "data/maps/EmberfallTown/scripts.pory"
	walk_left
	step_end

Old_Man::
# 393 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 394 "data/maps/EmberfallTown/scripts.pory"
	faceplayer
# 395 "data/maps/EmberfallTown/scripts.pory"
	msgbox Old_Man_Text_0
# 396 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


Trigger_Exp_Share_All::
# 401 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_EXP_SHARE_ALL
# 402 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


TEAM_MEMBER::
# 410 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_ROUTE133_STATE, 0
	goto_if_eq TEAM_MEMBER_1
	return

TEAM_MEMBER_1:
# 411 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 412 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH
# 413 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 414 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_0, MSGBOX_AUTOCLOSE
# 415 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH1
# 416 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 417 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_1, MSGBOX_AUTOCLOSE
# 418 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH1
# 419 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 420 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_2, MSGBOX_AUTOCLOSE
# 421 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 422 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 423 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Face_DOWN_Team_MAGMA
# 424 "data/maps/EmberfallTown/scripts.pory"
	applymovement 2, Face_DOWN_Team_MAGMA
# 425 "data/maps/EmberfallTown/scripts.pory"
	applymovement 3, Face_DOWN_Team_MAGMA
# 426 "data/maps/EmberfallTown/scripts.pory"
	applymovement 4, Face_DOWN_Team_MAGMA
# 427 "data/maps/EmberfallTown/scripts.pory"
	applymovement 5, Face_DOWN_Team_MAGMA
# 428 "data/maps/EmberfallTown/scripts.pory"
	applymovement 6, Face_DOWN_Team_MAGMA
# 429 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Face_UP
# 430 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_3, MSGBOX_AUTOCLOSE
# 431 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_TEAM_MAGMA_Leave
# 432 "data/maps/EmberfallTown/scripts.pory"
	applymovement 2, MAGMAMEMBERWALKUPCRAZY
# 433 "data/maps/EmberfallTown/scripts.pory"
	removeobject 2
# 434 "data/maps/EmberfallTown/scripts.pory"
	applymovement 6, MAGMAMEMBERWALKUPCRAZY
# 435 "data/maps/EmberfallTown/scripts.pory"
	removeobject 6
# 436 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MAGMAMEMBERWALKUPCRAZY
# 437 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 438 "data/maps/EmberfallTown/scripts.pory"
	removeobject 1
# 439 "data/maps/EmberfallTown/scripts.pory"
	applymovement 5, MAGMAMEMBERWALKUPCRAZY
# 440 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 5
# 441 "data/maps/EmberfallTown/scripts.pory"
	removeobject 5
# 442 "data/maps/EmberfallTown/scripts.pory"
	applymovement 3, MAGMAMEMBERWALKUPCRAZY
# 443 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 3
# 444 "data/maps/EmberfallTown/scripts.pory"
	removeobject 3
# 445 "data/maps/EmberfallTown/scripts.pory"
	applymovement 4, MAGMAMEMBERWALKUPCRAZY
# 446 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 4
# 447 "data/maps/EmberfallTown/scripts.pory"
	removeobject 4
# 448 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_ROUTE133_STATE, 2
# 449 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 458 "data/maps/EmberfallTown/scripts.pory"
Player_Face_UP:
# 459 "data/maps/EmberfallTown/scripts.pory"
	face_up
	step_end

# 463 "data/maps/EmberfallTown/scripts.pory"
Face_DOWN_Team_MAGMA:
# 464 "data/maps/EmberfallTown/scripts.pory"
	face_down
	step_end

TEAM_MEMBER1::
# 471 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_ROUTE133_STATE, 0
	goto_if_eq TEAM_MEMBER1_1
	return

TEAM_MEMBER1_1:
# 472 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 473 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH_custom
# 474 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 475 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_0, MSGBOX_AUTOCLOSE
# 476 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH1
# 477 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 478 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_1, MSGBOX_AUTOCLOSE
# 479 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH1
# 480 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 481 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_2, MSGBOX_AUTOCLOSE
# 482 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 483 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 484 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Face_DOWN_Team_MAGMA
# 485 "data/maps/EmberfallTown/scripts.pory"
	applymovement 2, Face_DOWN_Team_MAGMA
# 486 "data/maps/EmberfallTown/scripts.pory"
	applymovement 3, Face_DOWN_Team_MAGMA
# 487 "data/maps/EmberfallTown/scripts.pory"
	applymovement 4, Face_DOWN_Team_MAGMA
# 488 "data/maps/EmberfallTown/scripts.pory"
	applymovement 5, Face_DOWN_Team_MAGMA
# 489 "data/maps/EmberfallTown/scripts.pory"
	applymovement 6, Face_DOWN_Team_MAGMA
# 490 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Face_UP
# 491 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_3, MSGBOX_AUTOCLOSE
# 492 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_TEAM_MAGMA_Leave
# 493 "data/maps/EmberfallTown/scripts.pory"
	applymovement 2, MAGMAMEMBERWALKUPCRAZY
# 494 "data/maps/EmberfallTown/scripts.pory"
	removeobject 2
# 495 "data/maps/EmberfallTown/scripts.pory"
	applymovement 6, MAGMAMEMBERWALKUPCRAZY
# 496 "data/maps/EmberfallTown/scripts.pory"
	removeobject 6
# 497 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MAGMAMEMBERWALKUPCRAZY
# 498 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 499 "data/maps/EmberfallTown/scripts.pory"
	removeobject 1
# 500 "data/maps/EmberfallTown/scripts.pory"
	applymovement 5, MAGMAMEMBERWALKUPCRAZY
# 501 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 5
# 502 "data/maps/EmberfallTown/scripts.pory"
	removeobject 5
# 503 "data/maps/EmberfallTown/scripts.pory"
	applymovement 3, MAGMAMEMBERWALKUPCRAZY
# 504 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 3
# 505 "data/maps/EmberfallTown/scripts.pory"
	removeobject 3
# 506 "data/maps/EmberfallTown/scripts.pory"
	applymovement 4, MAGMAMEMBERWALKUPCRAZY
# 507 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 4
# 508 "data/maps/EmberfallTown/scripts.pory"
	removeobject 4
# 509 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_ROUTE133_STATE, 2
# 510 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


TEAM_MEMBER2::
# 519 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_ROUTE133_STATE, 0
	goto_if_eq TEAM_MEMBER2_1
	return

TEAM_MEMBER2_1:
# 520 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 521 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH_custom1
# 522 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 523 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_0, MSGBOX_AUTOCLOSE
# 524 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH1
# 525 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 526 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_1, MSGBOX_AUTOCLOSE
# 527 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH1
# 528 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 529 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_2, MSGBOX_AUTOCLOSE
# 530 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 531 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 532 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Face_DOWN_Team_MAGMA
# 533 "data/maps/EmberfallTown/scripts.pory"
	applymovement 2, Face_DOWN_Team_MAGMA
# 534 "data/maps/EmberfallTown/scripts.pory"
	applymovement 3, Face_DOWN_Team_MAGMA
# 535 "data/maps/EmberfallTown/scripts.pory"
	applymovement 4, Face_DOWN_Team_MAGMA
# 536 "data/maps/EmberfallTown/scripts.pory"
	applymovement 5, Face_DOWN_Team_MAGMA
# 537 "data/maps/EmberfallTown/scripts.pory"
	applymovement 6, Face_DOWN_Team_MAGMA
# 538 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Face_UP
# 539 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_3, MSGBOX_AUTOCLOSE
# 540 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_TEAM_MAGMA_Leave
# 541 "data/maps/EmberfallTown/scripts.pory"
	applymovement 2, MAGMAMEMBERWALKUPCRAZY
# 542 "data/maps/EmberfallTown/scripts.pory"
	removeobject 2
# 543 "data/maps/EmberfallTown/scripts.pory"
	applymovement 6, MAGMAMEMBERWALKUPCRAZY
# 544 "data/maps/EmberfallTown/scripts.pory"
	removeobject 6
# 545 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MAGMAMEMBERWALKUPCRAZY
# 546 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 547 "data/maps/EmberfallTown/scripts.pory"
	removeobject 1
# 548 "data/maps/EmberfallTown/scripts.pory"
	applymovement 5, MAGMAMEMBERWALKUPCRAZY
# 549 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 5
# 550 "data/maps/EmberfallTown/scripts.pory"
	removeobject 5
# 551 "data/maps/EmberfallTown/scripts.pory"
	applymovement 3, MAGMAMEMBERWALKUPCRAZY
# 552 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 3
# 553 "data/maps/EmberfallTown/scripts.pory"
	removeobject 3
# 554 "data/maps/EmberfallTown/scripts.pory"
	applymovement 4, MAGMAMEMBERWALKUPCRAZY
# 555 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 4
# 556 "data/maps/EmberfallTown/scripts.pory"
	removeobject 4
# 557 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_ROUTE133_STATE, 2
# 558 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 564 "data/maps/EmberfallTown/scripts.pory"
MAGMAMEMBERWALKUPCRAZY:
# 565 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 565 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 565 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 565 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 565 "data/maps/EmberfallTown/scripts.pory"
	walk_up
	step_end

# 569 "data/maps/EmberfallTown/scripts.pory"
PlayerMoveDown:
# 570 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 570 "data/maps/EmberfallTown/scripts.pory"
	walk_down
	step_end

# 578 "data/maps/EmberfallTown/scripts.pory"
Magma1leave2:
# 579 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 580 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 580 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 580 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 580 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 580 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 580 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 580 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 580 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 580 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 580 "data/maps/EmberfallTown/scripts.pory"
	walk_up
	step_end

# 584 "data/maps/EmberfallTown/scripts.pory"
Magma1leave:
# 585 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 586 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 586 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 586 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 586 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 586 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 586 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 586 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 586 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 586 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 586 "data/maps/EmberfallTown/scripts.pory"
	walk_up
	step_end

# 590 "data/maps/EmberfallTown/scripts.pory"
TEAM_MEMBER_WALKTROUGH_custom1:
# 591 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 592 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 592 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 592 "data/maps/EmberfallTown/scripts.pory"
	walk_down
	step_end

# 597 "data/maps/EmberfallTown/scripts.pory"
TEAM_MEMBER_WALKTROUGH_custom:
# 598 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 598 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 598 "data/maps/EmberfallTown/scripts.pory"
	walk_down
	step_end

# 602 "data/maps/EmberfallTown/scripts.pory"
TEAM_MEMBER_WALKTROUGH:
# 603 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 604 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 604 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 604 "data/maps/EmberfallTown/scripts.pory"
	walk_down
	step_end

# 608 "data/maps/EmberfallTown/scripts.pory"
TEAM_MEMBER_WALKTROUGH1:
# 609 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 609 "data/maps/EmberfallTown/scripts.pory"
	walk_down
	step_end

Team_Magma_Boss_Trigger::
# 616 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 617 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_MAGMA_BOSS
# 618 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, Exclamationmark
# 619 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 7
# 620 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, BossMAGMA
# 621 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 7
# 622 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_0, MSGBOX_AUTOCLOSE
# 623 "data/maps/EmberfallTown/scripts.pory"
	waitmessage
# 624 "data/maps/EmberfallTown/scripts.pory"
	givemon SPECIES_SLUGMA, 9
# 625 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_1
# 626 "data/maps/EmberfallTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 627 "data/maps/EmberfallTown/scripts.pory"
	call NicknamePartyMon
# 628 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_2, MSGBOX_AUTOCLOSE
# 629 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, BossMAGMAleave
# 630 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 7
# 631 "data/maps/EmberfallTown/scripts.pory"
	removeobject 7
# 632 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_BOSS_MAGMA_1, 2
# 633 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 637 "data/maps/EmberfallTown/scripts.pory"
BossMAGMAleave:
# 638 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 638 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 638 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 638 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 638 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 638 "data/maps/EmberfallTown/scripts.pory"
	walk_down
	step_end

# 642 "data/maps/EmberfallTown/scripts.pory"
BossMAGMA:
# 643 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 644 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 644 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 644 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 644 "data/maps/EmberfallTown/scripts.pory"
	walk_up
	step_end

Team_Magma_Boss_Trigger1::
# 649 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 650 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_MAGMA_BOSS
# 651 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, Exclamationmark
# 652 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 7
# 653 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, BossMAGMA1
# 654 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 7
# 655 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_0, MSGBOX_AUTOCLOSE
# 656 "data/maps/EmberfallTown/scripts.pory"
	waitmessage
# 657 "data/maps/EmberfallTown/scripts.pory"
	givemon SPECIES_SLUGMA, 9
# 658 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_1
# 659 "data/maps/EmberfallTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 660 "data/maps/EmberfallTown/scripts.pory"
	call NicknamePartyMon
# 661 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_2, MSGBOX_AUTOCLOSE
# 662 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, BossMAGMAleave
# 663 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 7
# 664 "data/maps/EmberfallTown/scripts.pory"
	removeobject 7
# 665 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_BOSS_MAGMA_1, 2
# 666 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 669 "data/maps/EmberfallTown/scripts.pory"
BossMAGMA1:
# 670 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 670 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 671 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 671 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 671 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 671 "data/maps/EmberfallTown/scripts.pory"
	walk_up
	step_end

Team_Magma_Boss_Trigger2::
# 678 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 679 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_MAGMA_BOSS
# 680 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, Exclamationmark
# 681 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, BossMAGMA1
# 682 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 7
# 683 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_0, MSGBOX_AUTOCLOSE
# 684 "data/maps/EmberfallTown/scripts.pory"
	waitmessage
# 685 "data/maps/EmberfallTown/scripts.pory"
	givemon SPECIES_SLUGMA, 9
# 686 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_1
# 687 "data/maps/EmberfallTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 688 "data/maps/EmberfallTown/scripts.pory"
	call NicknamePartyMon
# 689 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_2, MSGBOX_AUTOCLOSE
# 690 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, BossMAGMAleave
# 691 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 7
# 692 "data/maps/EmberfallTown/scripts.pory"
	removeobject 7
# 693 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_BOSS_MAGMA_1, 2
# 694 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 697 "data/maps/EmberfallTown/scripts.pory"
Exclamationmark:
# 698 "data/maps/EmberfallTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 702 "data/maps/EmberfallTown/scripts.pory"
BossMAGMA2:
# 703 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 703 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 703 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 704 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 704 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 704 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 704 "data/maps/EmberfallTown/scripts.pory"
	walk_up
	step_end

TRIGGERTPNEWWORLD1::
# 710 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 711 "data/maps/EmberfallTown/scripts.pory"
	applymovement 8, SAILORMOVEMENT
# 712 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 8
# 713 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Face_DOWN_Team_MAGMA
# 714 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 715 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_0, MSGBOX_YESNO
# 717 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TRIGGERTPNEWWORLD1_1
# 723 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_2, MSGBOX_AUTOCLOSE
# 724 "data/maps/EmberfallTown/scripts.pory"
	applymovement 8, SAILORGOESBACK
# 725 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 8
	return

TRIGGERTPNEWWORLD1_1:
# 718 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_1, MSGBOX_AUTOCLOSE
# 719 "data/maps/EmberfallTown/scripts.pory"
	warp MAP_AEGISPORT, 8, 17
	return


TRIGGERTPNEWWORLD2::
# 731 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 732 "data/maps/EmberfallTown/scripts.pory"
	applymovement 8, SAILORMOVEMENT1
# 733 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 8
# 734 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Face_DOWN_Team_MAGMA
# 735 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 736 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_0, MSGBOX_YESNO
# 738 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TRIGGERTPNEWWORLD2_1
# 744 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_2, MSGBOX_AUTOCLOSE
# 745 "data/maps/EmberfallTown/scripts.pory"
	applymovement 8, SAILORGOESBACK
# 746 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 8
	return

TRIGGERTPNEWWORLD2_1:
# 739 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_1, MSGBOX_AUTOCLOSE
# 740 "data/maps/EmberfallTown/scripts.pory"
	warp MAP_AEGISPORT, 8, 17
	return


TRIGGERTPNEWWORLD3::
# 751 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 752 "data/maps/EmberfallTown/scripts.pory"
	applymovement 8, SAILORMOVEMENT2
# 753 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 8
# 754 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Face_DOWN_Team_MAGMA
# 755 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 756 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_0, MSGBOX_YESNO
# 758 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TRIGGERTPNEWWORLD3_1
# 764 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_2, MSGBOX_AUTOCLOSE
# 765 "data/maps/EmberfallTown/scripts.pory"
	applymovement 8, SAILORGOESBACK
# 766 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 8
	return

TRIGGERTPNEWWORLD3_1:
# 759 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_1, MSGBOX_AUTOCLOSE
# 760 "data/maps/EmberfallTown/scripts.pory"
	warp MAP_AEGISPORT, 8, 17
	return


# 770 "data/maps/EmberfallTown/scripts.pory"
SAILORMOVEMENT2:
# 771 "data/maps/EmberfallTown/scripts.pory"
	face_up
	step_end

# 775 "data/maps/EmberfallTown/scripts.pory"
SAILORMOVEMENT1:
# 776 "data/maps/EmberfallTown/scripts.pory"
	walk_up
	step_end

# 780 "data/maps/EmberfallTown/scripts.pory"
SAILORMOVEMENT:
# 781 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 781 "data/maps/EmberfallTown/scripts.pory"
	walk_up
	step_end

# 785 "data/maps/EmberfallTown/scripts.pory"
SAILORGOESBACK:
# 786 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 786 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 787 "data/maps/EmberfallTown/scripts.pory"
	face_up
	step_end

PokeCenter_Employee_Text_0:
# 23 "data/maps/EmberfallTown/scripts.pory"
	.string "Would you like me to heal your party?$"

PokeCenter_Employee_Text_1:
# 27 "data/maps/EmberfallTown/scripts.pory"
	.string "Your party has been restored!$"

PokeCenter_Employee_Text_2:
# 28 "data/maps/EmberfallTown/scripts.pory"
	.string "Come again soon.$"

PokeCenter_Employee_Text_3:
# 35 "data/maps/EmberfallTown/scripts.pory"
	.string "Have a nice day$"

Mom_Start_Game_Dialogue_Text_0:
# 49 "data/maps/EmberfallTown/scripts.pory"
	.string "Did you sleep well? The boss is looking\n"
	.string "for you! Hurry and pick a Pokémon from\l"
	.string "the lab.$"

Mom_speech_Text_0:
# 148 "data/maps/EmberfallTown/scripts.pory"
	.string "I will always be proud of you son!$"

Mom_speech_Text_1:
# 159 "data/maps/EmberfallTown/scripts.pory"
	.string "Turtwig is such a strong Pokémon , i am\n"
	.string "glad you chose it.$"

Mom_speech_Text_2:
# 170 "data/maps/EmberfallTown/scripts.pory"
	.string "Oshawott is such a strong Pokémon , i am\n"
	.string "glad you chose it.$"

Mom_speech_Text_3:
# 181 "data/maps/EmberfallTown/scripts.pory"
	.string "Fuecoco is such a strong Pokémon , i am\n"
	.string "glad you chose it.$"

BED_Text_0:
# 203 "data/maps/EmberfallTown/scripts.pory"
	.string "Do you want to rest?$"

BED_Text_1:
# 207 "data/maps/EmberfallTown/scripts.pory"
	.string "You party has been restored.$"

BED_Text_2:
# 213 "data/maps/EmberfallTown/scripts.pory"
	.string "Have a good day$"

Trigger_Go_Get_Your_Starters_Text_0:
# 225 "data/maps/EmberfallTown/scripts.pory"
	.string "You must choose a Pokémon!$"

GivePokedex_Text_0:
# 254 "data/maps/EmberfallTown/scripts.pory"
	.string "Here, {PLAYER}! I ordered this for my\n"
	.string "research, but I think you should have\l"
	.string "this Pokédex!$"

GivePokedex_Text_1:
# 257 "data/maps/EmberfallTown/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

GivePokedex_Text_2:
# 261 "data/maps/EmberfallTown/scripts.pory"
	.format "Also take these with you."

GivePokedex_Text_3:
# 263 "data/maps/EmberfallTown/scripts.pory"
	.string "These allow you to catch your own\n"
	.string "Pokemon in tall grass so you can collect\l"
	.string "research for the Pokedex!$"

GivePokedex1_Text_0:
# 306 "data/maps/EmberfallTown/scripts.pory"
	.string "Here,{PLAYER}, I ordered this for my\n"
	.string "research , but I think you should have\l"
	.string "this Pokedex!$"

Old_Man_Text_0:
# 395 "data/maps/EmberfallTown/scripts.pory"
	.string "My wife used to stand by that window\n"
	.string "every morning, watching the world wake\l"
	.string "up. She always said the sunrise was a\l"
	.string "promise of a new day... Now, I watch it\l"
	.string "alone, hoping she still sees it, wherever\l"
	.string "she is.$"

TEAM_MEMBER_Text_0:
# 414 "data/maps/EmberfallTown/scripts.pory"
	.string "For our island, carry its spirit with you.\n"
	.string "Let the fire in your heart burn as\l"
	.string "fiercely as our land’s molten core.$"

TEAM_MEMBER_Text_1:
# 417 "data/maps/EmberfallTown/scripts.pory"
	.string "You leave as one of us, but your journey\n"
	.string "will shape you. Never forget wherever\l"
	.string "you go, you are the pride of our island.$"

TEAM_MEMBER_Text_2:
# 420 "data/maps/EmberfallTown/scripts.pory"
	.string "For our chief, for our island go forth\n"
	.string "and carve your own path! Let the world\l"
	.string "know the strength of those born from\l"
	.string "fire and stone.$"

TEAM_MEMBER_Text_3:
# 430 "data/maps/EmberfallTown/scripts.pory"
	.string "Without further ado, on behalf the\n"
	.string "team, we wish you best luck!$"

Team_Magma_Boss_Trigger_Text_0:
# 622 "data/maps/EmberfallTown/scripts.pory"
	.string "You have proven yourself vital to Team\n"
	.string "Magma's vision. This mission is unlike\l"
	.string "any before. An island of fire and fury,\l"
	.string "shaped by a powerful guardian. At its\l"
	.string "heart stands a Slugma, no ordinary\l"
	.string "Pokémon, but the will of PyroClave\l"
	.string "itself. Now, {PLAYER}, take this\l"
	.string "Slugma and carry the island’s legacy\l"
	.string "forward. May its flames guide you.$"

Team_Magma_Boss_Trigger_Text_1:
# 625 "data/maps/EmberfallTown/scripts.pory"
	.string "Received Slugma!$"

Team_Magma_Boss_Trigger_Text_2:
# 628 "data/maps/EmberfallTown/scripts.pory"
	.string "Ill keep you updated!$"

TRIGGERTPNEWWORLD1_Text_0:
# 715 "data/maps/EmberfallTown/scripts.pory"
	.string "Are you ready to embark?$"

TRIGGERTPNEWWORLD1_Text_1:
# 718 "data/maps/EmberfallTown/scripts.pory"
	.string "Get on!$"

TRIGGERTPNEWWORLD1_Text_2:
# 723 "data/maps/EmberfallTown/scripts.pory"
	.string "We should hurry, comback as soon as possible!$"
