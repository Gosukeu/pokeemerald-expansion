# 1 "data/maps/TundrawoodCityContest/scripts.pory"

# 2 "data/maps/TundrawoodCityContest/scripts.pory"
TundrawoodCityContest_MapScripts::
# 3 "data/maps/TundrawoodCityContest/scripts.pory"
	.byte 0

FISCHERAGAIN::
# 8 "data/maps/TundrawoodCityContest/scripts.pory"
	compare VAR_FISCHER_MAN, 1
	goto_if_eq FISCHERAGAIN_2
FISCHERAGAIN_1:
# 16 "data/maps/TundrawoodCityContest/scripts.pory"
	compare VAR_FISCHER_MAN, 0
	goto_if_eq FISCHERAGAIN_4
	return

FISCHERAGAIN_2:
# 9 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 10 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 11 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox FISCHERAGAIN_Text_0, MSGBOX_AUTOCLOSE
# 12 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	goto FISCHERAGAIN_1

FISCHERAGAIN_4:
# 17 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 18 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 19 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox FISCHERAGAIN_Text_1, MSGBOX_YESNO
# 21 "data/maps/TundrawoodCityContest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FISCHERAGAIN_6
# 32 "data/maps/TundrawoodCityContest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FISCHERAGAIN_7
	return

FISCHERAGAIN_6:
# 22 "data/maps/TundrawoodCityContest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 23 "data/maps/TundrawoodCityContest/scripts.pory"
	giveitem ITEM_OLD_ROD
# 24 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox FISCHERAGAIN_Text_2
# 25 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox FISCHERAGAIN_Text_3
# 26 "data/maps/TundrawoodCityContest/scripts.pory"
	setvar VAR_FISCHER_MAN, 1
# 27 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return

FISCHERAGAIN_7:
# 33 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox FISCHERAGAIN_Text_4, MSGBOX_AUTOCLOSE
# 34 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return


LUXURYBALL::
# 41 "data/maps/TundrawoodCityContest/scripts.pory"
	compare VAR_DAYS, 0
	goto_if_eq LUXURYBALL_1
# 52 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox LUXURYBALL_Text_1, MSGBOX_AUTOCLOSE
	return

LUXURYBALL_1:
# 42 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 43 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 44 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox LUXURYBALL_Text_0, MSGBOX_AUTOCLOSE
# 45 "data/maps/TundrawoodCityContest/scripts.pory"
	giveitem ITEM_LUXURY_BALL
# 46 "data/maps/TundrawoodCityContest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 47 "data/maps/TundrawoodCityContest/scripts.pory"
	setvar VAR_DAYS, 1
# 48 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return


POKEBLOCKCASEANDPOKEBLOCK::
# 59 "data/maps/TundrawoodCityContest/scripts.pory"
	compare VAR_FANCLUB_FAN_COUNTER, 0
	goto_if_eq POKEBLOCKCASEANDPOKEBLOCK_1
# 71 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 72 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 73 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox POKEBLOCKCASEANDPOKEBLOCK_Text_2, MSGBOX_AUTOCLOSE
# 74 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return

POKEBLOCKCASEANDPOKEBLOCK_1:
# 60 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 61 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 62 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox POKEBLOCKCASEANDPOKEBLOCK_Text_0, MSGBOX_AUTOCLOSE
# 63 "data/maps/TundrawoodCityContest/scripts.pory"
	giveitem ITEM_POKEBLOCK_CASE
# 64 "data/maps/TundrawoodCityContest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 65 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox POKEBLOCKCASEANDPOKEBLOCK_Text_1, MSGBOX_AUTOCLOSE
# 66 "data/maps/TundrawoodCityContest/scripts.pory"
	setvar VAR_FANCLUB_FAN_COUNTER, 1
# 67 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return


pokeblock::
# 82 "data/maps/TundrawoodCityContest/scripts.pory"
	compare VAR_FANCLUB_LOSE_FAN_TIMER, 0
	goto_if_eq pokeblock_1
# 107 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 108 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 109 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox pokeblock_Text_2, MSGBOX_AUTOCLOSE
# 110 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return

pokeblock_1:
# 83 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 84 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 85 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox pokeblock_Text_0, MSGBOX_AUTOCLOSE
# 86 "data/maps/TundrawoodCityContest/scripts.pory"
	checkitem ITEM_POKEBLOCK_CASE
# 88 "data/maps/TundrawoodCityContest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq pokeblock_4
# 97 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 98 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 99 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox pokeblock_Text_1, MSGBOX_AUTOCLOSE
# 100 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return

pokeblock_4:
# 89 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 90 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 91 "data/maps/TundrawoodCityContest/scripts.pory"
	giveitem ITEM_OCCA_BERRY, 5
# 92 "data/maps/TundrawoodCityContest/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 93 "data/maps/TundrawoodCityContest/scripts.pory"
	setvar VAR_FANCLUB_LOSE_FAN_TIMER, 1
	return


NPC1::
# 116 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 117 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 118 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox NPC1_Text_0, MSGBOX_AUTOCLOSE
# 119 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return


NPC2::
# 123 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 124 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 125 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox NPC2_Text_0, MSGBOX_AUTOCLOSE
# 126 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return


NPC3::
# 130 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 131 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 132 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox NPC3_Text_0, MSGBOX_AUTOCLOSE
# 133 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return


NPC4::
# 137 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 138 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 139 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox NPC4_Text_0, MSGBOX_AUTOCLOSE
# 140 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return


NPC5::
# 144 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 145 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 146 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox NPC5_Text_0, MSGBOX_AUTOCLOSE
# 147 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return


TRigger1contesthall::
# 153 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 154 "data/maps/TundrawoodCityContest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exlamationmarkandpushdown
# 155 "data/maps/TundrawoodCityContest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 156 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox TRigger1contesthall_Text_0, MSGBOX_AUTOCLOSE
# 157 "data/maps/TundrawoodCityContest/scripts.pory"
	applymovement 1, NPC1movement
# 158 "data/maps/TundrawoodCityContest/scripts.pory"
	waitmovement 1
# 159 "data/maps/TundrawoodCityContest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerfacedown
# 160 "data/maps/TundrawoodCityContest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 161 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox TRigger1contesthall_Text_1, MSGBOX_YESNO
# 163 "data/maps/TundrawoodCityContest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TRigger1contesthall_2
TRigger1contesthall_1:
# 170 "data/maps/TundrawoodCityContest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq TRigger1contesthall_4
	return

TRigger1contesthall_2:
# 164 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox TRigger1contesthall_Text_2, MSGBOX_AUTOCLOSE
# 165 "data/maps/TundrawoodCityContest/scripts.pory"
	applymovement 1, NPC1movementgoesback
# 166 "data/maps/TundrawoodCityContest/scripts.pory"
	waitmovement 1
# 167 "data/maps/TundrawoodCityContest/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, 1
# 168 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	goto TRigger1contesthall_1

TRigger1contesthall_4:
# 171 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox TRigger1contesthall_Text_3, MSGBOX_AUTOCLOSE
# 172 "data/maps/TundrawoodCityContest/scripts.pory"
	applymovement 1, NPC1movementgoesback
# 173 "data/maps/TundrawoodCityContest/scripts.pory"
	waitmovement 1
# 174 "data/maps/TundrawoodCityContest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exlamationmarkandpushdown1
# 175 "data/maps/TundrawoodCityContest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 176 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return


TRigger1contesthall1::
# 181 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 182 "data/maps/TundrawoodCityContest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exlamationmarkandpushdown
# 183 "data/maps/TundrawoodCityContest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 184 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox TRigger1contesthall_Text_0, MSGBOX_AUTOCLOSE
# 185 "data/maps/TundrawoodCityContest/scripts.pory"
	applymovement 16, NPC2movement
# 186 "data/maps/TundrawoodCityContest/scripts.pory"
	waitmovement 16
# 187 "data/maps/TundrawoodCityContest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playerfacedown
# 188 "data/maps/TundrawoodCityContest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 189 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox TRigger1contesthall_Text_1, MSGBOX_YESNO
# 191 "data/maps/TundrawoodCityContest/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TRigger1contesthall1_2
TRigger1contesthall1_1:
# 198 "data/maps/TundrawoodCityContest/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq TRigger1contesthall1_4
	return

TRigger1contesthall1_2:
# 192 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox TRigger1contesthall_Text_2, MSGBOX_AUTOCLOSE
# 193 "data/maps/TundrawoodCityContest/scripts.pory"
	applymovement 16, NPC2movementgoesback
# 194 "data/maps/TundrawoodCityContest/scripts.pory"
	waitmovement 16
# 195 "data/maps/TundrawoodCityContest/scripts.pory"
	setvar VAR_DEPT_STORE_FLOOR, 1
# 196 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	goto TRigger1contesthall1_1

TRigger1contesthall1_4:
# 199 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox TRigger1contesthall_Text_3, MSGBOX_AUTOCLOSE
# 200 "data/maps/TundrawoodCityContest/scripts.pory"
	applymovement 16, NPC2movementgoesback
# 201 "data/maps/TundrawoodCityContest/scripts.pory"
	waitmovement 16
# 202 "data/maps/TundrawoodCityContest/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exlamationmarkandpushdown1
# 203 "data/maps/TundrawoodCityContest/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 204 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return


# 208 "data/maps/TundrawoodCityContest/scripts.pory"
NPC2movementgoesback:
# 209 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_down
# 209 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_down
# 210 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_left
# 210 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_left
# 210 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_left
# 210 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_left
# 211 "data/maps/TundrawoodCityContest/scripts.pory"
	face_right
	step_end

# 215 "data/maps/TundrawoodCityContest/scripts.pory"
NPC2movement:
# 216 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_right
# 216 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_right
# 216 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_right
# 216 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_right
# 217 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_up
# 217 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_up
	step_end

# 222 "data/maps/TundrawoodCityContest/scripts.pory"
playergoesup:
# 223 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_up
	step_end

contesthallattendant::
# 228 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 229 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox contesthallattendant_Text_0, MSGBOX_AUTOCLOSE
# 230 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return


# 233 "data/maps/TundrawoodCityContest/scripts.pory"
NPC1movementgoesback:
# 234 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_down
# 234 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_down
# 235 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_right
	step_end

# 240 "data/maps/TundrawoodCityContest/scripts.pory"
playerfacedown:
# 241 "data/maps/TundrawoodCityContest/scripts.pory"
	face_down
	step_end

# 244 "data/maps/TundrawoodCityContest/scripts.pory"
NPC1movement:
# 245 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_up
# 245 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_up
# 246 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_left
# 247 "data/maps/TundrawoodCityContest/scripts.pory"
	face_up
	step_end

# 252 "data/maps/TundrawoodCityContest/scripts.pory"
exlamationmarkandpushdown:
# 253 "data/maps/TundrawoodCityContest/scripts.pory"
	face_up
# 254 "data/maps/TundrawoodCityContest/scripts.pory"
	emote_exclamation_mark
	step_end

# 258 "data/maps/TundrawoodCityContest/scripts.pory"
exlamationmarkandpushdown1:
# 259 "data/maps/TundrawoodCityContest/scripts.pory"
	emote_exclamation_mark
# 260 "data/maps/TundrawoodCityContest/scripts.pory"
	walk_down
	step_end

Journalist1::
# 267 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 268 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 269 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox Journalist1_Text_0, MSGBOX_AUTOCLOSE
# 270 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return


Journalist2::
# 273 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 274 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 275 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox Journalist2_Text_0, MSGBOX_AUTOCLOSE
# 276 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return


BODYGUARD1::
# 279 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 280 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 281 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox BODYGUARD1_Text_0, MSGBOX_AUTOCLOSE
# 282 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return


BODYGUARD2::
# 285 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 286 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 287 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox BODYGUARD2_Text_0, MSGBOX_AUTOCLOSE
# 288 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return


RICHBOY::
# 291 "data/maps/TundrawoodCityContest/scripts.pory"
	lockall
# 292 "data/maps/TundrawoodCityContest/scripts.pory"
	faceplayer
# 293 "data/maps/TundrawoodCityContest/scripts.pory"
	msgbox RICHBOY_Text_0, MSGBOX_AUTOCLOSE
# 294 "data/maps/TundrawoodCityContest/scripts.pory"
	releaseall
	return


FISCHERAGAIN_Text_0:
# 11 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "Ho! I handed you a fisching rod not long\n"
	.string "ago, did you catch some cool Pokémon?$"

FISCHERAGAIN_Text_1:
# 19 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "Hey there, trainer! Do you want a\n"
	.string "fishing rod?$"

FISCHERAGAIN_Text_2:
# 24 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "Use it near water to fish.And you will\n"
	.string "encounter mostly water types!$"

FISCHERAGAIN_Text_3:
# 25 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "If you manage to earn the Water Badge,\n"
	.string "come back and talk to me. I just might\l"
	.string "hand you over my best fishing rod!$"

FISCHERAGAIN_Text_4:
# 33 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "Oh, I see... Maybe another time.$"

LUXURYBALL_Text_0:
# 44 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "Sup! Wanna get a Luxury Ball? Pokémon\n"
	.string "kept in a Luxury Ball gain friendship\l"
	.string "faster!$"

LUXURYBALL_Text_1:
# 52 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "Pokémon kept in a Luxury Ball gain\n"
	.string "friendship faster.$"

POKEBLOCKCASEANDPOKEBLOCK_Text_0:
# 62 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "Hey there, Trainer! You can't enter a\n"
	.string "Pokémon Contest without a Pokéblock\l"
	.string "Case. Here, take this one!$"

POKEBLOCKCASEANDPOKEBLOCK_Text_1:
# 65 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "With a Pokéblock Case, you can store\n"
	.string "Pokéblocks to boost your Pokémon’s\l"
	.string "Contest stats. Good luck in the\l"
	.string "Contest Hall!$"

POKEBLOCKCASEANDPOKEBLOCK_Text_2:
# 73 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "It was a pleasure!$"

pokeblock_Text_0:
# 85 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "You look like you're getting into\n"
	.string "Contests! Here, take some Pokéblocks\l"
	.string "to help your Pokémon perform better!$"

pokeblock_Text_1:
# 99 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "Oh, you still don’t have a Pokéblock\n"
	.string "Case? Sorry, but I can only give\l"
	.string "Pokéblocks to those who have one!$"

pokeblock_Text_2:
# 109 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "I wish you good luck!$"

NPC1_Text_0:
# 118 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "I’ve been training my Pokémon for this\n"
	.string "moment! We’re going to dazzle the\l"
	.string "judges!$"

NPC2_Text_0:
# 125 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "I hope my Pokémon doesn’t mess up… What\n"
	.string "if it trips during the appeal round?!$"

NPC3_Text_0:
# 132 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "The judges look for style and\n"
	.string "confidence. It’s not just about moves\l"
	.string "it’s about presence!$"

NPC4_Text_0:
# 139 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "I won a Master Rank Contest once… The\n"
	.string "key is picking the right moves to\l"
	.string "impress the crowd!$"

NPC5_Text_0:
# 146 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "Cute Pokémon always steal the show! I\n"
	.string "bet a Skitty or Jigglypuff would win\l"
	.string "easily!$"

TRigger1contesthall_Text_0:
# 156 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "What??$"

TRigger1contesthall_Text_1:
# 161 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "Are you sure you are willing to face the\n"
	.string "team aqua?$"

TRigger1contesthall_Text_2:
# 164 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "Good luck!$"

TRigger1contesthall_Text_3:
# 171 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "You dont need to act asd a hero if you\n"
	.string "dont have the capacity!$"

contesthallattendant_Text_0:
# 229 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "Sorry for the inconvenience, but we’re\n"
	.string "having technical issues… Team Aqua has\l"
	.string "taken over the Contest Hall! Please\l"
	.string "stay back it’s too dangerous!$"

Journalist1_Text_0:
# 269 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "We're live at the Contest Hall, where\n"
	.string "Trainers are dazzling the audience with\l"
	.string "stunning performances!$"

Journalist2_Text_0:
# 275 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "A perfect appeal can turn the tide of a\n"
	.string "contest! Which Pokémon will steal the\l"
	.string "spotlight today?$"

BODYGUARD1_Text_0:
# 281 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "Only registered contestants beyond\n"
	.string "this point. No unauthorized entry!$"

BODYGUARD2_Text_0:
# 287 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "Stay alert! We’ve heard rumors of\n"
	.string "trouble in the Contest Hall lately…$"

RICHBOY_Text_0:
# 293 "data/maps/TundrawoodCityContest/scripts.pory"
	.string "Contests are all about elegance! My\n"
	.string "Pokémon are raised to be both powerful\l"
	.string "and glamorous!$"
