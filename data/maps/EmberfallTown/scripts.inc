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
	speakername Mom_Start_Game_Dialogue_Text_0
# 50 "data/maps/EmberfallTown/scripts.pory"
	msgbox Mom_Start_Game_Dialogue_Text_1, MSGBOX_AUTOCLOSE
# 51 "data/maps/EmberfallTown/scripts.pory"
	waitmessage
# 52 "data/maps/EmberfallTown/scripts.pory"
	closemessage
# 53 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Face_DOWN_Team_MAGMA
# 54 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Momgoesback
# 55 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 56 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_NEW0, 1
# 57 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_MOM_STARTER_CHOICE_SPEECH, 0
# 58 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 63 "data/maps/EmberfallTown/scripts.pory"
Momgoesback:
# 64 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 64 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 64 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 64 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 64 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 65 "data/maps/EmberfallTown/scripts.pory"
	face_up
	step_end

# 69 "data/maps/EmberfallTown/scripts.pory"
MomGreeting:
# 70 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 70 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 70 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 70 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 70 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 71 "data/maps/EmberfallTown/scripts.pory"
	face_player
	step_end

# 74 "data/maps/EmberfallTown/scripts.pory"
FaceMom:
# 75 "data/maps/EmberfallTown/scripts.pory"
	face_left
	step_end

Mom_Start_Game_Dialogue1::
# 80 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_NEW0, 0
	goto_if_eq Mom_Start_Game_Dialogue1_1
	return

Mom_Start_Game_Dialogue1_1:
# 81 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceMom
# 82 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 83 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MomGreeting1
# 84 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 85 "data/maps/EmberfallTown/scripts.pory"
	msgbox Mom_Start_Game_Dialogue_Text_1, MSGBOX_AUTOCLOSE
# 86 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Face_DOWN_Team_MAGMA
# 87 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Momgoesback1
# 88 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 89 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_NEW0, 1
# 90 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_MOM_STARTER_CHOICE_SPEECH, 0
# 91 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


TESTspeakernam::
# 98 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 99 "data/maps/EmberfallTown/scripts.pory"
	faceplayer
# 100 "data/maps/EmberfallTown/scripts.pory"
	speakername TESTspeakernam_Text_0
# 101 "data/maps/EmberfallTown/scripts.pory"
	msgbox TESTspeakernam_Text_1
# 102 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 106 "data/maps/EmberfallTown/scripts.pory"
Momgoesback1:
# 107 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 107 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 107 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 107 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 107 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 107 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 107 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 108 "data/maps/EmberfallTown/scripts.pory"
	face_up
	step_end

# 112 "data/maps/EmberfallTown/scripts.pory"
MomGreeting1:
# 113 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 113 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 113 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 113 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 113 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 113 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 113 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 114 "data/maps/EmberfallTown/scripts.pory"
	face_player
	step_end

Mom_Start_Game_Dialogue2::
# 120 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_NEW0, 0
	goto_if_eq Mom_Start_Game_Dialogue2_1
	return

Mom_Start_Game_Dialogue2_1:
# 121 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FaceMom
# 122 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 123 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MomGreeting2
# 124 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 125 "data/maps/EmberfallTown/scripts.pory"
	msgbox Mom_Start_Game_Dialogue_Text_1, MSGBOX_AUTOCLOSE
# 126 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Face_DOWN_Team_MAGMA
# 127 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, momgoesback2
# 128 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 129 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_NEW0, 1
# 130 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_MOM_STARTER_CHOICE_SPEECH, 0
# 131 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 136 "data/maps/EmberfallTown/scripts.pory"
momgoesback2:
# 137 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 137 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 138 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 139 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 139 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 139 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 139 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 140 "data/maps/EmberfallTown/scripts.pory"
	face_up
	step_end

# 143 "data/maps/EmberfallTown/scripts.pory"
MomGreeting2:
# 144 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 144 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 144 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 144 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 144 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 145 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 146 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 147 "data/maps/EmberfallTown/scripts.pory"
	face_player
	step_end

Mom_speech::
# 156 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_MOM_STARTER_CHOICE_SPEECH, 0
	goto_if_eq Mom_speech_2
Mom_speech_1:
# 167 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq Mom_speech_5
Mom_speech_4:
# 178 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_MOM_STARTER_CHOICE_SPEECH, 2
	goto_if_eq Mom_speech_8
Mom_speech_7:
# 189 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_MOM_STARTER_CHOICE_SPEECH, 3
	goto_if_eq Mom_speech_10
	return

Mom_speech_2:
# 157 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 158 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MOMFACERIGHT
# 159 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 160 "data/maps/EmberfallTown/scripts.pory"
	msgbox Mom_speech_Text_0, MSGBOX_AUTOCLOSE
# 161 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MOMFACEUP
# 162 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 163 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	goto Mom_speech_1

Mom_speech_5:
# 168 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 169 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MOMFACERIGHT
# 170 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 171 "data/maps/EmberfallTown/scripts.pory"
	msgbox Mom_speech_Text_1, MSGBOX_AUTOCLOSE
# 172 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MOMFACEUP
# 173 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 174 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	goto Mom_speech_4

Mom_speech_8:
# 179 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 180 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MOMFACERIGHT
# 181 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 182 "data/maps/EmberfallTown/scripts.pory"
	msgbox Mom_speech_Text_2, MSGBOX_AUTOCLOSE
# 183 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MOMFACEUP
# 184 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 185 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	goto Mom_speech_7

Mom_speech_10:
# 190 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 191 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MOMFACERIGHT
# 192 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 193 "data/maps/EmberfallTown/scripts.pory"
	msgbox Mom_speech_Text_3, MSGBOX_AUTOCLOSE
# 194 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MOMFACEUP
# 195 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 196 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 204 "data/maps/EmberfallTown/scripts.pory"
MOMFACERIGHT:
# 205 "data/maps/EmberfallTown/scripts.pory"
	faceplayer
	step_end

# 208 "data/maps/EmberfallTown/scripts.pory"
MOMFACEUP:
# 209 "data/maps/EmberfallTown/scripts.pory"
	face_up
	step_end

BED::
# 214 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 215 "data/maps/EmberfallTown/scripts.pory"
	msgbox BED_Text_0, MSGBOX_YESNO
# 216 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BED_1
# 225 "data/maps/EmberfallTown/scripts.pory"
	msgbox BED_Text_2, MSGBOX_AUTOCLOSE
	return

BED_1:
# 217 "data/maps/EmberfallTown/scripts.pory"
	incrementgamestat GAME_STAT_USED_POKECENTER
# 218 "data/maps/EmberfallTown/scripts.pory"
	special HealPlayerParty
# 219 "data/maps/EmberfallTown/scripts.pory"
	msgbox BED_Text_1
# 220 "data/maps/EmberfallTown/scripts.pory"
	waitmessage
# 221 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


Trigger_Go_Get_Your_Starters::
# 235 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_UNUSED_0x40FF, 0
	goto_if_eq Trigger_Go_Get_Your_Starters_1
# 244 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return

Trigger_Go_Get_Your_Starters_1:
# 236 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 237 "data/maps/EmberfallTown/scripts.pory"
	msgbox Trigger_Go_Get_Your_Starters_Text_0
# 238 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Knockback
# 239 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 240 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 249 "data/maps/EmberfallTown/scripts.pory"
Knockback:
# 250 "data/maps/EmberfallTown/scripts.pory"
	face_left
# 251 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 252 "data/maps/EmberfallTown/scripts.pory"
	walk_left
	step_end

GivePokedex::
# 260 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_UNUSED_0x40FF, 0
	goto_if_ne GivePokedex_1
# 285 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return

GivePokedex_1:
# 261 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 262 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GivePokdexMovement
# 263 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 264 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Professor_Pokdex
# 265 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 266 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex_Text_0, MSGBOX_AUTOCLOSE
# 267 "data/maps/EmberfallTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 268 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 269 "data/maps/EmberfallTown/scripts.pory"
	message GivePokedex_Text_1
# 270 "data/maps/EmberfallTown/scripts.pory"
	waitfanfare
# 271 "data/maps/EmberfallTown/scripts.pory"
	closemessage
# 272 "data/maps/EmberfallTown/scripts.pory"
	special SetUnlockedPokedexFlags
# 273 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex_Text_2, MSGBOX_AUTOCLOSE
# 274 "data/maps/EmberfallTown/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 275 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex_Text_3, MSGBOX_DEFAULT
# 276 "data/maps/EmberfallTown/scripts.pory"
	waitmessage
# 277 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Professor_goes_back
# 278 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 279 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 291 "data/maps/EmberfallTown/scripts.pory"
Professor_goes_back:
# 292 "data/maps/EmberfallTown/scripts.pory"
	face_down
	step_end

# 299 "data/maps/EmberfallTown/scripts.pory"
GivePokdexMovement:
# 300 "data/maps/EmberfallTown/scripts.pory"
	face_right
	step_end

# 304 "data/maps/EmberfallTown/scripts.pory"
Professor_Pokdex:
# 305 "data/maps/EmberfallTown/scripts.pory"
	face_left
	step_end

GivePokedex1::
# 312 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_UNUSED_0x40FF, 0
	goto_if_ne GivePokedex1_1
# 337 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return

GivePokedex1_1:
# 313 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 314 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GivePokdexMovement
# 315 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 316 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Professor_Pokdex1
# 317 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 318 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex1_Text_0, MSGBOX_AUTOCLOSE
# 319 "data/maps/EmberfallTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 320 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 321 "data/maps/EmberfallTown/scripts.pory"
	message GivePokedex_Text_1
# 322 "data/maps/EmberfallTown/scripts.pory"
	waitfanfare
# 323 "data/maps/EmberfallTown/scripts.pory"
	closemessage
# 324 "data/maps/EmberfallTown/scripts.pory"
	special SetUnlockedPokedexFlags
# 325 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex_Text_2, MSGBOX_AUTOCLOSE
# 326 "data/maps/EmberfallTown/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 327 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex_Text_3, MSGBOX_DEFAULT
# 328 "data/maps/EmberfallTown/scripts.pory"
	waitmessage
# 329 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Professor_goes_back1
# 330 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 331 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 342 "data/maps/EmberfallTown/scripts.pory"
Professor_goes_back1:
# 343 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 344 "data/maps/EmberfallTown/scripts.pory"
	face_down
	step_end

# 350 "data/maps/EmberfallTown/scripts.pory"
Professor_Pokdex1:
# 351 "data/maps/EmberfallTown/scripts.pory"
	walk_left
	step_end

GivePokedex2::
# 359 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_UNUSED_0x40FF, 0
	goto_if_ne GivePokedex2_1
# 384 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return

GivePokedex2_1:
# 360 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 361 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GivePokdexMovement
# 362 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 363 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Professor_Pokdex2
# 364 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 365 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex1_Text_0, MSGBOX_AUTOCLOSE
# 366 "data/maps/EmberfallTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 367 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 368 "data/maps/EmberfallTown/scripts.pory"
	message GivePokedex_Text_1
# 369 "data/maps/EmberfallTown/scripts.pory"
	waitfanfare
# 370 "data/maps/EmberfallTown/scripts.pory"
	closemessage
# 371 "data/maps/EmberfallTown/scripts.pory"
	special SetUnlockedPokedexFlags
# 372 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex_Text_2, MSGBOX_AUTOCLOSE
# 373 "data/maps/EmberfallTown/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 374 "data/maps/EmberfallTown/scripts.pory"
	msgbox GivePokedex_Text_3, MSGBOX_DEFAULT
# 375 "data/maps/EmberfallTown/scripts.pory"
	waitmessage
# 376 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Professor_goes_back2
# 377 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 378 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 389 "data/maps/EmberfallTown/scripts.pory"
Professor_goes_back2:
# 390 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 391 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 392 "data/maps/EmberfallTown/scripts.pory"
	face_down
	step_end

# 396 "data/maps/EmberfallTown/scripts.pory"
Professor_Pokdex2:
# 397 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 398 "data/maps/EmberfallTown/scripts.pory"
	walk_left
	step_end

Old_Man::
# 405 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 406 "data/maps/EmberfallTown/scripts.pory"
	faceplayer
# 407 "data/maps/EmberfallTown/scripts.pory"
	msgbox Old_Man_Text_0
# 408 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


Trigger_Exp_Share_All::
# 413 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_EXP_SHARE_ALL
# 414 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


TEAM_MEMBER::
# 422 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_ROUTE133_STATE, 0
	goto_if_eq TEAM_MEMBER_1
	return

TEAM_MEMBER_1:
# 423 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 424 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH
# 425 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 426 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_0, MSGBOX_AUTOCLOSE
# 427 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH1
# 428 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 429 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_1, MSGBOX_AUTOCLOSE
# 430 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH1
# 431 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 432 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_2, MSGBOX_AUTOCLOSE
# 433 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 434 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 435 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Face_DOWN_Team_MAGMA
# 436 "data/maps/EmberfallTown/scripts.pory"
	applymovement 2, Face_DOWN_Team_MAGMA
# 437 "data/maps/EmberfallTown/scripts.pory"
	applymovement 3, Face_DOWN_Team_MAGMA
# 438 "data/maps/EmberfallTown/scripts.pory"
	applymovement 4, Face_DOWN_Team_MAGMA
# 439 "data/maps/EmberfallTown/scripts.pory"
	applymovement 5, Face_DOWN_Team_MAGMA
# 440 "data/maps/EmberfallTown/scripts.pory"
	applymovement 6, Face_DOWN_Team_MAGMA
# 441 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Face_UP
# 442 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_3, MSGBOX_AUTOCLOSE
# 443 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_TEAM_MAGMA_Leave
# 444 "data/maps/EmberfallTown/scripts.pory"
	applymovement 2, MAGMAMEMBERWALKUPCRAZY
# 445 "data/maps/EmberfallTown/scripts.pory"
	removeobject 2
# 446 "data/maps/EmberfallTown/scripts.pory"
	applymovement 6, MAGMAMEMBERWALKUPCRAZY
# 447 "data/maps/EmberfallTown/scripts.pory"
	removeobject 6
# 448 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MAGMAMEMBERWALKUPCRAZY
# 449 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 450 "data/maps/EmberfallTown/scripts.pory"
	removeobject 1
# 451 "data/maps/EmberfallTown/scripts.pory"
	applymovement 5, MAGMAMEMBERWALKUPCRAZY
# 452 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 5
# 453 "data/maps/EmberfallTown/scripts.pory"
	removeobject 5
# 454 "data/maps/EmberfallTown/scripts.pory"
	applymovement 3, MAGMAMEMBERWALKUPCRAZY
# 455 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 3
# 456 "data/maps/EmberfallTown/scripts.pory"
	removeobject 3
# 457 "data/maps/EmberfallTown/scripts.pory"
	applymovement 4, MAGMAMEMBERWALKUPCRAZY
# 458 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 4
# 459 "data/maps/EmberfallTown/scripts.pory"
	removeobject 4
# 460 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_ROUTE133_STATE, 2
# 461 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 470 "data/maps/EmberfallTown/scripts.pory"
Player_Face_UP:
# 471 "data/maps/EmberfallTown/scripts.pory"
	face_up
	step_end

# 475 "data/maps/EmberfallTown/scripts.pory"
Face_DOWN_Team_MAGMA:
# 476 "data/maps/EmberfallTown/scripts.pory"
	face_down
	step_end

TEAM_MEMBER1::
# 483 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_ROUTE133_STATE, 0
	goto_if_eq TEAM_MEMBER1_1
	return

TEAM_MEMBER1_1:
# 484 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 485 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH_custom
# 486 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 487 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_0, MSGBOX_AUTOCLOSE
# 488 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH1
# 489 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 490 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_1, MSGBOX_AUTOCLOSE
# 491 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH1
# 492 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 493 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_2, MSGBOX_AUTOCLOSE
# 494 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 495 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 496 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Face_DOWN_Team_MAGMA
# 497 "data/maps/EmberfallTown/scripts.pory"
	applymovement 2, Face_DOWN_Team_MAGMA
# 498 "data/maps/EmberfallTown/scripts.pory"
	applymovement 3, Face_DOWN_Team_MAGMA
# 499 "data/maps/EmberfallTown/scripts.pory"
	applymovement 4, Face_DOWN_Team_MAGMA
# 500 "data/maps/EmberfallTown/scripts.pory"
	applymovement 5, Face_DOWN_Team_MAGMA
# 501 "data/maps/EmberfallTown/scripts.pory"
	applymovement 6, Face_DOWN_Team_MAGMA
# 502 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Face_UP
# 503 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_3, MSGBOX_AUTOCLOSE
# 504 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_TEAM_MAGMA_Leave
# 505 "data/maps/EmberfallTown/scripts.pory"
	applymovement 2, MAGMAMEMBERWALKUPCRAZY
# 506 "data/maps/EmberfallTown/scripts.pory"
	removeobject 2
# 507 "data/maps/EmberfallTown/scripts.pory"
	applymovement 6, MAGMAMEMBERWALKUPCRAZY
# 508 "data/maps/EmberfallTown/scripts.pory"
	removeobject 6
# 509 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MAGMAMEMBERWALKUPCRAZY
# 510 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 511 "data/maps/EmberfallTown/scripts.pory"
	removeobject 1
# 512 "data/maps/EmberfallTown/scripts.pory"
	applymovement 5, MAGMAMEMBERWALKUPCRAZY
# 513 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 5
# 514 "data/maps/EmberfallTown/scripts.pory"
	removeobject 5
# 515 "data/maps/EmberfallTown/scripts.pory"
	applymovement 3, MAGMAMEMBERWALKUPCRAZY
# 516 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 3
# 517 "data/maps/EmberfallTown/scripts.pory"
	removeobject 3
# 518 "data/maps/EmberfallTown/scripts.pory"
	applymovement 4, MAGMAMEMBERWALKUPCRAZY
# 519 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 4
# 520 "data/maps/EmberfallTown/scripts.pory"
	removeobject 4
# 521 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_ROUTE133_STATE, 2
# 522 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


TEAM_MEMBER2::
# 531 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_ROUTE133_STATE, 0
	goto_if_eq TEAM_MEMBER2_1
	return

TEAM_MEMBER2_1:
# 532 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 533 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH_custom1
# 534 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 535 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_0, MSGBOX_AUTOCLOSE
# 536 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH1
# 537 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 538 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_1, MSGBOX_AUTOCLOSE
# 539 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TEAM_MEMBER_WALKTROUGH1
# 540 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 541 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_2, MSGBOX_AUTOCLOSE
# 542 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerMoveDown
# 543 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 544 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, Face_DOWN_Team_MAGMA
# 545 "data/maps/EmberfallTown/scripts.pory"
	applymovement 2, Face_DOWN_Team_MAGMA
# 546 "data/maps/EmberfallTown/scripts.pory"
	applymovement 3, Face_DOWN_Team_MAGMA
# 547 "data/maps/EmberfallTown/scripts.pory"
	applymovement 4, Face_DOWN_Team_MAGMA
# 548 "data/maps/EmberfallTown/scripts.pory"
	applymovement 5, Face_DOWN_Team_MAGMA
# 549 "data/maps/EmberfallTown/scripts.pory"
	applymovement 6, Face_DOWN_Team_MAGMA
# 550 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Player_Face_UP
# 551 "data/maps/EmberfallTown/scripts.pory"
	msgbox TEAM_MEMBER_Text_3, MSGBOX_AUTOCLOSE
# 552 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_TEAM_MAGMA_Leave
# 553 "data/maps/EmberfallTown/scripts.pory"
	applymovement 2, MAGMAMEMBERWALKUPCRAZY
# 554 "data/maps/EmberfallTown/scripts.pory"
	removeobject 2
# 555 "data/maps/EmberfallTown/scripts.pory"
	applymovement 6, MAGMAMEMBERWALKUPCRAZY
# 556 "data/maps/EmberfallTown/scripts.pory"
	removeobject 6
# 557 "data/maps/EmberfallTown/scripts.pory"
	applymovement 1, MAGMAMEMBERWALKUPCRAZY
# 558 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 1
# 559 "data/maps/EmberfallTown/scripts.pory"
	removeobject 1
# 560 "data/maps/EmberfallTown/scripts.pory"
	applymovement 5, MAGMAMEMBERWALKUPCRAZY
# 561 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 5
# 562 "data/maps/EmberfallTown/scripts.pory"
	removeobject 5
# 563 "data/maps/EmberfallTown/scripts.pory"
	applymovement 3, MAGMAMEMBERWALKUPCRAZY
# 564 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 3
# 565 "data/maps/EmberfallTown/scripts.pory"
	removeobject 3
# 566 "data/maps/EmberfallTown/scripts.pory"
	applymovement 4, MAGMAMEMBERWALKUPCRAZY
# 567 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 4
# 568 "data/maps/EmberfallTown/scripts.pory"
	removeobject 4
# 569 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_ROUTE133_STATE, 2
# 570 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 576 "data/maps/EmberfallTown/scripts.pory"
MAGMAMEMBERWALKUPCRAZY:
# 577 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 577 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 577 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 577 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 577 "data/maps/EmberfallTown/scripts.pory"
	walk_up
	step_end

# 581 "data/maps/EmberfallTown/scripts.pory"
PlayerMoveDown:
# 582 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 582 "data/maps/EmberfallTown/scripts.pory"
	walk_down
	step_end

# 590 "data/maps/EmberfallTown/scripts.pory"
Magma1leave2:
# 591 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 592 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 592 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 592 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 592 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 592 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 592 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 592 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 592 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 592 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 592 "data/maps/EmberfallTown/scripts.pory"
	walk_up
	step_end

# 596 "data/maps/EmberfallTown/scripts.pory"
Magma1leave:
# 597 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 598 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 598 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 598 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 598 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 598 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 598 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 598 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 598 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 598 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 598 "data/maps/EmberfallTown/scripts.pory"
	walk_up
	step_end

# 602 "data/maps/EmberfallTown/scripts.pory"
TEAM_MEMBER_WALKTROUGH_custom1:
# 603 "data/maps/EmberfallTown/scripts.pory"
	walk_left
# 604 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 604 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 604 "data/maps/EmberfallTown/scripts.pory"
	walk_down
	step_end

# 609 "data/maps/EmberfallTown/scripts.pory"
TEAM_MEMBER_WALKTROUGH_custom:
# 610 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 610 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 610 "data/maps/EmberfallTown/scripts.pory"
	walk_down
	step_end

# 614 "data/maps/EmberfallTown/scripts.pory"
TEAM_MEMBER_WALKTROUGH:
# 615 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 616 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 616 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 616 "data/maps/EmberfallTown/scripts.pory"
	walk_down
	step_end

# 620 "data/maps/EmberfallTown/scripts.pory"
TEAM_MEMBER_WALKTROUGH1:
# 621 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 621 "data/maps/EmberfallTown/scripts.pory"
	walk_down
	step_end

Team_Magma_Boss_Trigger::
# 628 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 629 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_MAGMA_BOSS
# 630 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, Exclamationmark
# 631 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 7
# 632 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, BossMAGMA
# 633 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 7
# 634 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_0, MSGBOX_AUTOCLOSE
# 635 "data/maps/EmberfallTown/scripts.pory"
	waitmessage
# 636 "data/maps/EmberfallTown/scripts.pory"
	givemon SPECIES_SLUGMA, 9
# 637 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_1
# 638 "data/maps/EmberfallTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 639 "data/maps/EmberfallTown/scripts.pory"
	call NicknamePartyMon
# 640 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_2, MSGBOX_AUTOCLOSE
# 641 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, BossMAGMAleave
# 642 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 7
# 643 "data/maps/EmberfallTown/scripts.pory"
	removeobject 7
# 644 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_BOSS_MAGMA_1, 2
# 645 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 649 "data/maps/EmberfallTown/scripts.pory"
BossMAGMAleave:
# 650 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 650 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 650 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 650 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 650 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 650 "data/maps/EmberfallTown/scripts.pory"
	walk_down
	step_end

# 654 "data/maps/EmberfallTown/scripts.pory"
BossMAGMA:
# 655 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 656 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 656 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 656 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 656 "data/maps/EmberfallTown/scripts.pory"
	walk_up
	step_end

Team_Magma_Boss_Trigger1::
# 661 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 662 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_MAGMA_BOSS
# 663 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, Exclamationmark
# 664 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 7
# 665 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, BossMAGMA1
# 666 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 7
# 667 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_0, MSGBOX_AUTOCLOSE
# 668 "data/maps/EmberfallTown/scripts.pory"
	waitmessage
# 669 "data/maps/EmberfallTown/scripts.pory"
	givemon SPECIES_SLUGMA, 9
# 670 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_1
# 671 "data/maps/EmberfallTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 672 "data/maps/EmberfallTown/scripts.pory"
	call NicknamePartyMon
# 673 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_2, MSGBOX_AUTOCLOSE
# 674 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, BossMAGMAleave
# 675 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 7
# 676 "data/maps/EmberfallTown/scripts.pory"
	removeobject 7
# 677 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_BOSS_MAGMA_1, 2
# 678 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 681 "data/maps/EmberfallTown/scripts.pory"
BossMAGMA1:
# 682 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 682 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 683 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 683 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 683 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 683 "data/maps/EmberfallTown/scripts.pory"
	walk_up
	step_end

Team_Magma_Boss_Trigger2::
# 690 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 691 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_MAGMA_BOSS
# 692 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, Exclamationmark
# 693 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, BossMAGMA1
# 694 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 7
# 695 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_0, MSGBOX_AUTOCLOSE
# 696 "data/maps/EmberfallTown/scripts.pory"
	waitmessage
# 697 "data/maps/EmberfallTown/scripts.pory"
	givemon SPECIES_SLUGMA, 9
# 698 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_1
# 699 "data/maps/EmberfallTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 700 "data/maps/EmberfallTown/scripts.pory"
	call NicknamePartyMon
# 701 "data/maps/EmberfallTown/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_Text_2, MSGBOX_AUTOCLOSE
# 702 "data/maps/EmberfallTown/scripts.pory"
	applymovement 7, BossMAGMAleave
# 703 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 7
# 704 "data/maps/EmberfallTown/scripts.pory"
	removeobject 7
# 705 "data/maps/EmberfallTown/scripts.pory"
	setvar VAR_BOSS_MAGMA_1, 2
# 706 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


# 709 "data/maps/EmberfallTown/scripts.pory"
Exclamationmark:
# 710 "data/maps/EmberfallTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 714 "data/maps/EmberfallTown/scripts.pory"
BossMAGMA2:
# 715 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 715 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 715 "data/maps/EmberfallTown/scripts.pory"
	walk_right
# 716 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 716 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 716 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 716 "data/maps/EmberfallTown/scripts.pory"
	walk_up
	step_end

TRIGGERTPNEWWORLD1::
# 722 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 723 "data/maps/EmberfallTown/scripts.pory"
	applymovement 8, SAILORMOVEMENT
# 724 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 8
# 725 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Face_DOWN_Team_MAGMA
# 726 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 727 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_0, MSGBOX_YESNO
# 729 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TRIGGERTPNEWWORLD1_1
# 735 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_2, MSGBOX_AUTOCLOSE
# 736 "data/maps/EmberfallTown/scripts.pory"
	applymovement 8, SAILORGOESBACK
# 737 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 8
	return

TRIGGERTPNEWWORLD1_1:
# 730 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_1, MSGBOX_AUTOCLOSE
# 731 "data/maps/EmberfallTown/scripts.pory"
	warp MAP_AEGISPORT, 8, 17
	return


TRIGGERTPNEWWORLD2::
# 743 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 744 "data/maps/EmberfallTown/scripts.pory"
	applymovement 8, SAILORMOVEMENT1
# 745 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 8
# 746 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Face_DOWN_Team_MAGMA
# 747 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 748 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_0, MSGBOX_YESNO
# 750 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TRIGGERTPNEWWORLD2_1
# 756 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_2, MSGBOX_AUTOCLOSE
# 757 "data/maps/EmberfallTown/scripts.pory"
	applymovement 8, SAILORGOESBACK
# 758 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 8
	return

TRIGGERTPNEWWORLD2_1:
# 751 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_1, MSGBOX_AUTOCLOSE
# 752 "data/maps/EmberfallTown/scripts.pory"
	warp MAP_AEGISPORT, 8, 17
	return


TRIGGERTPNEWWORLD3::
# 763 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 764 "data/maps/EmberfallTown/scripts.pory"
	applymovement 8, SAILORMOVEMENT2
# 765 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 8
# 766 "data/maps/EmberfallTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Face_DOWN_Team_MAGMA
# 767 "data/maps/EmberfallTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 768 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_0, MSGBOX_YESNO
# 770 "data/maps/EmberfallTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TRIGGERTPNEWWORLD3_1
# 776 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_2, MSGBOX_AUTOCLOSE
# 777 "data/maps/EmberfallTown/scripts.pory"
	applymovement 8, SAILORGOESBACK
# 778 "data/maps/EmberfallTown/scripts.pory"
	waitmovement 8
	return

TRIGGERTPNEWWORLD3_1:
# 771 "data/maps/EmberfallTown/scripts.pory"
	msgbox TRIGGERTPNEWWORLD1_Text_1, MSGBOX_AUTOCLOSE
# 772 "data/maps/EmberfallTown/scripts.pory"
	warp MAP_AEGISPORT, 8, 17
	return


# 782 "data/maps/EmberfallTown/scripts.pory"
SAILORMOVEMENT2:
# 783 "data/maps/EmberfallTown/scripts.pory"
	face_up
	step_end

# 787 "data/maps/EmberfallTown/scripts.pory"
SAILORMOVEMENT1:
# 788 "data/maps/EmberfallTown/scripts.pory"
	walk_up
	step_end

# 792 "data/maps/EmberfallTown/scripts.pory"
SAILORMOVEMENT:
# 793 "data/maps/EmberfallTown/scripts.pory"
	walk_up
# 793 "data/maps/EmberfallTown/scripts.pory"
	walk_up
	step_end

# 797 "data/maps/EmberfallTown/scripts.pory"
SAILORGOESBACK:
# 798 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 798 "data/maps/EmberfallTown/scripts.pory"
	walk_down
# 799 "data/maps/EmberfallTown/scripts.pory"
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
	.string "Mom$"

Mom_Start_Game_Dialogue_Text_1:
# 50 "data/maps/EmberfallTown/scripts.pory"
	.string "Did you sleep well? The boss is looking\n"
	.string "for you! Hurry and pick a Pokémon from\l"
	.string "the lab.$"

TESTspeakernam_Text_0:
# 100 "data/maps/EmberfallTown/scripts.pory"
	.string "TEST$"

TESTspeakernam_Text_1:
# 101 "data/maps/EmberfallTown/scripts.pory"
	.string "TEST FOR THE MACRO$"

Mom_speech_Text_0:
# 160 "data/maps/EmberfallTown/scripts.pory"
	.string "I will always be proud of you son!$"

Mom_speech_Text_1:
# 171 "data/maps/EmberfallTown/scripts.pory"
	.string "Turtwig is such a strong Pokémon , i am\n"
	.string "glad you chose it.$"

Mom_speech_Text_2:
# 182 "data/maps/EmberfallTown/scripts.pory"
	.string "Oshawott is such a strong Pokémon , i am\n"
	.string "glad you chose it.$"

Mom_speech_Text_3:
# 193 "data/maps/EmberfallTown/scripts.pory"
	.string "Fuecoco is such a strong Pokémon , i am\n"
	.string "glad you chose it.$"

BED_Text_0:
# 215 "data/maps/EmberfallTown/scripts.pory"
	.string "Do you want to rest?$"

BED_Text_1:
# 219 "data/maps/EmberfallTown/scripts.pory"
	.string "You party has been restored.$"

BED_Text_2:
# 225 "data/maps/EmberfallTown/scripts.pory"
	.string "Have a good day$"

Trigger_Go_Get_Your_Starters_Text_0:
# 237 "data/maps/EmberfallTown/scripts.pory"
	.string "You must choose a Pokémon!$"

GivePokedex_Text_0:
# 266 "data/maps/EmberfallTown/scripts.pory"
	.string "Here, {PLAYER}! I ordered this for my\n"
	.string "research, but I think you should have\l"
	.string "this Pokédex!$"

GivePokedex_Text_1:
# 269 "data/maps/EmberfallTown/scripts.pory"
	.string "{PLAYER} received the POKéDEX!$"

GivePokedex_Text_2:
# 273 "data/maps/EmberfallTown/scripts.pory"
	.format "Also take these with you."

GivePokedex_Text_3:
# 275 "data/maps/EmberfallTown/scripts.pory"
	.string "These allow you to catch your own\n"
	.string "Pokemon in tall grass so you can collect\l"
	.string "research for the Pokedex!$"

GivePokedex1_Text_0:
# 318 "data/maps/EmberfallTown/scripts.pory"
	.string "Here,{PLAYER}, I ordered this for my\n"
	.string "research , but I think you should have\l"
	.string "this Pokedex!$"

Old_Man_Text_0:
# 407 "data/maps/EmberfallTown/scripts.pory"
	.string "My wife used to stand by that window\n"
	.string "every morning, watching the world wake\l"
	.string "up. She always said the sunrise was a\l"
	.string "promise of a new day... Now, I watch it\l"
	.string "alone, hoping she still sees it, wherever\l"
	.string "she is.$"

TEAM_MEMBER_Text_0:
# 426 "data/maps/EmberfallTown/scripts.pory"
	.string "For our island, carry its spirit with you.\n"
	.string "Let the fire in your heart burn as\l"
	.string "fiercely as our land’s molten core.$"

TEAM_MEMBER_Text_1:
# 429 "data/maps/EmberfallTown/scripts.pory"
	.string "You leave as one of us, but your journey\n"
	.string "will shape you. Never forget wherever\l"
	.string "you go, you are the pride of our island.$"

TEAM_MEMBER_Text_2:
# 432 "data/maps/EmberfallTown/scripts.pory"
	.string "For our chief, for our island go forth\n"
	.string "and carve your own path! Let the world\l"
	.string "know the strength of those born from\l"
	.string "fire and stone.$"

TEAM_MEMBER_Text_3:
# 442 "data/maps/EmberfallTown/scripts.pory"
	.string "Without further ado, on behalf the\n"
	.string "team, we wish you best luck!$"

Team_Magma_Boss_Trigger_Text_0:
# 634 "data/maps/EmberfallTown/scripts.pory"
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
# 637 "data/maps/EmberfallTown/scripts.pory"
	.string "Received Slugma!$"

Team_Magma_Boss_Trigger_Text_2:
# 640 "data/maps/EmberfallTown/scripts.pory"
	.string "Ill keep you updated!$"

TRIGGERTPNEWWORLD1_Text_0:
# 727 "data/maps/EmberfallTown/scripts.pory"
	.string "Are you ready to embark?$"

TRIGGERTPNEWWORLD1_Text_1:
# 730 "data/maps/EmberfallTown/scripts.pory"
	.string "Get on!$"

TRIGGERTPNEWWORLD1_Text_2:
# 735 "data/maps/EmberfallTown/scripts.pory"
	.string "We should hurry, comback as soon as possible!$"
