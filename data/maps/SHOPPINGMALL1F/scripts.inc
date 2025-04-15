# 1 "data/maps/SHOPPINGMALL1F/scripts.pory"

# 2 "data/maps/SHOPPINGMALL1F/scripts.pory"
SHOPPINGMALL1F_MapScripts::
# 3 "data/maps/SHOPPINGMALL1F/scripts.pory"
	.byte 0

LITTLEGIRL::
# 8 "data/maps/SHOPPINGMALL1F/scripts.pory"
	compare VAR_DEOXYS_ROCK_STEP_COUNT, 0
	goto_if_eq LITTLEGIRL_2
# 19 "data/maps/SHOPPINGMALL1F/scripts.pory"
	compare VAR_DEOXYS_ROCK_STEP_COUNT, 1
	goto_if_eq LITTLEGIRL_4
	return

LITTLEGIRL_2:
# 9 "data/maps/SHOPPINGMALL1F/scripts.pory"
	lockall
# 10 "data/maps/SHOPPINGMALL1F/scripts.pory"
	faceplayer
# 11 "data/maps/SHOPPINGMALL1F/scripts.pory"
	msgbox LITTLEGIRL_Text_0, MSGBOX_AUTOCLOSE
# 12 "data/maps/SHOPPINGMALL1F/scripts.pory"
	giveitem ITEM_MAX_REVIVE
# 13 "data/maps/SHOPPINGMALL1F/scripts.pory"
	msgbox LITTLEGIRL_Text_1, MSGBOX_AUTOCLOSE
# 14 "data/maps/SHOPPINGMALL1F/scripts.pory"
	setvar VAR_DEOXYS_ROCK_STEP_COUNT, 1
# 15 "data/maps/SHOPPINGMALL1F/scripts.pory"
	releaseall
	end

LITTLEGIRL_4:
# 20 "data/maps/SHOPPINGMALL1F/scripts.pory"
	lockall
# 21 "data/maps/SHOPPINGMALL1F/scripts.pory"
	faceplayer
# 22 "data/maps/SHOPPINGMALL1F/scripts.pory"
	msgbox LITTLEGIRL_Text_2, MSGBOX_AUTOCLOSE
	return


COOKCHEF::
# 31 "data/maps/SHOPPINGMALL1F/scripts.pory"
	compare VAR_DEOXYS_ROCK_LEVEL, 0
	goto_if_eq COOKCHEF_2
COOKCHEF_1:
# 69 "data/maps/SHOPPINGMALL1F/scripts.pory"
	compare VAR_DEOXYS_ROCK_LEVEL, 1
	goto_if_eq COOKCHEF_4
	return

COOKCHEF_2:
# 32 "data/maps/SHOPPINGMALL1F/scripts.pory"
	lockall
# 33 "data/maps/SHOPPINGMALL1F/scripts.pory"
	faceplayer
# 34 "data/maps/SHOPPINGMALL1F/scripts.pory"
	msgbox COOKCHEF_Text_0, MSGBOX_YESNO
# 35 "data/maps/SHOPPINGMALL1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq COOKCHEF_8
COOKCHEF_7:
# 40 "data/maps/SHOPPINGMALL1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq COOKCHEF_10
	goto COOKCHEF_1

COOKCHEF_4:
# 70 "data/maps/SHOPPINGMALL1F/scripts.pory"
	lockall
# 71 "data/maps/SHOPPINGMALL1F/scripts.pory"
	faceplayer
# 72 "data/maps/SHOPPINGMALL1F/scripts.pory"
	msgbox COOKCHEF_Text_8, MSGBOX_AUTOCLOSE
# 73 "data/maps/SHOPPINGMALL1F/scripts.pory"
	releaseall
	return

COOKCHEF_8:
# 36 "data/maps/SHOPPINGMALL1F/scripts.pory"
	msgbox COOKCHEF_Text_1, MSGBOX_AUTOCLOSE
# 37 "data/maps/SHOPPINGMALL1F/scripts.pory"
	releaseall
	goto COOKCHEF_7

COOKCHEF_10:
# 41 "data/maps/SHOPPINGMALL1F/scripts.pory"
	msgbox COOKCHEF_Text_2, MSGBOX_AUTOCLOSE
# 42 "data/maps/SHOPPINGMALL1F/scripts.pory"
	checkitem ITEM_ORAN_BERRY, 3
# 43 "data/maps/SHOPPINGMALL1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq COOKCHEF_13
COOKCHEF_12:
# 47 "data/maps/SHOPPINGMALL1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq COOKCHEF_15
	goto COOKCHEF_1

COOKCHEF_13:
# 44 "data/maps/SHOPPINGMALL1F/scripts.pory"
	msgbox COOKCHEF_Text_3, MSGBOX_AUTOCLOSE
# 45 "data/maps/SHOPPINGMALL1F/scripts.pory"
	releaseall
	goto COOKCHEF_12

COOKCHEF_15:
# 48 "data/maps/SHOPPINGMALL1F/scripts.pory"
	checkitem ITEM_SITRUS_BERRY, 1
# 49 "data/maps/SHOPPINGMALL1F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq COOKCHEF_18
COOKCHEF_17:
# 53 "data/maps/SHOPPINGMALL1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq COOKCHEF_20
	goto COOKCHEF_1

COOKCHEF_18:
# 50 "data/maps/SHOPPINGMALL1F/scripts.pory"
	msgbox COOKCHEF_Text_3, MSGBOX_AUTOCLOSE
# 51 "data/maps/SHOPPINGMALL1F/scripts.pory"
	releaseall
	goto COOKCHEF_17

COOKCHEF_20:
# 54 "data/maps/SHOPPINGMALL1F/scripts.pory"
	msgbox COOKCHEF_Text_4, MSGBOX_AUTOCLOSE
# 55 "data/maps/SHOPPINGMALL1F/scripts.pory"
	msgbox COOKCHEF_Text_5, MSGBOX_AUTOCLOSE
# 56 "data/maps/SHOPPINGMALL1F/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 57 "data/maps/SHOPPINGMALL1F/scripts.pory"
	setvar VAR_DEOXYS_ROCK_LEVEL, 1
# 58 "data/maps/SHOPPINGMALL1F/scripts.pory"
	msgbox COOKCHEF_Text_6, MSGBOX_AUTOCLOSE
# 59 "data/maps/SHOPPINGMALL1F/scripts.pory"
	msgbox COOKCHEF_Text_7, MSGBOX_AUTOCLOSE
# 60 "data/maps/SHOPPINGMALL1F/scripts.pory"
	playfanfare SE_M_TELEPORT
# 61 "data/maps/SHOPPINGMALL1F/scripts.pory"
	removeobject 1
# 62 "data/maps/SHOPPINGMALL1F/scripts.pory"
	releaseall
	end


LITTLEGIRL_Text_0:
# 11 "data/maps/SHOPPINGMALL1F/scripts.pory"
	.string "Hello, i am happy that my mom brought me\n"
	.string "here!$"

LITTLEGIRL_Text_1:
# 13 "data/maps/SHOPPINGMALL1F/scripts.pory"
	.string "This item revives a fainted Pokémon\n"
	.string "with all it's HP$"

LITTLEGIRL_Text_2:
# 22 "data/maps/SHOPPINGMALL1F/scripts.pory"
	.string "Sorry i have only one :($"

COOKCHEF_Text_0:
# 34 "data/maps/SHOPPINGMALL1F/scripts.pory"
	.string "Hi, as you can see i am a chief, would you\n"
	.string "like me too cook something for you?$"

COOKCHEF_Text_1:
# 36 "data/maps/SHOPPINGMALL1F/scripts.pory"
	.string "No worries, feel free, to comback\n"
	.string "anytime$"

COOKCHEF_Text_2:
# 41 "data/maps/SHOPPINGMALL1F/scripts.pory"
	.string "Alrighty, ill need 3 orans berries, and 1\n"
	.string "sitrus berry!$"

COOKCHEF_Text_3:
# 44 "data/maps/SHOPPINGMALL1F/scripts.pory"
	.string "Sorry you dont have the required\n"
	.string "items...$"

COOKCHEF_Text_4:
# 54 "data/maps/SHOPPINGMALL1F/scripts.pory"
	.string "Chop! Chop! Chop! Chop!$"

COOKCHEF_Text_5:
# 55 "data/maps/SHOPPINGMALL1F/scripts.pory"
	.string "Done! Here$"

COOKCHEF_Text_6:
# 58 "data/maps/SHOPPINGMALL1F/scripts.pory"
	.string "Cyaaaaa$"

COOKCHEF_Text_7:
# 59 "data/maps/SHOPPINGMALL1F/scripts.pory"
	.string "Abra used teleport$"

COOKCHEF_Text_8:
# 72 "data/maps/SHOPPINGMALL1F/scripts.pory"
	.string "Come over, to my restaurant when you\n"
	.string "got time$"
