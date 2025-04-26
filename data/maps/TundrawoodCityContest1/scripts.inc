# 1 "data/maps/TundrawoodCityContest1/scripts.pory"

# 2 "data/maps/TundrawoodCityContest1/scripts.pory"
TundrawoodCityContest1_MapScripts::
# 3 "data/maps/TundrawoodCityContest1/scripts.pory"
	.byte 0

TRIGGER1CONTESTFIGHT::
# 8 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 9 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exlamation_Mark
# 10 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 11 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox TRIGGER1CONTESTFIGHT_Text_0, MSGBOX_AUTOCLOSE
# 12 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement 13, ARCHIEDOWN
# 13 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement 13
# 14 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox TRIGGER1CONTESTFIGHT_Text_1, MSGBOX_AUTOCLOSE
# 15 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement 13, bosstoring
# 16 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement 13
# 17 "data/maps/TundrawoodCityContest1/scripts.pory"
	removeobject 13
# 18 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement 11, bosstoring
# 19 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement 11
# 20 "data/maps/TundrawoodCityContest1/scripts.pory"
	removeobject 11
# 21 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement 13, bosstoring
# 22 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement 13
# 23 "data/maps/TundrawoodCityContest1/scripts.pory"
	removeobject 13
# 24 "data/maps/TundrawoodCityContest1/scripts.pory"
	clearflag FLAG_UNUSED_0x49C
# 25 "data/maps/TundrawoodCityContest1/scripts.pory"
	clearflag FLAG_GRUNT_FEMALE
# 26 "data/maps/TundrawoodCityContest1/scripts.pory"
	setvar VAR_TRICK_HOUSE_LEVEL, 1
# 27 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	return


TRIGGER1CONTESTFIGHT1::
# 30 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 31 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exlamation_Mark
# 32 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 33 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox TRIGGER1CONTESTFIGHT_Text_0, MSGBOX_AUTOCLOSE
# 34 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement 13, ARCHIEDOWN1
# 35 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement 13
# 36 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox TRIGGER1CONTESTFIGHT1_Text_0, MSGBOX_AUTOCLOSE
# 37 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement 13, bosstoring
# 38 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement 13
# 39 "data/maps/TundrawoodCityContest1/scripts.pory"
	removeobject 13
# 40 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement 11, bosstoring
# 41 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement 11
# 42 "data/maps/TundrawoodCityContest1/scripts.pory"
	removeobject 11
# 43 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement 12, bosstoring
# 44 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement 12
# 45 "data/maps/TundrawoodCityContest1/scripts.pory"
	removeobject 12
# 46 "data/maps/TundrawoodCityContest1/scripts.pory"
	clearflag FLAG_UNUSED_0x49C
# 47 "data/maps/TundrawoodCityContest1/scripts.pory"
	clearflag FLAG_GRUNT_FEMALE
# 48 "data/maps/TundrawoodCityContest1/scripts.pory"
	setvar VAR_TRICK_HOUSE_LEVEL, 1
# 49 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	return


TRIGGER1CONTESTFIGHT2::
# 52 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 53 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exlamation_Mark
# 54 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 55 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox TRIGGER1CONTESTFIGHT_Text_0, MSGBOX_AUTOCLOSE
# 56 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement 13, ARCHIEDOWN2
# 57 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement 13
# 58 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox TRIGGER1CONTESTFIGHT1_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement 13, bosstoring
# 60 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement 13
# 61 "data/maps/TundrawoodCityContest1/scripts.pory"
	removeobject 13
# 62 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement 11, bosstoring
# 63 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement 11
# 64 "data/maps/TundrawoodCityContest1/scripts.pory"
	removeobject 11
# 65 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement 12, bosstoring
# 66 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement 12
# 67 "data/maps/TundrawoodCityContest1/scripts.pory"
	removeobject 12
# 68 "data/maps/TundrawoodCityContest1/scripts.pory"
	clearflag FLAG_UNUSED_0x49C
# 69 "data/maps/TundrawoodCityContest1/scripts.pory"
	clearflag FLAG_GRUNT_FEMALE
# 70 "data/maps/TundrawoodCityContest1/scripts.pory"
	setvar VAR_TRICK_HOUSE_LEVEL, 1
# 71 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	return


TRIGGER1CONTESTFIGHT3::
# 74 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 75 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exlamation_Mark
# 76 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 77 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox TRIGGER1CONTESTFIGHT_Text_0, MSGBOX_AUTOCLOSE
# 78 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement 13, ARCHIEDOWN3
# 79 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement 13
# 80 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox TRIGGER1CONTESTFIGHT1_Text_0, MSGBOX_AUTOCLOSE
# 81 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement 13, bosstoring
# 82 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement 13
# 83 "data/maps/TundrawoodCityContest1/scripts.pory"
	removeobject 13
# 84 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement 11, bosstoring
# 85 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement 11
# 86 "data/maps/TundrawoodCityContest1/scripts.pory"
	removeobject 11
# 87 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement 12, bosstoring
# 88 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement 12
# 89 "data/maps/TundrawoodCityContest1/scripts.pory"
	removeobject 12
# 90 "data/maps/TundrawoodCityContest1/scripts.pory"
	clearflag FLAG_UNUSED_0x49C
# 91 "data/maps/TundrawoodCityContest1/scripts.pory"
	clearflag FLAG_GRUNT_FEMALE
# 92 "data/maps/TundrawoodCityContest1/scripts.pory"
	setvar VAR_TRICK_HOUSE_LEVEL, 1
# 93 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	return


# 97 "data/maps/TundrawoodCityContest1/scripts.pory"
gardsmoveleft:
# 98 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 98 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 98 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 98 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 98 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
	step_end

TRIGGERDONTSCAPE::
# 103 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 104 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Exlamation_Mark
# 105 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 106 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox TRIGGERDONTSCAPE_Text_0, MSGBOX_AUTOCLOSE
# 107 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, playercanescape
# 108 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 109 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	return


# 111 "data/maps/TundrawoodCityContest1/scripts.pory"
playercanescape:
# 112 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
	step_end

# 116 "data/maps/TundrawoodCityContest1/scripts.pory"
ARCHIEDOWN2:
# 117 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 117 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 117 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 117 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 117 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
	step_end

# 120 "data/maps/TundrawoodCityContest1/scripts.pory"
ARCHIEDOWN3:
# 121 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 122 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_right
# 123 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 123 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 123 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 123 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
	step_end

# 126 "data/maps/TundrawoodCityContest1/scripts.pory"
ARCHIEDOWN4:
# 127 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 128 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_right
# 128 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_right
# 129 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 129 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 129 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 129 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
	step_end

# 133 "data/maps/TundrawoodCityContest1/scripts.pory"
faceupplayer:
# 134 "data/maps/TundrawoodCityContest1/scripts.pory"
	face_up
	step_end

# 137 "data/maps/TundrawoodCityContest1/scripts.pory"
facerightmovement:
# 138 "data/maps/TundrawoodCityContest1/scripts.pory"
	face_right
	step_end

# 142 "data/maps/TundrawoodCityContest1/scripts.pory"
bosstoring:
# 143 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 143 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 143 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 143 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 143 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
	step_end

# 147 "data/maps/TundrawoodCityContest1/scripts.pory"
allout:
# 148 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 148 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 148 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 148 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 148 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 148 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
	step_end

# 153 "data/maps/TundrawoodCityContest1/scripts.pory"
allout1:
# 154 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_right
# 155 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 155 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 155 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 155 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 155 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 155 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
	step_end

# 158 "data/maps/TundrawoodCityContest1/scripts.pory"
ARCHIEDOWN:
# 159 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 160 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 160 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 161 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 161 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 161 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 161 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
	step_end

# 164 "data/maps/TundrawoodCityContest1/scripts.pory"
ARCHIEDOWN1:
# 165 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 166 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 167 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 167 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 167 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 167 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
	step_end

# 171 "data/maps/TundrawoodCityContest1/scripts.pory"
gruntfirst:
# 172 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 173 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 173 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 173 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 173 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 173 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
	step_end

# 176 "data/maps/TundrawoodCityContest1/scripts.pory"
gruntsecond:
# 177 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 177 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 177 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 177 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 177 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 177 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 177 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 177 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 178 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 178 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 178 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 179 "data/maps/TundrawoodCityContest1/scripts.pory"
	face_up
	step_end

# 182 "data/maps/TundrawoodCityContest1/scripts.pory"
bossgoesdown:
# 183 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 183 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 183 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 183 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 183 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 183 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 184 "data/maps/TundrawoodCityContest1/scripts.pory"
	face_left
	step_end

# 188 "data/maps/TundrawoodCityContest1/scripts.pory"
gruntswhomovetheboss:
# 189 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 189 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 190 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 191 "data/maps/TundrawoodCityContest1/scripts.pory"
	face_down
	step_end

# 195 "data/maps/TundrawoodCityContest1/scripts.pory"
GRUNTDOWNCONTEST:
# 196 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 196 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 196 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 196 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 196 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
	step_end

# 202 "data/maps/TundrawoodCityContest1/scripts.pory"
playertofightcontestright:
# 203 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 204 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 205 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
	step_end

# 208 "data/maps/TundrawoodCityContest1/scripts.pory"
playertofightcontestleft:
# 209 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 210 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_right
# 211 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
	step_end

# 214 "data/maps/TundrawoodCityContest1/scripts.pory"
playertofightcontest:
# 215 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
# 215 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
	step_end

TRAINER1CONTESHALL::
# 221 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 222 "data/maps/TundrawoodCityContest1/scripts.pory"
	faceplayer
# 223 "data/maps/TundrawoodCityContest1/scripts.pory"
	trainerbattle_single AQUA_F_CONTEST_HALL, AQUA_F_CONTEST_HALL_INTRO_TEXT, AQUA_F_CONTEST_HALL_LOSE_TEXT, msgboxafterbattle
# 224 "data/maps/TundrawoodCityContest1/scripts.pory"
	end
# 225 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	return


# 229 "data/maps/TundrawoodCityContest1/scripts.pory"
grunt33leave:
# 230 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 231 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 231 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 231 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 231 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 231 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 231 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 231 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
	step_end

TRAINER2CONTESHALL::
# 235 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 236 "data/maps/TundrawoodCityContest1/scripts.pory"
	faceplayer
# 237 "data/maps/TundrawoodCityContest1/scripts.pory"
	trainerbattle_single AQUA_M_CONTEST_HALL, AQUA_M_CONTEST_HALL_INTRO_TEXT, AQUA_M_CONTEST_HALL_LOSE_TEXT, msgboxafterbattle1
	end


TRAINER3CONTESHALL::
# 242 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 243 "data/maps/TundrawoodCityContest1/scripts.pory"
	faceplayer
# 244 "data/maps/TundrawoodCityContest1/scripts.pory"
	trainerbattle_single AQUA_BOSS_CONTEST_HALL, AQUA_BOSS_CONTEST_HALL_INTRO_TEXT, AQUA_BOSS_CONTEST_HALL_LOSE_TEXT, msgboxafterbattle2
	end


msgboxafterbattle2::
# 249 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 250 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox msgboxafterbattle2_Text_0, MSGBOX_AUTOCLOSE
# 251 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox msgboxafterbattle2_Text_1, MSGBOX_AUTOCLOSE
# 252 "data/maps/TundrawoodCityContest1/scripts.pory"
	playfanfare SE_M_TELEPORT
# 253 "data/maps/TundrawoodCityContest1/scripts.pory"
	removeobject 1
# 254 "data/maps/TundrawoodCityContest1/scripts.pory"
	setvar VAR_TRICK_HOUSE_LEVEL, 2
# 255 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	return


msgboxafterbattle::
# 278 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 279 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox msgboxafterbattle_Text_0, MSGBOX_AUTOCLOSE
# 280 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox msgboxafterbattle_Text_1, MSGBOX_AUTOCLOSE
# 281 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox msgboxafterbattle_Text_2, MSGBOX_AUTOCLOSE
# 282 "data/maps/TundrawoodCityContest1/scripts.pory"
	playfanfare SE_M_TELEPORT
# 283 "data/maps/TundrawoodCityContest1/scripts.pory"
	removeobject 2
# 284 "data/maps/TundrawoodCityContest1/scripts.pory"
	clearflag FLAG_GRUNT_MALE
# 285 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	return


msgboxafterbattle1::
# 289 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 290 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox msgboxafterbattle1_Text_0, MSGBOX_AUTOCLOSE
# 291 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox msgboxafterbattle1_Text_1
# 292 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox msgboxafterbattle1_Text_2, MSGBOX_AUTOCLOSE
# 293 "data/maps/TundrawoodCityContest1/scripts.pory"
	playfanfare SE_M_TELEPORT
# 294 "data/maps/TundrawoodCityContest1/scripts.pory"
	removeobject 3
# 295 "data/maps/TundrawoodCityContest1/scripts.pory"
	setvar VAR_ASH_GATHER_COUNT, 1
# 296 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	return


# 300 "data/maps/TundrawoodCityContest1/scripts.pory"
grunt33leave1:
# 301 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_right
# 302 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 302 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 302 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 302 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 302 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 302 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 302 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
	step_end

TRIGGERBOSSFINALFIGHT::
# 309 "data/maps/TundrawoodCityContest1/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, 1
	goto_if_eq TRIGGERBOSSFINALFIGHT_1
	return

TRIGGERBOSSFINALFIGHT_1:
# 310 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 311 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox TRIGGERBOSSFINALFIGHT_Text_0, MSGBOX_AUTOCLOSE
# 312 "data/maps/TundrawoodCityContest1/scripts.pory"
	applymovement 5, guardreply
# 313 "data/maps/TundrawoodCityContest1/scripts.pory"
	waitmovement 5
# 314 "data/maps/TundrawoodCityContest1/scripts.pory"
	removeobject 5
# 315 "data/maps/TundrawoodCityContest1/scripts.pory"
	setvar VAR_ASH_GATHER_COUNT, 2
# 316 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	return


# 325 "data/maps/TundrawoodCityContest1/scripts.pory"
guardreply:
# 326 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 326 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
# 327 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 327 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 327 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 327 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 327 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 327 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 327 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
# 327 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_left
	step_end

# 331 "data/maps/TundrawoodCityContest1/scripts.pory"
gruntrightleavethering:
# 332 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_right
# 332 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_right
# 332 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_right
	step_end

# 350 "data/maps/TundrawoodCityContest1/scripts.pory"
playercantleave:
# 351 "data/maps/TundrawoodCityContest1/scripts.pory"
	emote_exclamation_mark
# 352 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
	step_end

# 355 "data/maps/TundrawoodCityContest1/scripts.pory"
playergoesup1tile:
# 356 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_up
	step_end

# 360 "data/maps/TundrawoodCityContest1/scripts.pory"
goesdown33:
# 361 "data/maps/TundrawoodCityContest1/scripts.pory"
	walk_down
	step_end

OTHERGRUNTCONTESHALL1::
# 368 "data/maps/TundrawoodCityContest1/scripts.pory"
	compare VAR_BIRCH_STATE, 0
	goto_if_eq OTHERGRUNTCONTESHALL1_2
OTHERGRUNTCONTESHALL1_1:
# 388 "data/maps/TundrawoodCityContest1/scripts.pory"
	compare VAR_BIRCH_STATE, 1
	goto_if_eq OTHERGRUNTCONTESHALL1_4
	return

OTHERGRUNTCONTESHALL1_2:
# 369 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 370 "data/maps/TundrawoodCityContest1/scripts.pory"
	faceplayer
# 371 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox OTHERGRUNTCONTESHALL1_Text_0, MSGBOX_YESNO
# 373 "data/maps/TundrawoodCityContest1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq OTHERGRUNTCONTESHALL1_7
# 381 "data/maps/TundrawoodCityContest1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq OTHERGRUNTCONTESHALL1_9
	goto OTHERGRUNTCONTESHALL1_1

OTHERGRUNTCONTESHALL1_4:
# 389 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 390 "data/maps/TundrawoodCityContest1/scripts.pory"
	faceplayer
# 391 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox OTHERGRUNTCONTESHALL1_Text_2, MSGBOX_AUTOCLOSE
# 392 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	return

OTHERGRUNTCONTESHALL1_7:
# 374 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 375 "data/maps/TundrawoodCityContest1/scripts.pory"
	trainerbattle_single GRUNTCONTESTHALLRANDOM, RANDOMINTRO_TEXT, RANDOMOUTRO_TEXT
# 376 "data/maps/TundrawoodCityContest1/scripts.pory"
	setvar VAR_BIRCH_STATE, 1
# 377 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	end

OTHERGRUNTCONTESHALL1_9:
# 382 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 383 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox OTHERGRUNTCONTESHALL1_Text_1, MSGBOX_AUTOCLOSE
# 384 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	goto OTHERGRUNTCONTESHALL1_1


gruntcontesthall1::
# 407 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 408 "data/maps/TundrawoodCityContest1/scripts.pory"
	faceplayer
# 409 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox gruntcontesthall1_Text_0, MSGBOX_AUTOCLOSE
# 410 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	return


gruntcontesthall2::
# 414 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 415 "data/maps/TundrawoodCityContest1/scripts.pory"
	faceplayer
# 416 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox gruntcontesthall2_Text_0, MSGBOX_AUTOCLOSE
# 417 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	return


gruntcontesthall3::
# 421 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 422 "data/maps/TundrawoodCityContest1/scripts.pory"
	faceplayer
# 423 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox gruntcontesthall3_Text_0, MSGBOX_AUTOCLOSE
# 424 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	return


gruntcontesthall4::
# 428 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 429 "data/maps/TundrawoodCityContest1/scripts.pory"
	faceplayer
# 430 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox gruntcontesthall4_Text_0, MSGBOX_AUTOCLOSE
# 431 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	return


gruntcontesthall5::
# 435 "data/maps/TundrawoodCityContest1/scripts.pory"
	lockall
# 436 "data/maps/TundrawoodCityContest1/scripts.pory"
	faceplayer
# 437 "data/maps/TundrawoodCityContest1/scripts.pory"
	msgbox gruntcontesthall5_Text_0, MSGBOX_AUTOCLOSE
# 438 "data/maps/TundrawoodCityContest1/scripts.pory"
	releaseall
	return


TRIGGER1CONTESTFIGHT_Text_0:
# 11 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "You!!$"

TRIGGER1CONTESTFIGHT_Text_1:
# 14 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "I heard that you defeated some of my\n"
	.string "members, so I invite you to play my\l"
	.string "game. You see, the only way for you to\l"
	.string "leave this Contest Hall is to defeat\l"
	.string "two of my members located in the ring.\l"
	.string "If you manage to beat them, you'll earn\l"
	.string "the right to fight me. And if you manage\l"
	.string "to win all three battles, you will be\l"
	.string "allowed to leave the Contest Hall!$"

TRIGGER1CONTESTFIGHT1_Text_0:
# 36 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "So, you've already taken down some of\n"
	.string "my members? Impressive. But if you want\l"
	.string "to leave this Contest Hall, you'll have\l"
	.string "to play my game.The rules are simple:\l"
	.string "Two of my members are waiting for you in\l"
	.string "the ring. Defeat them both, and you'll\l"
	.string "earn the right to face me. Only after\l"
	.string "winning all three battles will you be\l"
	.string "allowed to leave.But be warned, if you\l"
	.string "do not see my members in the ring, it\l"
	.string "means they have not lost their first\l"
	.string "fight yet. You will need to find and\l"
	.string "defeat them first before you can\l"
	.string "challenge the next one. There is no\l"
	.string "escape until you prove your strength!$"

TRIGGERDONTSCAPE_Text_0:
# 106 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "You cannot leave the Contest Hall until\n"
	.string "you have beaten us! Ahahahaha!$"

msgboxafterbattle2_Text_0:
# 250 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "I must acknowledge your strength. You\n"
	.string "are free to leave... for now. But\l"
	.string "remember this we will meet again soon!$"

msgboxafterbattle2_Text_1:
# 251 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "Beheeyem use Teleport$"

msgboxafterbattle_Text_0:
# 279 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "You have proven yourself. You may now\n"
	.string "advance to the second ring.$"

msgboxafterbattle_Text_1:
# 280 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "I am getting away!$"

msgboxafterbattle_Text_2:
# 281 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "Natu use Teleport!$"

msgboxafterbattle1_Text_0:
# 290 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "Oh no... I can't believe it. Fine, go on\n"
	.string "you've earned the right to face the\l"
	.string "boss!$"

msgboxafterbattle1_Text_1:
# 291 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "Cyaaaa!$"

msgboxafterbattle1_Text_2:
# 292 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "Spoink use Teleport!$"

TRIGGERBOSSFINALFIGHT_Text_0:
# 311 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "Guard, reply.$"

OTHERGRUNTCONTESHALL1_Text_0:
# 371 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "Are you trying to disrepect me? Are\n"
	.string "you?$"

OTHERGRUNTCONTESHALL1_Text_1:
# 383 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "Thats what i tought!$"

OTHERGRUNTCONTESHALL1_Text_2:
# 391 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "Dont think you are That good, you\n"
	.string "peasant!$"

gruntcontesthall1_Text_0:
# 409 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "You think you can just waltz into the\n"
	.string "Contest Hall like you own the place?\l"
	.string "Not so fast! Team Aqua has control\l"
	.string "here!$"

gruntcontesthall2_Text_0:
# 416 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "What are you doing here? This place is\n"
	.string "ours now, and you're just wasting your\l"
	.string "time.$"

gruntcontesthall3_Text_0:
# 423 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "You think this is some kind of game? You\n"
	.string "should’ve stayed out of Team Aqua’s way.$"

gruntcontesthall4_Text_0:
# 430 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "You won’t be making any progress here.\n"
	.string "You’re better off turning around and\l"
	.string "going home.$"

gruntcontesthall5_Text_0:
# 437 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "You really think you’ll find what you're\n"
	.string "looking for here? Go ahead, waste your\l"
	.string "time.$"

AQUA_BOSS_CONTEST_HALL_LOSE_TEXT::
# 259 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "Tch... So, you really are strong. I’ll\n"
	.string "admit defeat for now. But don’t get\l"
	.string "comfortable... we will meet again.$"

AQUA_BOSS_CONTEST_HALL_INTRO_TEXT::
# 264 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "So, you actually made it this far?\n"
	.string "Impressive. But your little streak ends\l"
	.string "here. I won’t hold back let’s see if you’re\l"
	.string "truly worthy!$"

AQUA_M_CONTEST_HALL_LOSE_TEXT::
# 268 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "Ugh... How could I lose? Tch... fine, go\n"
	.string "ahead. But don’t think this is over!$"

AQUA_M_CONTEST_HALL_INTRO_TEXT::
# 273 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "Hah! You think you’re tough just\n"
	.string "because you won once? That was just a\l"
	.string "warm up. Now, let's see if you can handle\l"
	.string "me!$"

AQUA_F_CONTEST_HALL_INTRO_TEXT::
# 336 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "I guess i will the one and only one\n"
	.string "crushing you! HAHAHAH$"

AQUA_F_CONTEST_HALL_LOSE_TEXT::
# 341 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "What?? Well luck sometimes is\n"
	.string "certaintely amazing!$"

RANDOMOUTRO_TEXT::
# 396 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "I had to go easy on you, requested by\n"
	.string "the boss$"

RANDOMINTRO_TEXT::
# 401 "data/maps/TundrawoodCityContest1/scripts.pory"
	.string "Let see who is going to laugh. Ahahaha$"
