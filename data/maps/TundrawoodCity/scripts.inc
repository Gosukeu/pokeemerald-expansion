# 1 "data/maps/TundrawoodCity/scripts.pory"

# 2 "data/maps/TundrawoodCity/scripts.pory"
TundrawoodCity_MapScripts::
# 3 "data/maps/TundrawoodCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, overwordlagain
# 4 "data/maps/TundrawoodCity/scripts.pory"
	.byte 0

overwordlagain::
# 10 "data/maps/TundrawoodCity/scripts.pory"
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
# 11 "data/maps/TundrawoodCity/scripts.pory"
	setflag FLAG_HIDE_APPRENTICE
# 12 "data/maps/TundrawoodCity/scripts.pory"
	setflag FLAG_HIDE_POKEMON_CENTER_2F_MYSTERY_GIFT_MAN
# 13 "data/maps/TundrawoodCity/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
# 14 "data/maps/TundrawoodCity/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
# 15 "data/maps/TundrawoodCity/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
# 16 "data/maps/TundrawoodCity/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_4
# 17 "data/maps/TundrawoodCity/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
# 18 "data/maps/TundrawoodCity/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
# 19 "data/maps/TundrawoodCity/scripts.pory"
	setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
	return


Triggersecretkey::
# 25 "data/maps/TundrawoodCity/scripts.pory"
	lockall
# 26 "data/maps/TundrawoodCity/scripts.pory"
	applymovement 9, maxietundra1
# 27 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement 9
# 28 "data/maps/TundrawoodCity/scripts.pory"
	checkitem ITEM_SECRET_KEY
# 29 "data/maps/TundrawoodCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Triggersecretkey_2
Triggersecretkey_1:
# 39 "data/maps/TundrawoodCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Triggersecretkey_4
	return

Triggersecretkey_2:
# 30 "data/maps/TundrawoodCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exlamationmovement
# 31 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 32 "data/maps/TundrawoodCity/scripts.pory"
	msgbox Triggersecretkey_Text_0, MSGBOX_AUTOCLOSE
# 33 "data/maps/TundrawoodCity/scripts.pory"
	applymovement 9, maxietundra2back
# 34 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement 9
# 35 "data/maps/TundrawoodCity/scripts.pory"
	removeobject 9
# 36 "data/maps/TundrawoodCity/scripts.pory"
	setvar VAR_UNUSED_0x40FE, 2
# 37 "data/maps/TundrawoodCity/scripts.pory"
	releaseall
	goto Triggersecretkey_1

Triggersecretkey_4:
# 40 "data/maps/TundrawoodCity/scripts.pory"
	lockall
# 41 "data/maps/TundrawoodCity/scripts.pory"
	msgbox Triggersecretkey_Text_1, MSGBOX_AUTOCLOSE
# 42 "data/maps/TundrawoodCity/scripts.pory"
	applymovement 9, maxietundra1back
# 43 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement 9
# 44 "data/maps/TundrawoodCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, wlakdownplayer
# 45 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 46 "data/maps/TundrawoodCity/scripts.pory"
	releaseall
	return


Triggersecretkey1::
# 55 "data/maps/TundrawoodCity/scripts.pory"
	lockall
# 56 "data/maps/TundrawoodCity/scripts.pory"
	applymovement 9, maxietundra2
# 57 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement 9
# 58 "data/maps/TundrawoodCity/scripts.pory"
	checkitem ITEM_SECRET_KEY
# 59 "data/maps/TundrawoodCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Triggersecretkey1_2
Triggersecretkey1_1:
# 69 "data/maps/TundrawoodCity/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Triggersecretkey1_4
	return

Triggersecretkey1_2:
# 60 "data/maps/TundrawoodCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exlamationmovement
# 61 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 62 "data/maps/TundrawoodCity/scripts.pory"
	msgbox Triggersecretkey_Text_0, MSGBOX_AUTOCLOSE
# 63 "data/maps/TundrawoodCity/scripts.pory"
	applymovement 9, maxietundra2back
# 64 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement 9
# 65 "data/maps/TundrawoodCity/scripts.pory"
	removeobject 9
# 66 "data/maps/TundrawoodCity/scripts.pory"
	setvar VAR_UNUSED_0x40FE, 2
# 67 "data/maps/TundrawoodCity/scripts.pory"
	releaseall
	goto Triggersecretkey1_1

Triggersecretkey1_4:
# 70 "data/maps/TundrawoodCity/scripts.pory"
	lockall
# 71 "data/maps/TundrawoodCity/scripts.pory"
	msgbox Triggersecretkey_Text_1, MSGBOX_AUTOCLOSE
# 72 "data/maps/TundrawoodCity/scripts.pory"
	applymovement 9, maxietundra1back2
# 73 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement 9
# 74 "data/maps/TundrawoodCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, wlakdownplayer
# 75 "data/maps/TundrawoodCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 76 "data/maps/TundrawoodCity/scripts.pory"
	releaseall
	return


# 86 "data/maps/TundrawoodCity/scripts.pory"
maxietundra2:
# 87 "data/maps/TundrawoodCity/scripts.pory"
	walk_left
# 88 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
# 88 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
# 88 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
# 88 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
# 88 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
	step_end

# 92 "data/maps/TundrawoodCity/scripts.pory"
exlamationmovement:
# 93 "data/maps/TundrawoodCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 98 "data/maps/TundrawoodCity/scripts.pory"
maxietundra2back:
# 99 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 99 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 99 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 99 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 99 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
	step_end

# 103 "data/maps/TundrawoodCity/scripts.pory"
wlakdownplayer:
# 104 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
	step_end

# 108 "data/maps/TundrawoodCity/scripts.pory"
maxietundra1back:
# 109 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 109 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 109 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 109 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 109 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
	step_end

# 113 "data/maps/TundrawoodCity/scripts.pory"
maxietundra1:
# 114 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
# 114 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
# 114 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
# 114 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
# 114 "data/maps/TundrawoodCity/scripts.pory"
	walk_down
	step_end

# 118 "data/maps/TundrawoodCity/scripts.pory"
maxietundra1back2:
# 119 "data/maps/TundrawoodCity/scripts.pory"
	walk_right
# 120 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 120 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 120 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 120 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
# 120 "data/maps/TundrawoodCity/scripts.pory"
	walk_up
	step_end

Triggersecretkey_Text_0:
# 32 "data/maps/TundrawoodCity/scripts.pory"
	.string "Excellent work! This key holds the\n"
	.string "future of our island. Stay ready I’ll\l"
	.string "have new orders for you soon!$"

Triggersecretkey_Text_1:
# 41 "data/maps/TundrawoodCity/scripts.pory"
	.string "I couldn't be clearer! We need this key,\n"
	.string "don't come back without it!$"
