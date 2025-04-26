# 1 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"

# 2 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
Aegisport_TRADE_HISUAN_FORM_MapScripts::
# 3 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	.byte 0

LINKINCORDGIFTER::
# 10 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	compare VAR_LINKING_CORD, 0
	goto_if_eq LINKINCORDGIFTER_2
LINKINCORDGIFTER_1:
# 19 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	compare VAR_LINKING_CORD, 1
	goto_if_eq LINKINCORDGIFTER_4
	return

LINKINCORDGIFTER_2:
# 11 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	lockall
# 12 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	faceplayer
# 13 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	msgbox LINKINCORDGIFTER_Text_0
# 14 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	giveitem ITEM_LINKING_CORD
# 15 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	setflag FLAG_LINKINGCORD
# 16 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	setvar VAR_LINKING_CORD, 1
# 17 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	releaseall
	goto LINKINCORDGIFTER_1

LINKINCORDGIFTER_4:
# 20 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	goto_if_unset FLAG_LINKINGCORD, LINKINCORDGIFTER_6
# 26 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	msgbox LINKINCORDGIFTER_Text_2
# 27 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	releaseall
	return

LINKINCORDGIFTER_6:
# 21 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	msgbox LINKINCORDGIFTER_Text_1
# 22 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	giveitem ITEM_SITRUS_BERRY
# 23 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	setflag FLAG_LINKINGCORD
# 24 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	releaseall
	return


LINKINCORDGIFTER_Text_0:
# 13 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	.string "Sup, do you know how boring trade\n"
	.string "evolutions are?Well i got the solution\l"
	.string "here, i got the linking cord, with that\l"
	.string "item you can instantly evolve a\l"
	.string "Pokémon.I give them daily!$"

LINKINCORDGIFTER_Text_1:
# 21 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	.string "Here is your daily item!$"

LINKINCORDGIFTER_Text_2:
# 26 "data/maps/Aegisport_TRADE_HISUAN_FORM/scripts.pory"
	.string "You've already claimed today's reward!$"
