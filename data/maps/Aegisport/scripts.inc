# 1 "data/maps/Aegisport/scripts.pory"

# 2 "data/maps/Aegisport/scripts.pory"
Aegisport_MapScripts::
# 3 "data/maps/Aegisport/scripts.pory"
	.byte 0

Team_Magma_Boss_Trigger_AEGISPORT::
# 12 "data/maps/Aegisport/scripts.pory"
	lockall
# 13 "data/maps/Aegisport/scripts.pory"
	setflag FLAG_MAGMA_BOSS_AEGISPORT
# 14 "data/maps/Aegisport/scripts.pory"
	applymovement 1, MAGMABOSSAEGISPORT
# 15 "data/maps/Aegisport/scripts.pory"
	waitmovement 1
# 16 "data/maps/Aegisport/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_AEGISPORT_Text_0, MSGBOX_AUTOCLOSE
# 17 "data/maps/Aegisport/scripts.pory"
	applymovement 1, BossMAGMAAEGISPORTLEAVE
# 18 "data/maps/Aegisport/scripts.pory"
	waitmovement 1
# 19 "data/maps/Aegisport/scripts.pory"
	removeobject 1
# 20 "data/maps/Aegisport/scripts.pory"
	releaseall
# 21 "data/maps/Aegisport/scripts.pory"
	setvar VAR_MAGMA_BOSS_AEGIGLASH, 1
	return


# 24 "data/maps/Aegisport/scripts.pory"
MAGMABOSSAEGISPORT:
# 25 "data/maps/Aegisport/scripts.pory"
	walk_down
# 25 "data/maps/Aegisport/scripts.pory"
	walk_down
# 25 "data/maps/Aegisport/scripts.pory"
	walk_down
# 25 "data/maps/Aegisport/scripts.pory"
	walk_down
# 25 "data/maps/Aegisport/scripts.pory"
	walk_down
# 25 "data/maps/Aegisport/scripts.pory"
	walk_down
# 26 "data/maps/Aegisport/scripts.pory"
	walk_left
# 27 "data/maps/Aegisport/scripts.pory"
	face_player
	step_end

# 31 "data/maps/Aegisport/scripts.pory"
BossMAGMAAEGISPORTLEAVE:
# 32 "data/maps/Aegisport/scripts.pory"
	walk_right
# 33 "data/maps/Aegisport/scripts.pory"
	walk_up
# 33 "data/maps/Aegisport/scripts.pory"
	walk_up
# 33 "data/maps/Aegisport/scripts.pory"
	walk_up
# 33 "data/maps/Aegisport/scripts.pory"
	walk_up
# 33 "data/maps/Aegisport/scripts.pory"
	walk_up
# 33 "data/maps/Aegisport/scripts.pory"
	walk_up
	step_end

Team_Magma_Boss_Trigger_AEGISPORT1::
# 38 "data/maps/Aegisport/scripts.pory"
	lockall
# 39 "data/maps/Aegisport/scripts.pory"
	setflag FLAG_MAGMA_BOSS_AEGISPORT
# 40 "data/maps/Aegisport/scripts.pory"
	applymovement 1, MAGMABOSSAEGISPORT1
# 41 "data/maps/Aegisport/scripts.pory"
	waitmovement 1
# 42 "data/maps/Aegisport/scripts.pory"
	msgbox Team_Magma_Boss_Trigger_AEGISPORT_Text_0, MSGBOX_AUTOCLOSE
# 43 "data/maps/Aegisport/scripts.pory"
	applymovement 1, BossMAGMAAEGISPORTLEAVE
# 44 "data/maps/Aegisport/scripts.pory"
	waitmovement 1
# 45 "data/maps/Aegisport/scripts.pory"
	removeobject 1
# 46 "data/maps/Aegisport/scripts.pory"
	releaseall
# 47 "data/maps/Aegisport/scripts.pory"
	setvar VAR_MAGMA_BOSS_AEGIGLASH, 1
	return


# 50 "data/maps/Aegisport/scripts.pory"
MAGMABOSSAEGISPORT1:
# 51 "data/maps/Aegisport/scripts.pory"
	walk_down
# 51 "data/maps/Aegisport/scripts.pory"
	walk_down
# 51 "data/maps/Aegisport/scripts.pory"
	walk_down
# 51 "data/maps/Aegisport/scripts.pory"
	walk_down
# 51 "data/maps/Aegisport/scripts.pory"
	walk_down
# 51 "data/maps/Aegisport/scripts.pory"
	walk_down
# 51 "data/maps/Aegisport/scripts.pory"
	walk_down
# 52 "data/maps/Aegisport/scripts.pory"
	walk_left
# 53 "data/maps/Aegisport/scripts.pory"
	face_player
	step_end

OLDGRANNYSHOP::
# 58 "data/maps/Aegisport/scripts.pory"
	lock
# 59 "data/maps/Aegisport/scripts.pory"
	faceplayer
# 60 "data/maps/Aegisport/scripts.pory"
	message OLDGRANNYSHOP_Text_0
# 61 "data/maps/Aegisport/scripts.pory"
	waitmessage
# 62 "data/maps/Aegisport/scripts.pory"
	pokemart GRANNYSHOP
# 63 "data/maps/Aegisport/scripts.pory"
	msgbox OLDGRANNYSHOP_Text_1
# 64 "data/maps/Aegisport/scripts.pory"
	release
	end


# 67 "data/maps/Aegisport/scripts.pory"

# 68 "data/maps/Aegisport/scripts.pory"
.align 2
# 69 "data/maps/Aegisport/scripts.pory"
GRANNYSHOP::
# 70 "data/maps/Aegisport/scripts.pory"
	.2byte ITEM_HEALTH_FEATHER
# 71 "data/maps/Aegisport/scripts.pory"
	.2byte ITEM_MUSCLE_FEATHER
# 72 "data/maps/Aegisport/scripts.pory"
	.2byte ITEM_RESIST_FEATHER
# 73 "data/maps/Aegisport/scripts.pory"
	.2byte ITEM_GENIUS_FEATHER
# 74 "data/maps/Aegisport/scripts.pory"
	.2byte ITEM_CLEVER_FEATHER
# 75 "data/maps/Aegisport/scripts.pory"
    .2byte ITEM_SWIFT_FEATHER
# 76 "data/maps/Aegisport/scripts.pory"
	.2byte ITEM_TEA
# 77 "data/maps/Aegisport/scripts.pory"
	pokemartlistend

OLDWOMEN::
# 81 "data/maps/Aegisport/scripts.pory"
	lockall
# 82 "data/maps/Aegisport/scripts.pory"
	msgbox OLDWOMEN_Text_0, MSGBOX_AUTOCLOSE
# 83 "data/maps/Aegisport/scripts.pory"
	applymovement 1, oldwomen
# 84 "data/maps/Aegisport/scripts.pory"
	waitmovement 1
# 85 "data/maps/Aegisport/scripts.pory"
	msgbox OLDWOMEN_Text_1
# 86 "data/maps/Aegisport/scripts.pory"
	setvar VAR_OLD_WOMEN, 1
# 87 "data/maps/Aegisport/scripts.pory"
	releaseall
	return


# 92 "data/maps/Aegisport/scripts.pory"
oldwomen:
# 93 "data/maps/Aegisport/scripts.pory"
	walk_down
# 94 "data/maps/Aegisport/scripts.pory"
	walk_right
# 94 "data/maps/Aegisport/scripts.pory"
	walk_right
# 95 "data/maps/Aegisport/scripts.pory"
	walk_down
# 95 "data/maps/Aegisport/scripts.pory"
	walk_down
# 95 "data/maps/Aegisport/scripts.pory"
	walk_down
# 96 "data/maps/Aegisport/scripts.pory"
	walk_left
# 96 "data/maps/Aegisport/scripts.pory"
	walk_left
# 96 "data/maps/Aegisport/scripts.pory"
	walk_left
# 96 "data/maps/Aegisport/scripts.pory"
	walk_left
# 96 "data/maps/Aegisport/scripts.pory"
	walk_left
# 96 "data/maps/Aegisport/scripts.pory"
	walk_left
# 96 "data/maps/Aegisport/scripts.pory"
	walk_left
# 96 "data/maps/Aegisport/scripts.pory"
	walk_left
# 96 "data/maps/Aegisport/scripts.pory"
	walk_left
# 97 "data/maps/Aegisport/scripts.pory"
	walk_up
# 97 "data/maps/Aegisport/scripts.pory"
	walk_up
# 97 "data/maps/Aegisport/scripts.pory"
	walk_up
# 97 "data/maps/Aegisport/scripts.pory"
	walk_up
# 98 "data/maps/Aegisport/scripts.pory"
	face_down
	step_end

WOMEN1::
# 102 "data/maps/Aegisport/scripts.pory"
	lockall
# 103 "data/maps/Aegisport/scripts.pory"
	msgbox WOMEN1_Text_0, MSGBOX_AUTOCLOSE
	return


rooftopscript::
# 107 "data/maps/Aegisport/scripts.pory"
	lockall
# 108 "data/maps/Aegisport/scripts.pory"
	msgbox rooftopscript_Text_0, MSGBOX_AUTOCLOSE
# 109 "data/maps/Aegisport/scripts.pory"
	releaseall
	return


MOMTODAUGHTER::
# 114 "data/maps/Aegisport/scripts.pory"
	lockall
# 115 "data/maps/Aegisport/scripts.pory"
	msgbox MOMTODAUGHTER_Text_0, MSGBOX_AUTOCLOSE
# 116 "data/maps/Aegisport/scripts.pory"
	releaseall
	return


DAUGHTER::
# 120 "data/maps/Aegisport/scripts.pory"
	lockall
# 121 "data/maps/Aegisport/scripts.pory"
	msgbox DAUGHTER_Text_0, MSGBOX_AUTOCLOSE
# 122 "data/maps/Aegisport/scripts.pory"
	releaseall
	return


Youngster::
# 127 "data/maps/Aegisport/scripts.pory"
	lockall
# 128 "data/maps/Aegisport/scripts.pory"
	faceplayer
# 129 "data/maps/Aegisport/scripts.pory"
	msgbox Youngster_Text_0, MSGBOX_AUTOCLOSE
# 130 "data/maps/Aegisport/scripts.pory"
	releaseall
	return


TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE1::
# 135 "data/maps/Aegisport/scripts.pory"
	compare VAR_GATE_HOUSE, 0
	goto_if_eq TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE1_1
# 141 "data/maps/Aegisport/scripts.pory"
	lockall
# 142 "data/maps/Aegisport/scripts.pory"
	faceplayer
# 143 "data/maps/Aegisport/scripts.pory"
	msgbox TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE1_Text_0, MSGBOX_AUTOCLOSE
# 144 "data/maps/Aegisport/scripts.pory"
	releaseall
	return

TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE1_1:
# 136 "data/maps/Aegisport/scripts.pory"
	lockall
# 137 "data/maps/Aegisport/scripts.pory"
	call TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE
	return


TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE::
# 149 "data/maps/Aegisport/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_2
TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_1:
# 159 "data/maps/Aegisport/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_5
TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_4:
# 169 "data/maps/Aegisport/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_7
	return

TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_2:
# 150 "data/maps/Aegisport/scripts.pory"
	lockall
# 151 "data/maps/Aegisport/scripts.pory"
	faceplayer
# 152 "data/maps/Aegisport/scripts.pory"
	msgbox TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_Text_0, MSGBOX_AUTOCLOSE
# 153 "data/maps/Aegisport/scripts.pory"
	msgbox TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_Text_1
# 154 "data/maps/Aegisport/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 155 "data/maps/Aegisport/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 156 "data/maps/Aegisport/scripts.pory"
	setvar VAR_GATE_HOUSE, 1
# 157 "data/maps/Aegisport/scripts.pory"
	releaseall
	goto TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_1

TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_5:
# 160 "data/maps/Aegisport/scripts.pory"
	lockall
# 161 "data/maps/Aegisport/scripts.pory"
	faceplayer
# 162 "data/maps/Aegisport/scripts.pory"
	msgbox TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_Text_0, MSGBOX_AUTOCLOSE
# 163 "data/maps/Aegisport/scripts.pory"
	msgbox TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_Text_1
# 164 "data/maps/Aegisport/scripts.pory"
	giveitem ITEM_MYSTIC_WATER
# 165 "data/maps/Aegisport/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 166 "data/maps/Aegisport/scripts.pory"
	setvar VAR_GATE_HOUSE, 1
# 167 "data/maps/Aegisport/scripts.pory"
	releaseall
	goto TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_4

TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_7:
# 170 "data/maps/Aegisport/scripts.pory"
	lockall
# 171 "data/maps/Aegisport/scripts.pory"
	faceplayer
# 172 "data/maps/Aegisport/scripts.pory"
	msgbox TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_Text_0, MSGBOX_AUTOCLOSE
# 173 "data/maps/Aegisport/scripts.pory"
	msgbox TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_Text_1
# 174 "data/maps/Aegisport/scripts.pory"
	giveitem ITEM_CHARCOAL
# 175 "data/maps/Aegisport/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 176 "data/maps/Aegisport/scripts.pory"
	setvar VAR_GATE_HOUSE, 1
# 177 "data/maps/Aegisport/scripts.pory"
	releaseall
	return


MOMWHOLOSTHERSON::
# 183 "data/maps/Aegisport/scripts.pory"
	compare VAR_LOST_KID, 0
	goto_if_eq MOMWHOLOSTHERSON_2
MOMWHOLOSTHERSON_1:
# 189 "data/maps/Aegisport/scripts.pory"
	compare VAR_LOST_KID, 1
	goto_if_eq MOMWHOLOSTHERSON_5
MOMWHOLOSTHERSON_4:
# 200 "data/maps/Aegisport/scripts.pory"
	compare VAR_LOST_KID, 2
	goto_if_eq MOMWHOLOSTHERSON_7
	return

MOMWHOLOSTHERSON_2:
# 184 "data/maps/Aegisport/scripts.pory"
	lockall
# 185 "data/maps/Aegisport/scripts.pory"
	faceplayer
# 186 "data/maps/Aegisport/scripts.pory"
	msgbox MOMWHOLOSTHERSON_Text_0, MSGBOX_AUTOCLOSE
# 187 "data/maps/Aegisport/scripts.pory"
	releaseall
	goto MOMWHOLOSTHERSON_1

MOMWHOLOSTHERSON_5:
# 190 "data/maps/Aegisport/scripts.pory"
	lockall
# 191 "data/maps/Aegisport/scripts.pory"
	faceplayer
# 192 "data/maps/Aegisport/scripts.pory"
	msgbox MOMWHOLOSTHERSON_Text_1, MSGBOX_AUTOCLOSE
# 193 "data/maps/Aegisport/scripts.pory"
	msgbox MOMWHOLOSTHERSON_Text_2, MSGBOX_AUTOCLOSE
# 194 "data/maps/Aegisport/scripts.pory"
	giveitem ITEM_MASTER_BALL
# 195 "data/maps/Aegisport/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 196 "data/maps/Aegisport/scripts.pory"
	setvar VAR_LOST_KID, 2
# 197 "data/maps/Aegisport/scripts.pory"
	releaseall
	goto MOMWHOLOSTHERSON_4

MOMWHOLOSTHERSON_7:
# 201 "data/maps/Aegisport/scripts.pory"
	lockall
# 202 "data/maps/Aegisport/scripts.pory"
	faceplayer
# 203 "data/maps/Aegisport/scripts.pory"
	msgbox MOMWHOLOSTHERSON_Text_3, MSGBOX_AUTOCLOSE
# 204 "data/maps/Aegisport/scripts.pory"
	releaseall
	return


BERRYSELLER::
# 210 "data/maps/Aegisport/scripts.pory"
	compare VAR_ROUTE133_STATE, 0
	goto_if_eq BERRYSELLER_2
# 222 "data/maps/Aegisport/scripts.pory"
	compare VAR_ROUTE133_STATE, 1
	goto_if_eq BERRYSELLER_4
	return

BERRYSELLER_2:
# 211 "data/maps/Aegisport/scripts.pory"
	lockall
# 212 "data/maps/Aegisport/scripts.pory"
	faceplayer
# 213 "data/maps/Aegisport/scripts.pory"
	msgbox BERRYSELLER_Text_0, MSGBOX_AUTOCLOSE
# 214 "data/maps/Aegisport/scripts.pory"
	setvar VAR_ROUTE133_STATE, 1
# 215 "data/maps/Aegisport/scripts.pory"
	message OLDGRANNYSHOP_Text_0
# 216 "data/maps/Aegisport/scripts.pory"
	waitmessage
# 217 "data/maps/Aegisport/scripts.pory"
	pokemart BERRYSELLERSHOP
# 218 "data/maps/Aegisport/scripts.pory"
	msgbox OLDGRANNYSHOP_Text_1
# 219 "data/maps/Aegisport/scripts.pory"
	release
	end

BERRYSELLER_4:
# 223 "data/maps/Aegisport/scripts.pory"
	lockall
# 224 "data/maps/Aegisport/scripts.pory"
	faceplayer
# 225 "data/maps/Aegisport/scripts.pory"
	message OLDGRANNYSHOP_Text_0
# 226 "data/maps/Aegisport/scripts.pory"
	waitmessage
# 227 "data/maps/Aegisport/scripts.pory"
	pokemart BERRYSELLERSHOP
# 228 "data/maps/Aegisport/scripts.pory"
	msgbox OLDGRANNYSHOP_Text_1
# 229 "data/maps/Aegisport/scripts.pory"
	release
	end


# 240 "data/maps/Aegisport/scripts.pory"

# 241 "data/maps/Aegisport/scripts.pory"
 
# 242 "data/maps/Aegisport/scripts.pory"
.align 2
# 243 "data/maps/Aegisport/scripts.pory"
BERRYSELLERSHOP::
# 244 "data/maps/Aegisport/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 245 "data/maps/Aegisport/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 246 "data/maps/Aegisport/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 247 "data/maps/Aegisport/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 248 "data/maps/Aegisport/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 249 "data/maps/Aegisport/scripts.pory"
    .2byte ITEM_PERSIM_BERRY
# 250 "data/maps/Aegisport/scripts.pory"
	pokemartlistend

TWINS1::
# 254 "data/maps/Aegisport/scripts.pory"
	lockall
# 255 "data/maps/Aegisport/scripts.pory"
	msgbox TWINS1_Text_0, MSGBOX_AUTOCLOSE
# 256 "data/maps/Aegisport/scripts.pory"
	applymovement 2, EXLAMATIOON_SHIP_HOLE
# 257 "data/maps/Aegisport/scripts.pory"
	waitmovement 2
# 258 "data/maps/Aegisport/scripts.pory"
	msgbox TWINS1_Text_1, MSGBOX_AUTOCLOSE
# 259 "data/maps/Aegisport/scripts.pory"
	releaseall
	return


TWINS2::
# 264 "data/maps/Aegisport/scripts.pory"
	lockall
# 265 "data/maps/Aegisport/scripts.pory"
	msgbox TWINS2_Text_0, MSGBOX_AUTOCLOSE
# 266 "data/maps/Aegisport/scripts.pory"
	applymovement 1, EXLAMATIOON_SHIP_HOLE
# 267 "data/maps/Aegisport/scripts.pory"
	waitmovement 1
# 268 "data/maps/Aegisport/scripts.pory"
	msgbox TWINS2_Text_1, MSGBOX_AUTOCLOSE
# 269 "data/maps/Aegisport/scripts.pory"
	releaseall
	return


# 274 "data/maps/Aegisport/scripts.pory"

# 275 "data/maps/Aegisport/scripts.pory"
Script_IVChecker::
# 276 "data/maps/Aegisport/scripts.pory"
	lock
# 277 "data/maps/Aegisport/scripts.pory"
	faceplayer
# 278 "data/maps/Aegisport/scripts.pory"
	bufferpartymonnick 0, 0
# 279 "data/maps/Aegisport/scripts.pory"
	msgbox Text_IVChecker_1, MSGBOX_DEFAULT
# 280 "data/maps/Aegisport/scripts.pory"
	specialvar VAR_RESULT, GetHpIV
# 281 "data/maps/Aegisport/scripts.pory"
	buffernumberstring 0, VAR_RESULT
# 282 "data/maps/Aegisport/scripts.pory"
	specialvar VAR_RESULT, GetAtkIV
# 283 "data/maps/Aegisport/scripts.pory"
	buffernumberstring 1, VAR_RESULT
# 284 "data/maps/Aegisport/scripts.pory"
	specialvar VAR_RESULT, GetDefIV
# 285 "data/maps/Aegisport/scripts.pory"
	buffernumberstring 2, VAR_RESULT
# 286 "data/maps/Aegisport/scripts.pory"
	msgbox Text_IVChecker_2, MSGBOX_DEFAULT
# 287 "data/maps/Aegisport/scripts.pory"
	specialvar VAR_RESULT, GetSpAtkIV
# 288 "data/maps/Aegisport/scripts.pory"
	buffernumberstring 0, VAR_RESULT
# 289 "data/maps/Aegisport/scripts.pory"
	specialvar VAR_RESULT, GetSpDefIV
# 290 "data/maps/Aegisport/scripts.pory"
	buffernumberstring 1, VAR_RESULT
# 291 "data/maps/Aegisport/scripts.pory"
	specialvar VAR_RESULT, GetSpeedIV
# 292 "data/maps/Aegisport/scripts.pory"
	buffernumberstring 2, VAR_RESULT
# 293 "data/maps/Aegisport/scripts.pory"
	msgbox Text_IVChecker_3, MSGBOX_DEFAULT
# 294 "data/maps/Aegisport/scripts.pory"
	release
# 295 "data/maps/Aegisport/scripts.pory"
	end
# 296 "data/maps/Aegisport/scripts.pory"

# 297 "data/maps/Aegisport/scripts.pory"
Text_IVChecker_1:
# 298 "data/maps/Aegisport/scripts.pory"
	.string "Your {STR_VAR_1}...$"
# 299 "data/maps/Aegisport/scripts.pory"

# 300 "data/maps/Aegisport/scripts.pory"
Text_IVChecker_2:
# 301 "data/maps/Aegisport/scripts.pory"
	.string "Its HP IV is {STR_VAR_1}.\p"
# 302 "data/maps/Aegisport/scripts.pory"
	.string "Its Attack IV is {STR_VAR_2}.\p"
# 303 "data/maps/Aegisport/scripts.pory"
	.string "Its Defense IV is {STR_VAR_3}.$"
# 304 "data/maps/Aegisport/scripts.pory"

# 305 "data/maps/Aegisport/scripts.pory"
Text_IVChecker_3:
# 306 "data/maps/Aegisport/scripts.pory"
	.string "Its Special Attack IV is {STR_VAR_1}.\p"
# 307 "data/maps/Aegisport/scripts.pory"
	.string "Its Special Defense IV is {STR_VAR_2}.\p"
# 308 "data/maps/Aegisport/scripts.pory"
	.string "Its Speed IV is {STR_VAR_3}.\n"
# 309 "data/maps/Aegisport/scripts.pory"
	.string "You're welcome.$"

Team_Magma_Boss_Trigger_AEGISPORT_Text_0:
# 16 "data/maps/Aegisport/scripts.pory"
	.string "Hmph... We need to get access to the\n"
	.string "Alpha Team Headquarters, you’ll need a\l"
	.string "special access card. Go find it in the\l"
	.string "shipyard at the top right of the city.\l"
	.string "Don’t waste my time!$"

OLDGRANNYSHOP_Text_0:
# 60 "data/maps/Aegisport/scripts.pory"
	.string "How may I serve you?$"

OLDGRANNYSHOP_Text_1:
# 63 "data/maps/Aegisport/scripts.pory"
	.string "Please Come Again.$"

OLDWOMEN_Text_0:
# 82 "data/maps/Aegisport/scripts.pory"
	.string "Hey, hey, i am coming.$"

OLDWOMEN_Text_1:
# 85 "data/maps/Aegisport/scripts.pory"
	.string "Come over here.$"

WOMEN1_Text_0:
# 103 "data/maps/Aegisport/scripts.pory"
	.string "I'v been coming here since 2017, 8 years\n"
	.string "cant you imagine? The secret? Her tea.$"

rooftopscript_Text_0:
# 108 "data/maps/Aegisport/scripts.pory"
	.string "It's always a release to drink that tea,\n"
	.string "it reinvigorate.$"

MOMTODAUGHTER_Text_0:
# 115 "data/maps/Aegisport/scripts.pory"
	.string "My daughter is passionate about\n"
	.string "feather, but she doesnt know that\l"
	.string "these acts as 'evs booster'$"

DAUGHTER_Text_0:
# 121 "data/maps/Aegisport/scripts.pory"
	.string "I love feather!!!Red, Green, Blue,\n"
	.string "Yellow.$"

Youngster_Text_0:
# 129 "data/maps/Aegisport/scripts.pory"
	.string "Thank You!$"

TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE1_Text_0:
# 143 "data/maps/Aegisport/scripts.pory"
	.string "Neverstop$"

TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_Text_0:
# 152 "data/maps/Aegisport/scripts.pory"
	.string "Oh, so you're challenging the Water type\n"
	.string "Gym Leader? Listen, I’ve battled them\l"
	.string "before... and lost. But I learned a thing\l"
	.string "or two. Water Pokémon are weak to\l"
	.string "Electric and Grass moves, so if you’ve\l"
	.string "got a strong Thunderbolt or Razor Leaf,\l"
	.string "you’ll have the upper hand. But watch\l"
	.string "out! Some of their Pokémon might know\l"
	.string "Ice type moves to counter Grass types,\l"
	.string "and they’re surprisingly fast. Be ready,\l"
	.string "or you’ll end up like me… defeated.$"

TRAINERWHOTRIEDTOTAKEONTHEWATERBADGE_Text_1:
# 153 "data/maps/Aegisport/scripts.pory"
	.string "Here$"

MOMWHOLOSTHERSON_Text_0:
# 186 "data/maps/Aegisport/scripts.pory"
	.string "Oh, Trainer, I haven't seen my kid in\n"
	.string "hours! He ran off somewhere, probably\l"
	.string "playing around. If you see him, could\l"
	.string "you bring him back home? I'd really\l"
	.string "appreciate it!$"

MOMWHOLOSTHERSON_Text_1:
# 192 "data/maps/Aegisport/scripts.pory"
	.string "Thank you so much! I was starting to\n"
	.string "worry. You're a lifesaver!$"

MOMWHOLOSTHERSON_Text_2:
# 193 "data/maps/Aegisport/scripts.pory"
	.string "Here, a Master Ball! My kid found it on\n"
	.string "the ground and thought it’d be nice to\l"
	.string "give itto you. Consider it a little\l"
	.string "thank-you gift!$"

MOMWHOLOSTHERSON_Text_3:
# 203 "data/maps/Aegisport/scripts.pory"
	.string "We will never forget what you did!$"

BERRYSELLER_Text_0:
# 213 "data/maps/Aegisport/scripts.pory"
	.string "As you might have seen outisde, i\n"
	.string "cultivate berries, and sell them!$"

TWINS1_Text_0:
# 255 "data/maps/Aegisport/scripts.pory"
	.string "My favorite Pokémon is Plusle!$"

TWINS1_Text_1:
# 258 "data/maps/Aegisport/scripts.pory"
	.string "And mine is Minum!$"

TWINS2_Text_0:
# 265 "data/maps/Aegisport/scripts.pory"
	.string "My favroite Pokémon is Minum!$"

TWINS2_Text_1:
# 268 "data/maps/Aegisport/scripts.pory"
	.string "And mine is Plusle!$"
