# 1 "data/maps/TundrawoodCity/scripts.pory"

# 2 "data/maps/TundrawoodCity/scripts.pory"
TundrawoodCity_MapScripts::
# 3 "data/maps/TundrawoodCity/scripts.pory"
	.byte 0

Triggersecretkey::
# 9 "data/maps/TundrawoodCity/scripts.pory"
	lockall
# 10 "data/maps/TundrawoodCity/scripts.pory"
	applymovement 9, maxietundra1
# 11 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement 9
# 12 "data/maps/TundrawoodCity/scripts.pory"
	checkitem ITEM_SECRET_KEY
# 13 "data/maps/TundrawoodCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Triggersecretkey_2
Triggersecretkey_1:
# 23 "data/maps/TundrawoodCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Triggersecretkey_4
	return

Triggersecretkey_2:
# 14 "data/maps/TundrawoodCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exlamationmovement
# 15 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 16 "data/maps/TundrawoodCity/scripts.pory"
	msgbox Triggersecretkey_Text_0, MSGBOX_AUTOCLOSE
# 17 "data/maps/TundrawoodCity/scripts.pory"
	applymovement 9, maxietundra2back
# 18 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement 9
# 19 "data/maps/TundrawoodCity/scripts.pory"
	removeobject 9
# 20 "data/maps/TundrawoodCity/scripts.pory"
	setvar VAR_UNUSED_0x40FE, 2
# 21 "data/maps/TundrawoodCity/scripts.pory"
	releaseall
	goto Triggersecretkey_1

Triggersecretkey_4:
# 24 "data/maps/TundrawoodCity/scripts.pory"
	lockall
# 25 "data/maps/TundrawoodCity/scripts.pory"
	msgbox Triggersecretkey_Text_1, MSGBOX_AUTOCLOSE
# 26 "data/maps/TundrawoodCity/scripts.pory"
	applymovement 9, maxietundra1back
# 27 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement 9
# 28 "data/maps/TundrawoodCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, wlakdownplayer
# 29 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 30 "data/maps/TundrawoodCity/scripts.pory"
	releaseall
	return


Triggersecretkey1::
# 39 "data/maps/TundrawoodCity/scripts.pory"
	lockall
# 40 "data/maps/TundrawoodCity/scripts.pory"
	applymovement 9, maxietundra2
# 41 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement 9
# 42 "data/maps/TundrawoodCity/scripts.pory"
	checkitem ITEM_SECRET_KEY
# 43 "data/maps/TundrawoodCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Triggersecretkey1_2
Triggersecretkey1_1:
# 53 "data/maps/TundrawoodCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Triggersecretkey1_4
	return

Triggersecretkey1_2:
# 44 "data/maps/TundrawoodCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exlamationmovement
# 45 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 46 "data/maps/TundrawoodCity/scripts.pory"
	msgbox Triggersecretkey_Text_0, MSGBOX_AUTOCLOSE
# 47 "data/maps/TundrawoodCity/scripts.pory"
	applymovement 9, maxietundra2back
# 48 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement 9
# 49 "data/maps/TundrawoodCity/scripts.pory"
	removeobject 9
# 50 "data/maps/TundrawoodCity/scripts.pory"
	setvar VAR_UNUSED_0x40FE, 2
# 51 "data/maps/TundrawoodCity/scripts.pory"
	releaseall
	goto Triggersecretkey1_1

Triggersecretkey1_4:
# 54 "data/maps/TundrawoodCity/scripts.pory"
	lockall
# 55 "data/maps/TundrawoodCity/scripts.pory"
	msgbox Triggersecretkey_Text_1, MSGBOX_AUTOCLOSE
# 56 "data/maps/TundrawoodCity/scripts.pory"
	applymovement 9, maxietundra1back2
# 57 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement 9
# 58 "data/maps/TundrawoodCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, wlakdownplayer
# 59 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 60 "data/maps/TundrawoodCity/scripts.pory"
	releaseall
	return


# 70 "data/maps/TundrawoodCity/scripts.pory"
maxietundra2:
# 71 "data/maps/TundrawoodCity/scripts.pory"
	walk_left
# 72 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
# 72 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
# 72 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
# 72 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
# 72 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
	step_end

# 76 "data/maps/TundrawoodCity/scripts.pory"
exlamationmovement:
# 77 "data/maps/TundrawoodCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 82 "data/maps/TundrawoodCity/scripts.pory"
maxietundra2back:
# 83 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 83 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 83 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 83 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 83 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
	step_end

# 87 "data/maps/TundrawoodCity/scripts.pory"
wlakdownplayer:
# 88 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
	step_end

# 92 "data/maps/TundrawoodCity/scripts.pory"
maxietundra1back:
# 93 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 93 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 93 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 93 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 93 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
	step_end

# 97 "data/maps/TundrawoodCity/scripts.pory"
maxietundra1:
# 98 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
# 98 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
# 98 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
# 98 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
# 98 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
	step_end

# 102 "data/maps/TundrawoodCity/scripts.pory"
maxietundra1back2:
# 103 "data/maps/TundrawoodCity/scripts.pory"
	walk_right
# 104 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 104 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 104 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 104 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 104 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
	step_end

Triggersecretkey_Text_0:
# 16 "data/maps/TundrawoodCity/scripts.pory"
	.string "Excellent work! This key holds the\n"
	.string "future of our island. Stay ready I’ll\l"
	.string "have new orders for you soon!$"

Triggersecretkey_Text_1:
# 25 "data/maps/TundrawoodCity/scripts.pory"
	.string "I couldn't be clearer! We need this key,\n"
	.string "don't come back without it!$"
