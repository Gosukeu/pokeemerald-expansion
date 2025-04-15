# 1 "data/maps/Rival_House/scripts.pory"

# 2 "data/maps/Rival_House/scripts.pory"
Rival_House_MapScripts::
# 3 "data/maps/Rival_House/scripts.pory"
	.byte 0

Trigger::
# 14 "data/maps/Rival_House/scripts.pory"
	compare VAR_CHECK_RIVAL, 0
	goto_if_eq Trigger_1
	return

Trigger_1:
# 15 "data/maps/Rival_House/scripts.pory"
	checkplayergender
# 16 "data/maps/Rival_House/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RIVALGIRL
# 17 "data/maps/Rival_House/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RIVALBOY
	return


Trigger1::
# 24 "data/maps/Rival_House/scripts.pory"
	compare VAR_CHECK_RIVAL, 0
	goto_if_eq Trigger1_1
	return

Trigger1_1:
# 25 "data/maps/Rival_House/scripts.pory"
	checkplayergender
# 26 "data/maps/Rival_House/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RIVALGIRLspecial
# 27 "data/maps/Rival_House/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RIVALBOYspecial
	return


Trigger2::
# 34 "data/maps/Rival_House/scripts.pory"
	compare VAR_CHECK_RIVAL, 0
	goto_if_eq Trigger2_1
	return

Trigger2_1:
# 35 "data/maps/Rival_House/scripts.pory"
	checkplayergender
# 36 "data/maps/Rival_House/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RIVALGIRL1
# 37 "data/maps/Rival_House/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RIVALBOY1
	return


Trigger3::
# 44 "data/maps/Rival_House/scripts.pory"
	compare VAR_CHECK_RIVAL, 0
	goto_if_eq Trigger3_1
	return

Trigger3_1:
# 45 "data/maps/Rival_House/scripts.pory"
	checkplayergender
# 46 "data/maps/Rival_House/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, RIVALGIRL2
# 47 "data/maps/Rival_House/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, RIVALBOY2
	return


RIVALGIRL::
# 54 "data/maps/Rival_House/scripts.pory"
	lockall
# 55 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Exlamation_Mark
# 56 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 57 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Greeting_Rival_Mom
# 58 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 59 "data/maps/Rival_House/scripts.pory"
	msgbox RIVALGIRL_Text_0, MSGBOX_AUTOCLOSE
# 60 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Rival_Mom_Goes_Back
# 61 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 62 "data/maps/Rival_House/scripts.pory"
	setvar VAR_CHECK_RIVAL, 2
# 63 "data/maps/Rival_House/scripts.pory"
	releaseall
	return


RIVALBOY::
# 67 "data/maps/Rival_House/scripts.pory"
	lockall
# 68 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Exlamation_Mark
# 69 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 70 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Greeting_Rival_Mom
# 71 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 72 "data/maps/Rival_House/scripts.pory"
	msgbox RIVALBOY_Text_0, MSGBOX_AUTOCLOSE
# 73 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Rival_Mom_Goes_Back
# 74 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 75 "data/maps/Rival_House/scripts.pory"
	setvar VAR_CHECK_RIVAL, 2
# 76 "data/maps/Rival_House/scripts.pory"
	releaseall
	return


RIVALGIRLspecial::
# 81 "data/maps/Rival_House/scripts.pory"
	lockall
# 82 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Exlamation_Mark
# 83 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 84 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Greeting_Rival_Mom1
# 85 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 86 "data/maps/Rival_House/scripts.pory"
	msgbox RIVALGIRL_Text_0, MSGBOX_AUTOCLOSE
# 87 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Rival_Mom_Goes_Back1
# 88 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 89 "data/maps/Rival_House/scripts.pory"
	setvar VAR_CHECK_RIVAL, 2
# 90 "data/maps/Rival_House/scripts.pory"
	releaseall
	return


RIVALBOYspecial::
# 94 "data/maps/Rival_House/scripts.pory"
	lockall
# 95 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Exlamation_Mark
# 96 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 97 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Greeting_Rival_Mom1
# 98 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 99 "data/maps/Rival_House/scripts.pory"
	msgbox RIVALBOY_Text_0, MSGBOX_AUTOCLOSE
# 100 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Rival_Mom_Goes_Back1
# 101 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 102 "data/maps/Rival_House/scripts.pory"
	setvar VAR_CHECK_RIVAL, 2
# 103 "data/maps/Rival_House/scripts.pory"
	releaseall
	return


# 108 "data/maps/Rival_House/scripts.pory"
Greeting_Rival_Mom1:
# 109 "data/maps/Rival_House/scripts.pory"
	walk_left
# 109 "data/maps/Rival_House/scripts.pory"
	walk_left
# 109 "data/maps/Rival_House/scripts.pory"
	walk_left
# 109 "data/maps/Rival_House/scripts.pory"
	walk_left
# 109 "data/maps/Rival_House/scripts.pory"
	walk_left
# 109 "data/maps/Rival_House/scripts.pory"
	walk_left
# 110 "data/maps/Rival_House/scripts.pory"
	walk_down
# 110 "data/maps/Rival_House/scripts.pory"
	walk_down
# 110 "data/maps/Rival_House/scripts.pory"
	walk_down
	step_end

# 114 "data/maps/Rival_House/scripts.pory"
Rival_Mom_Goes_Back1:
# 115 "data/maps/Rival_House/scripts.pory"
	walk_up
# 115 "data/maps/Rival_House/scripts.pory"
	walk_up
# 115 "data/maps/Rival_House/scripts.pory"
	walk_up
# 116 "data/maps/Rival_House/scripts.pory"
	walk_right
# 116 "data/maps/Rival_House/scripts.pory"
	walk_right
# 116 "data/maps/Rival_House/scripts.pory"
	walk_right
# 116 "data/maps/Rival_House/scripts.pory"
	walk_right
# 116 "data/maps/Rival_House/scripts.pory"
	walk_right
# 116 "data/maps/Rival_House/scripts.pory"
	walk_right
# 117 "data/maps/Rival_House/scripts.pory"
	face_up
	step_end

# 121 "data/maps/Rival_House/scripts.pory"
Greeting_Rival_Mom:
# 122 "data/maps/Rival_House/scripts.pory"
	walk_left
# 122 "data/maps/Rival_House/scripts.pory"
	walk_left
# 122 "data/maps/Rival_House/scripts.pory"
	walk_left
# 122 "data/maps/Rival_House/scripts.pory"
	walk_left
# 122 "data/maps/Rival_House/scripts.pory"
	walk_left
# 123 "data/maps/Rival_House/scripts.pory"
	walk_down
# 123 "data/maps/Rival_House/scripts.pory"
	walk_down
# 123 "data/maps/Rival_House/scripts.pory"
	walk_down
# 123 "data/maps/Rival_House/scripts.pory"
	walk_down
	step_end

# 128 "data/maps/Rival_House/scripts.pory"
Rival_Mom_Goes_Back:
# 129 "data/maps/Rival_House/scripts.pory"
	walk_up
# 129 "data/maps/Rival_House/scripts.pory"
	walk_up
# 129 "data/maps/Rival_House/scripts.pory"
	walk_up
# 129 "data/maps/Rival_House/scripts.pory"
	walk_up
# 130 "data/maps/Rival_House/scripts.pory"
	walk_right
# 130 "data/maps/Rival_House/scripts.pory"
	walk_right
# 130 "data/maps/Rival_House/scripts.pory"
	walk_right
# 130 "data/maps/Rival_House/scripts.pory"
	walk_right
# 130 "data/maps/Rival_House/scripts.pory"
	walk_right
# 131 "data/maps/Rival_House/scripts.pory"
	face_up
	step_end

RIVALGIRL1::
# 137 "data/maps/Rival_House/scripts.pory"
	lockall
# 138 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Exlamation_Mark
# 139 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 140 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Greeting_Rival_Mom2
# 141 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 142 "data/maps/Rival_House/scripts.pory"
	msgbox RIVALGIRL_Text_0, MSGBOX_AUTOCLOSE
# 143 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Rival_Mom_Goes_Back2
# 144 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 145 "data/maps/Rival_House/scripts.pory"
	setvar VAR_CHECK_RIVAL, 2
# 146 "data/maps/Rival_House/scripts.pory"
	releaseall
	return


RIVALBOY1::
# 149 "data/maps/Rival_House/scripts.pory"
	lockall
# 150 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Exlamation_Mark
# 151 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 152 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Greeting_Rival_Mom2
# 153 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 154 "data/maps/Rival_House/scripts.pory"
	msgbox RIVALBOY_Text_0, MSGBOX_AUTOCLOSE
# 155 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Rival_Mom_Goes_Back2
# 156 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 157 "data/maps/Rival_House/scripts.pory"
	setvar VAR_CHECK_RIVAL, 2
# 158 "data/maps/Rival_House/scripts.pory"
	releaseall
	return


# 161 "data/maps/Rival_House/scripts.pory"
Greeting_Rival_Mom2:
# 162 "data/maps/Rival_House/scripts.pory"
	walk_left
# 162 "data/maps/Rival_House/scripts.pory"
	walk_left
# 162 "data/maps/Rival_House/scripts.pory"
	walk_left
# 162 "data/maps/Rival_House/scripts.pory"
	walk_left
# 162 "data/maps/Rival_House/scripts.pory"
	walk_left
# 162 "data/maps/Rival_House/scripts.pory"
	walk_left
# 162 "data/maps/Rival_House/scripts.pory"
	walk_left
# 163 "data/maps/Rival_House/scripts.pory"
	walk_down
# 163 "data/maps/Rival_House/scripts.pory"
	walk_down
# 163 "data/maps/Rival_House/scripts.pory"
	walk_down
	step_end

# 167 "data/maps/Rival_House/scripts.pory"
Rival_Mom_Goes_Back2:
# 168 "data/maps/Rival_House/scripts.pory"
	walk_up
# 168 "data/maps/Rival_House/scripts.pory"
	walk_up
# 168 "data/maps/Rival_House/scripts.pory"
	walk_up
# 169 "data/maps/Rival_House/scripts.pory"
	walk_right
# 169 "data/maps/Rival_House/scripts.pory"
	walk_right
# 169 "data/maps/Rival_House/scripts.pory"
	walk_right
# 169 "data/maps/Rival_House/scripts.pory"
	walk_right
# 169 "data/maps/Rival_House/scripts.pory"
	walk_right
# 169 "data/maps/Rival_House/scripts.pory"
	walk_right
# 169 "data/maps/Rival_House/scripts.pory"
	walk_right
# 170 "data/maps/Rival_House/scripts.pory"
	face_up
	step_end

RIVALGIRL2::
# 176 "data/maps/Rival_House/scripts.pory"
	lockall
# 177 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Exlamation_Mark
# 178 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 179 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Greeting_Rival_Mom3
# 180 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 181 "data/maps/Rival_House/scripts.pory"
	msgbox RIVALGIRL_Text_0, MSGBOX_AUTOCLOSE
# 182 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Rival_Mom_Goes_Back3
# 183 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 184 "data/maps/Rival_House/scripts.pory"
	setvar VAR_CHECK_RIVAL, 2
# 185 "data/maps/Rival_House/scripts.pory"
	releaseall
	return


RIVALBOY2::
# 189 "data/maps/Rival_House/scripts.pory"
	lockall
# 190 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Exlamation_Mark
# 191 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 192 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Greeting_Rival_Mom3
# 193 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 194 "data/maps/Rival_House/scripts.pory"
	msgbox RIVALBOY_Text_0, MSGBOX_AUTOCLOSE
# 195 "data/maps/Rival_House/scripts.pory"
	applymovement 1, Rival_Mom_Goes_Back3
# 196 "data/maps/Rival_House/scripts.pory"
	waitmovement 1
# 197 "data/maps/Rival_House/scripts.pory"
	setvar VAR_CHECK_RIVAL, 2
# 198 "data/maps/Rival_House/scripts.pory"
	releaseall
	return


# 201 "data/maps/Rival_House/scripts.pory"
Exlamation_Mark:
# 202 "data/maps/Rival_House/scripts.pory"
	emote_exclamation_mark
	step_end

# 206 "data/maps/Rival_House/scripts.pory"
Greeting_Rival_Mom3:
# 207 "data/maps/Rival_House/scripts.pory"
	walk_left
# 207 "data/maps/Rival_House/scripts.pory"
	walk_left
# 207 "data/maps/Rival_House/scripts.pory"
	walk_left
# 207 "data/maps/Rival_House/scripts.pory"
	walk_left
# 207 "data/maps/Rival_House/scripts.pory"
	walk_left
# 207 "data/maps/Rival_House/scripts.pory"
	walk_left
# 207 "data/maps/Rival_House/scripts.pory"
	walk_left
# 207 "data/maps/Rival_House/scripts.pory"
	walk_left
# 208 "data/maps/Rival_House/scripts.pory"
	walk_down
# 208 "data/maps/Rival_House/scripts.pory"
	walk_down
# 208 "data/maps/Rival_House/scripts.pory"
	walk_down
# 208 "data/maps/Rival_House/scripts.pory"
	walk_down
	step_end

# 212 "data/maps/Rival_House/scripts.pory"
Rival_Mom_Goes_Back3:
# 213 "data/maps/Rival_House/scripts.pory"
	walk_up
# 213 "data/maps/Rival_House/scripts.pory"
	walk_up
# 213 "data/maps/Rival_House/scripts.pory"
	walk_up
# 213 "data/maps/Rival_House/scripts.pory"
	walk_up
# 214 "data/maps/Rival_House/scripts.pory"
	walk_right
# 214 "data/maps/Rival_House/scripts.pory"
	walk_right
# 214 "data/maps/Rival_House/scripts.pory"
	walk_right
# 214 "data/maps/Rival_House/scripts.pory"
	walk_right
# 214 "data/maps/Rival_House/scripts.pory"
	walk_right
# 214 "data/maps/Rival_House/scripts.pory"
	walk_right
# 214 "data/maps/Rival_House/scripts.pory"
	walk_right
# 214 "data/maps/Rival_House/scripts.pory"
	walk_right
# 215 "data/maps/Rival_House/scripts.pory"
	face_up
	step_end

RIVALGIRL_Text_0:
# 59 "data/maps/Rival_House/scripts.pory"
	.string "Luna already left the island, go quickly\n"
	.string "take the boat.{PLAYER} please watch\l"
	.string "on Luna , she is experienced i have no\l"
	.string "doubt about it , but you guys are going\l"
	.string "to a unvisited world , take care and\l"
	.string "both of you need to comeback!$"

RIVALBOY_Text_0:
# 72 "data/maps/Rival_House/scripts.pory"
	.string "Rival already left the island, go quickly\n"
	.string "take the boat.{PLAYER} please watch\l"
	.string "on Rival , he is experienced i have no\l"
	.string "doubt about it , but you guys are going\l"
	.string "to a unvisited world , take care and\l"
	.string "both of you need to comeback!$"
