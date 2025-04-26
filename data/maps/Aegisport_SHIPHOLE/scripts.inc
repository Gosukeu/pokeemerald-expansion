# 1 "data/maps/Aegisport_SHIPHOLE/scripts.pory"

# 2 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
Aegisport_SHIPHOLE_MapScripts::
# 3 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	.byte 0

GRUNTS_SHIP_HOLE::
# 9 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	lockall
# 10 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 2, EXLAMATIOON_SHIP_HOLE
# 11 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 3, EXLAMATIOON_SHIP_HOLE
# 12 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	msgbox GRUNTS_SHIP_HOLE_Text_0
# 13 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 2, GRUNT3SHIPHOLE
# 14 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 2
# 15 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 3, GRUNT4SHIPHOLE
# 16 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 3
# 17 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	msgbox GRUNTS_SHIP_HOLE_Text_1, MSGBOX_AUTOCLOSE
# 18 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	call BATTLE_2V2_GRUNTS_SHIP_HOLE
	return


GRUNTS_SHIP_HOLE1::
# 26 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	lockall
# 27 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 2, EXLAMATIOON_SHIP_HOLE
# 28 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 3, EXLAMATIOON_SHIP_HOLE
# 29 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	msgbox GRUNTS_SHIP_HOLE_Text_0
# 30 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 2, GRUNT3SHIPHOLE2
# 31 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 2
# 32 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 3, GRUNT4SHIPHOLE2
# 33 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 3
# 34 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	msgbox GRUNTS_SHIP_HOLE_Text_1, MSGBOX_AUTOCLOSE
# 35 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	call BATTLE_2V2_GRUNTS_SHIP_HOLE1
	return


GRUNTS_SHIP_HOLE2::
# 42 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	lockall
# 43 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 2, EXLAMATIOON_SHIP_HOLE
# 44 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 3, EXLAMATIOON_SHIP_HOLE
# 45 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	msgbox GRUNTS_SHIP_HOLE_Text_0
# 46 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 3, GRUNT4SHIPHOLE3
# 47 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 3
# 48 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 2, GRUNT3SHIPHOLE3
# 49 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 2
# 50 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	msgbox GRUNTS_SHIP_HOLE_Text_1, MSGBOX_AUTOCLOSE
# 51 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	call BATTLE_2V2_GRUNTS_SHIP_HOLE2
	return


GRUNTS_SHIP_HOLE3::
# 57 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	lockall
# 58 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 2, EXLAMATIOON_SHIP_HOLE
# 59 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 3, EXLAMATIOON_SHIP_HOLE
# 60 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	msgbox GRUNTS_SHIP_HOLE_Text_0
# 61 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 2, GRUNT3SHIPHOLE4
# 62 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 2
# 63 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 3, GRUNT4SHIPHOLE4
# 64 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 3
# 65 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	msgbox GRUNTS_SHIP_HOLE_Text_1, MSGBOX_AUTOCLOSE
# 66 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	call BATTLE_2V2_GRUNTS_SHIP_HOLE3
	return


# 71 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
GRUNT3SHIPHOLE4:
# 72 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_down
# 73 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 73 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 73 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 73 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 73 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 73 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 73 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 74 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_down
	step_end

# 79 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
GRUNT4SHIPHOLE4:
# 80 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_down
# 81 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 81 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 81 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 81 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 81 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 82 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_down
# 82 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_down
# 83 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	face_left
	step_end

# 85 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
GRUNT4SHIPHOLE3:
# 86 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_down
# 87 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 87 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 87 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 87 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 88 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_down
# 89 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	face_left
	step_end

# 94 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
GRUNT3SHIPHOLE3:
# 95 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_down
# 96 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 96 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 96 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 96 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 96 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 96 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 97 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	face_down
	step_end

# 102 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
GRUNT4SHIPHOLE2:
# 103 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_down
# 104 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 104 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 105 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	face_down
	step_end

# 109 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
GRUNT3SHIPHOLE2:
# 110 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_down
# 110 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_down
# 111 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 111 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 111 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 111 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
	step_end

# 119 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
EXLAMATIOON_SHIP_HOLE:
# 120 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	emote_exclamation_mark
	step_end

# 124 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
GRUNT4SHIPHOLE:
# 125 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_down
# 125 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_down
# 126 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 127 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	face_down
	step_end

# 131 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
GRUNT3SHIPHOLE:
# 132 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_down
# 132 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_down
# 132 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_down
# 133 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 133 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 133 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
	step_end

# 137 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
GRUNT3SHIPHOLEBACK:
# 138 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 138 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 139 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 139 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 139 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 139 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
	step_end

BATTLE_2V2_GRUNTS_SHIP_HOLE::
# 144 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	trainerbattle_two_trainers GRUNT_3, GRUNTS3_text, GRUNT_4, GRUNTS4_text
# 145 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	msgbox BATTLE_2V2_GRUNTS_SHIP_HOLE_Text_0, MSGBOX_AUTOCLOSE
# 146 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 2, GRUNT3SHIPHOLEBACK
# 147 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 2
# 148 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	removeobject 2
# 149 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 3, GRUNT4SHIPHOLEBACK
# 150 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 3
# 151 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	removeobject 3
# 152 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 1, SHIP_MOVEMENT
# 153 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 1
# 154 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	removeobject 1
# 155 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	setvar VAR_GRUNTS3_4, 1
	end


BATTLE_2V2_GRUNTS_SHIP_HOLE1::
# 164 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	trainerbattle_two_trainers GRUNT_3, GRUNTS3_text, GRUNT_4, GRUNTS4_text
# 165 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	msgbox BATTLE_2V2_GRUNTS_SHIP_HOLE_Text_0, MSGBOX_AUTOCLOSE
# 166 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 2, GRUNT3SHIPHOLEBACK1
# 167 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 2
# 168 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	removeobject 2
# 169 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 3, GRUNT4SHIPHOLEBACK2
# 170 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 3
# 171 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	removeobject 3
# 172 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 1, SHIP_MOVEMENT
# 173 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 1
# 174 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	removeobject 1
# 175 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	setvar VAR_GRUNTS3_4, 1
	end


BATTLE_2V2_GRUNTS_SHIP_HOLE2::
# 183 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	trainerbattle_two_trainers GRUNT_3, GRUNTS3_text, GRUNT_4, GRUNTS4_text
# 184 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	msgbox BATTLE_2V2_GRUNTS_SHIP_HOLE_Text_0, MSGBOX_AUTOCLOSE
# 185 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 3, GRUNT4SHIPHOLEBACK3
# 186 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 3
# 187 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	removeobject 3
# 188 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 2, GRUNT3SHIPHOLEBACK2
# 189 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 2
# 190 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	removeobject 2
# 191 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 1, SHIP_MOVEMENT
# 192 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 1
# 193 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	removeobject 1
# 194 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	setvar VAR_GRUNTS3_4, 1
	end


BATTLE_2V2_GRUNTS_SHIP_HOLE3::
# 202 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	trainerbattle_two_trainers GRUNT_3, GRUNTS3_text, GRUNT_4, GRUNTS4_text
# 203 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	msgbox BATTLE_2V2_GRUNTS_SHIP_HOLE_Text_0, MSGBOX_AUTOCLOSE
# 204 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 3, GRUNT4SHIPHOLEBACK5
# 205 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 3
# 206 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	removeobject 3
# 207 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 2, GRUNT3SHIPHOLEBACK3
# 208 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 2
# 209 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	removeobject 2
# 210 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	applymovement 1, SHIP_MOVEMENT
# 211 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	waitmovement 1
# 212 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	removeobject 1
# 213 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	setvar VAR_GRUNTS3_4, 1
	end


# 220 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
GRUNT3SHIPHOLEBACK3:
# 221 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 222 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 222 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 222 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 222 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 222 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 223 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 223 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
	step_end

# 227 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
GRUNT4SHIPHOLEBACK5:
# 228 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 228 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 229 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 229 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 229 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 229 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 229 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 229 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 230 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 230 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
	step_end

# 234 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
GRUNT4SHIPHOLEBACK4:
	step_end

# 238 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
GRUNT4SHIPHOLEBACK3:
# 239 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_down
# 240 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 240 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 240 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 240 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 240 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 241 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 241 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 241 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 241 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
	step_end

# 245 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
GRUNT3SHIPHOLEBACK2:
# 246 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 246 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 246 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 246 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 247 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 247 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 247 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
	step_end

# 251 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
GRUNT3SHIPHOLEBACK1:
# 252 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 252 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 252 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 253 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 253 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 253 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
	step_end

# 257 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
GRUNT4SHIPHOLEBACK2:
# 258 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 258 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 258 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 258 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 259 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 259 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
	step_end

# 263 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
SHIP_MOVEMENT:
# 264 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 264 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 264 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 264 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 264 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 264 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 264 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 264 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 264 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 264 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 264 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 264 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 264 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 264 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
# 264 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_right
	step_end

# 268 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
GRUNT4SHIPHOLEBACK:
# 269 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 269 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 269 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_left
# 270 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 270 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
# 270 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	walk_up
	step_end

GRUNTS_SHIP_HOLE_Text_0:
# 12 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	.string "What ??$"

GRUNTS_SHIP_HOLE_Text_1:
# 17 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	.string "Hum iv heard storys about a certain kid\n"
	.string "coming from the island under the\l"
	.string "commandement of the infamous Team\l"
	.string "Magma.Could that be it? All right kid,\l"
	.string "ready to go back to your shitty island?$"

BATTLE_2V2_GRUNTS_SHIP_HOLE_Text_0:
# 145 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	.string "Cmon hurry up, get on the boat!$"

GRUNTS3_text::
# 274 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	.string "We need to report this to our boss, he\n"
	.string "will personally take care of this kids.$"

GRUNTS4_text::
# 279 "data/maps/Aegisport_SHIPHOLE/scripts.pory"
	.string "I couldnt agree more!$"
