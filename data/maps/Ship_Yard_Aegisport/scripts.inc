# 1 "data/maps/Ship_Yard_Aegisport/scripts.pory"

# 2 "data/maps/Ship_Yard_Aegisport/scripts.pory"
Ship_Yard_Aegisport_MapScripts::
# 3 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	.byte 0

Trigger1Shipyard::
# 7 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	lockall
# 8 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	setflag FLAG_SHIPYARD_SCIENTIST
# 9 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 1, EXLAMATION
# 10 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 2, EXLAMATION
# 11 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 3, EXLAMATION
# 12 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 4, EXLAMATION
# 13 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 5, EXLAMATION
# 14 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 6, EXLAMATION
# 15 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	msgbox Trigger1Shipyard_Text_0, MSGBOX_AUTOCLOSE
# 16 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 2, Scientist2
# 17 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement 2
# 18 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	removeobject 2
# 19 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 1, Scientist1
# 20 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement 1
# 21 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	removeobject 1
# 22 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 4, Scientist4
# 23 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement 4
# 24 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	removeobject 4
# 25 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	removeobject 3
# 26 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	removeobject 5
# 27 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	removeobject 6
# 28 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	setvar VAR_UNUSED_0x408B, 1
# 29 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	releaseall
	return


SIGNPRIVATE::
# 37 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	lockall
# 38 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	msgbox SIGNPRIVATE_Text_0
# 39 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	releaseall
	return


# 42 "data/maps/Ship_Yard_Aegisport/scripts.pory"
Scientist4:
# 43 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 44 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 44 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
	step_end

# 47 "data/maps/Ship_Yard_Aegisport/scripts.pory"
Scientist1:
# 48 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_right
# 48 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_right
# 49 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 49 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 49 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
	step_end

# 53 "data/maps/Ship_Yard_Aegisport/scripts.pory"
EXLAMATION:
# 54 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	emote_exclamation_mark
	step_end

# 58 "data/maps/Ship_Yard_Aegisport/scripts.pory"
Scientist2:
# 59 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_right
# 59 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_right
# 60 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 60 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 60 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 60 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 60 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 60 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 60 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 60 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
	step_end

SHIPYARD_2V2_1::
# 65 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	compare VAR_AQUA_FIGHT_SHIP_YARD, 0
	goto_if_eq SHIPYARD_2V2_1_1
	return

SHIPYARD_2V2_1_1:
# 66 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	lockall
# 67 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	setflag FLAG_TEAM_AQUA
# 68 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 9, EXLAMATION
# 69 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 8, EXLAMATION
# 70 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	msgbox SHIPYARD_2V2_1_Text_0, MSGBOX_AUTOCLOSE
# 71 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 8, GRUNT_DOWN
# 72 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement 8
# 73 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 9, GRUNT_DOWN1
# 74 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement 9
# 75 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GRUNT1LOOK
# 76 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 77 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	call UniversalTeamAqua2V2Battle
# 78 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	setvar VAR_AQUA_FIGHT_SHIP_YARD, 1
# 79 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	releaseall
	return


# 89 "data/maps/Ship_Yard_Aegisport/scripts.pory"
GRUNT_DOWN_Leave:
# 90 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_down
# 90 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_down
# 91 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 91 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 92 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 92 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
	step_end

SHIPYARD_2V2_2::
# 97 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	compare VAR_AQUA_FIGHT_SHIP_YARD, 0
	goto_if_eq SHIPYARD_2V2_2_1
	return

SHIPYARD_2V2_2_1:
# 98 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	lockall
# 99 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 9, EXLAMATION
# 100 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 8, EXLAMATION
# 101 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	msgbox SHIPYARD_2V2_1_Text_0, MSGBOX_AUTOCLOSE
# 102 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 8, GRUNT_DOWN2NDSCRIPT
# 103 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement 8
# 104 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 9, GRUNT_2DOWN2NDSCRPIT
# 105 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement 9
# 106 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GRUNT2LOOK
# 107 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 108 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	call UniversalTeamAqua2V2Battle1
# 109 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 9, GRUNT_DOWN2NDSCRIPTLEAVE
# 110 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	setvar VAR_AQUA_FIGHT_SHIP_YARD, 1
# 111 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	releaseall
	return


# 121 "data/maps/Ship_Yard_Aegisport/scripts.pory"
GRUNT_DOWN2NDSCRIPTLEAVE:
	step_end

SHIPYARD_2V2_3::
# 127 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	compare VAR_AQUA_FIGHT_SHIP_YARD, 0
	goto_if_eq SHIPYARD_2V2_3_1
	return

SHIPYARD_2V2_3_1:
# 128 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	lockall
# 129 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 8, EXLAMATION
# 130 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 9, EXLAMATION
# 131 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	msgbox SHIPYARD_2V2_1_Text_0, MSGBOX_AUTOCLOSE
# 132 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 8, GRUNT_DOWN2NDSCRIPT1
# 133 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement 8
# 134 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 9, GRUNT_2DOWN2NDSCRPIT1
# 135 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement 9
# 136 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GRUNT1LOOK1
# 137 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 138 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	call UniversalTeamAqua2V2Battle2
# 139 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	setvar VAR_AQUA_FIGHT_SHIP_YARD, 1
# 140 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	releaseall
	return


# 151 "data/maps/Ship_Yard_Aegisport/scripts.pory"
GRUNT1LOOK1:
# 152 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	face_down
	step_end

# 156 "data/maps/Ship_Yard_Aegisport/scripts.pory"
GRUNT_2DOWN2NDSCRPIT1:
# 157 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 158 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 159 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 159 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 159 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 159 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 159 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 160 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 160 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 160 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 161 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	face_up
	step_end

# 165 "data/maps/Ship_Yard_Aegisport/scripts.pory"
GRUNT_DOWN2NDSCRIPT1:
# 166 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 166 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 166 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 166 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 166 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 167 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 167 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 167 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 167 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 168 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 168 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 169 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	face_right
	step_end

# 174 "data/maps/Ship_Yard_Aegisport/scripts.pory"
GRUNT_2DOWN2NDSCRPIT:
# 175 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 175 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 175 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 175 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 175 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 176 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 176 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 177 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	face_up
	step_end

# 181 "data/maps/Ship_Yard_Aegisport/scripts.pory"
GRUNT_DOWN2NDSCRIPT:
# 182 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 182 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 182 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 182 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 182 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 182 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 183 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 183 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
	step_end

# 187 "data/maps/Ship_Yard_Aegisport/scripts.pory"
GRUNT2LOOK:
# 188 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	face_right
	step_end

# 192 "data/maps/Ship_Yard_Aegisport/scripts.pory"
GRUNT1LOOK:
# 193 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	face_down
	step_end

# 197 "data/maps/Ship_Yard_Aegisport/scripts.pory"
GRUNT_DOWN:
# 198 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 198 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 198 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 198 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 198 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 198 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 198 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 199 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
	step_end

# 203 "data/maps/Ship_Yard_Aegisport/scripts.pory"
GRUNT_DOWN1:
# 204 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 204 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 204 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 204 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 204 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 204 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 205 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 206 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	face_up
	step_end

# 209 "data/maps/Ship_Yard_Aegisport/scripts.pory"
AQUA9:
# 210 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	face_up
	step_end

# 214 "data/maps/Ship_Yard_Aegisport/scripts.pory"
AQUA10:
# 215 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 216 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_down
# 217 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_down
# 218 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_right
# 219 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_right
# 220 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_right
# 221 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 222 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
	step_end

# 226 "data/maps/Ship_Yard_Aegisport/scripts.pory"
Team_AquaMoveleft:
# 227 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 227 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
	step_end

UniversalTeamAqua2V2Battle::
# 232 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	trainerbattle_two_trainers GRUNT_1, AQUA_MEMBER_SHIPYARD_2F_text1, GRUNT_2, AQUA_MEMBER_SHIPYARD_2F_text2
# 233 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	msgbox UniversalTeamAqua2V2Battle_Text_0, MSGBOX_AUTOCLOSE
# 234 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 8, GRUNT_DOWN_Leave
# 235 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement 8
# 236 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	removeobject 8
# 237 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 9, GRUNT_DOWN_Leave1
# 238 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement 9
# 239 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	removeobject 9
# 240 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	setvar VAR_AQUA_FIGHT_SHIP_YARD, 1
	end


UniversalTeamAqua2V2Battle1::
# 245 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	trainerbattle_two_trainers GRUNT_1, AQUA_MEMBER_SHIPYARD_2F_text1, GRUNT_2, AQUA_MEMBER_SHIPYARD_2F_text2
# 246 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	msgbox UniversalTeamAqua2V2Battle_Text_0, MSGBOX_AUTOCLOSE
# 247 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 8, GRUNT_DOWN_Leave3
# 248 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement 8
# 249 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	removeobject 8
# 250 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 9, GRUNT_DOWN_Leave4
# 251 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement 9
# 252 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	removeobject 9
# 253 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	setvar VAR_AQUA_FIGHT_SHIP_YARD, 1
	end


UniversalTeamAqua2V2Battle2::
# 258 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	trainerbattle_two_trainers GRUNT_1, AQUA_MEMBER_SHIPYARD_2F_text1, GRUNT_2, AQUA_MEMBER_SHIPYARD_2F_text2
# 259 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	msgbox UniversalTeamAqua2V2Battle_Text_0, MSGBOX_AUTOCLOSE
# 260 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 9, GRUNT_DOWN_Leave5
# 261 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement 9
# 262 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	removeobject 9
# 263 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	applymovement 8, GRUNT_DOWN_Leave6
# 264 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	waitmovement 8
# 265 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	removeobject 8
# 266 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	setvar VAR_AQUA_FIGHT_SHIP_YARD, 1
	end


# 270 "data/maps/Ship_Yard_Aegisport/scripts.pory"
GRUNT_DOWN_Leave5:
# 271 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_down
# 271 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_down
# 272 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_right
# 272 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_right
# 273 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 273 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
	step_end

# 277 "data/maps/Ship_Yard_Aegisport/scripts.pory"
GRUNT_DOWN_Leave6:
# 278 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_right
# 279 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
	step_end

# 282 "data/maps/Ship_Yard_Aegisport/scripts.pory"
GRUNT_DOWN_Leave4:
# 283 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 284 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 285 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 286 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_right
# 287 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
	step_end

# 291 "data/maps/Ship_Yard_Aegisport/scripts.pory"
GRUNT_DOWN_Leave3:
# 292 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
# 293 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 294 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
	step_end

# 298 "data/maps/Ship_Yard_Aegisport/scripts.pory"
GRUNT_DOWN_Leave1:
# 299 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_left
# 300 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	walk_up
	step_end

MSGBOXSCIENTIST1::
# 315 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	lockall
# 316 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	faceplayer
# 317 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	msgbox MSGBOXSCIENTIST1_Text_0, MSGBOX_AUTOCLOSE
# 318 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	releaseall
	return


MSGBOXSCIENTIST5::
# 323 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	lockall
# 324 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	faceplayer
# 325 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	msgbox MSGBOXSCIENTIST5_Text_0, MSGBOX_AUTOCLOSE
# 326 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	releaseall
	return


MSGBOXSCIENTIST6::
# 331 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	lockall
# 332 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	faceplayer
# 333 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	msgbox MSGBOXSCIENTIST6_Text_0, MSGBOX_AUTOCLOSE
# 334 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	releaseall
	return


MSGBOXSCIENTIST2::
# 339 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	lockall
# 340 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	faceplayer
# 341 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	msgbox MSGBOXSCIENTIST2_Text_0, MSGBOX_AUTOCLOSE
# 342 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	releaseall
	return


MSGBOXSCIENTIST3::
# 346 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	lockall
# 347 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	faceplayer
# 348 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	msgbox MSGBOXSCIENTIST3_Text_0, MSGBOX_AUTOCLOSE
# 349 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	releaseall
	return


MSGBOXSCIENTIST4::
# 353 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	lockall
# 354 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	faceplayer
# 355 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	msgbox MSGBOXSCIENTIST4_Text_0, MSGBOX_AUTOCLOSE
# 356 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	releaseall
	return


MSGBOXSCIENTIST7::
# 361 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	lockall
# 362 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	faceplayer
# 363 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	msgbox MSGBOXSCIENTIST7_Text_0, MSGBOX_AUTOCLOSE
# 364 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	releaseall
	return


Trigger1Shipyard_Text_0:
# 15 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	.string "INTRUDER!$"

SIGNPRIVATE_Text_0:
# 38 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	.string "PRIVATE BUILDING$"

SHIPYARD_2V2_1_Text_0:
# 70 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	.string "This is a private building owned by the\n"
	.string "Aqua Team, get out!$"

UniversalTeamAqua2V2Battle_Text_0:
# 233 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	.string "Lets get out of here!$"

MSGBOXSCIENTIST1_Text_0:
# 317 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	.string "Hah... You think you've won? Team Aqua's\n"
	.string "plans are already in motion!$"

MSGBOXSCIENTIST5_Text_0:
# 325 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	.string "Laugh all you want, but soon, the world\n"
	.string "will be covered in water, just as it\l"
	.string "should be!$"

MSGBOXSCIENTIST6_Text_0:
# 333 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	.string "You... You may have beaten those\n"
	.string "grunts, but you’re too late! Nothing can\l"
	.string "stop us now!$"

MSGBOXSCIENTIST2_Text_0:
# 341 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	.string "I'm just a scientist! I have no clue\n"
	.string "what Team Aqua is planning!$"

MSGBOXSCIENTIST3_Text_0:
# 348 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	.string "W Wait! You don't understand! I was just\n"
	.string "following orders! I had no choice!$"

MSGBOXSCIENTIST4_Text_0:
# 355 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	.string "I don't care what happens to me, but\n"
	.string "Team Aqua’s vision will become reality$"

MSGBOXSCIENTIST7_Text_0:
# 363 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	.string "I tried to speak up, but Team Aqua\n"
	.string "doesn’t take kindly to ‘disloyalty’..$"

AQUA_MEMBER_SHIPYARD_2F_text1::
# 304 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	.string "You are too strong, don't get your\n"
	.string "hopes up, we are going to crush you!$"

AQUA_MEMBER_SHIPYARD_2F_text2::
# 309 "data/maps/Ship_Yard_Aegisport/scripts.pory"
	.string "Just like he said, we are going to\n"
	.string "neutralize you, it's only a matter of\l"
	.string "time!$"
