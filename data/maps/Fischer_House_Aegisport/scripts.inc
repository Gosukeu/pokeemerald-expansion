Fischer_House_Aegisport_MapScripts::
	.byte 0


FischerMan_Aegisport::
# 6 "data/maps/Fischer_House_Aegisport/scripts.pory"
	compare VAR_FISCHER_MAN, 0
	goto_if_eq FischerMan_Aegisport_2
FischerMan_Aegisport_1:
# 30 "data/maps/Fischer_House_Aegisport/scripts.pory"
	compare VAR_FISCHER_MAN, 1
	goto_if_eq FischerMan_Aegisport_4
	return

FischerMan_Aegisport_2:
# 7 "data/maps/Fischer_House_Aegisport/scripts.pory"
	lockall
# 8 "data/maps/Fischer_House_Aegisport/scripts.pory"
	faceplayer
# 9 "data/maps/Fischer_House_Aegisport/scripts.pory"
	msgbox FischerMan_Aegisport_Text_0, MSGBOX_YESNO
# 11 "data/maps/Fischer_House_Aegisport/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq FischerMan_Aegisport_6
# 22 "data/maps/Fischer_House_Aegisport/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq FischerMan_Aegisport_7
	goto FischerMan_Aegisport_1

FischerMan_Aegisport_4:
# 31 "data/maps/Fischer_House_Aegisport/scripts.pory"
	lockall
# 32 "data/maps/Fischer_House_Aegisport/scripts.pory"
	msgbox FischerMan_Aegisport_Text_4, MSGBOX_AUTOCLOSE
	return

FischerMan_Aegisport_6:
# 12 "data/maps/Fischer_House_Aegisport/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 13 "data/maps/Fischer_House_Aegisport/scripts.pory"
	giveitem ITEM_OLD_ROD
# 14 "data/maps/Fischer_House_Aegisport/scripts.pory"
	msgbox FischerMan_Aegisport_Text_1
# 15 "data/maps/Fischer_House_Aegisport/scripts.pory"
	msgbox FischerMan_Aegisport_Text_2
# 16 "data/maps/Fischer_House_Aegisport/scripts.pory"
	setvar VAR_FISCHER_MAN, 1
# 17 "data/maps/Fischer_House_Aegisport/scripts.pory"
	releaseall
	return

FischerMan_Aegisport_7:
# 23 "data/maps/Fischer_House_Aegisport/scripts.pory"
	msgbox FischerMan_Aegisport_Text_3, MSGBOX_AUTOCLOSE
# 24 "data/maps/Fischer_House_Aegisport/scripts.pory"
	releaseall
	goto FischerMan_Aegisport_1


FischerMan_Aegisport_Text_0:
# 9 "data/maps/Fischer_House_Aegisport/scripts.pory"
	.string "Hey there, trainer! Do you want a\n"
	.string "fishing rod?$"

FischerMan_Aegisport_Text_1:
# 14 "data/maps/Fischer_House_Aegisport/scripts.pory"
	.string "Use it near water to fish.And you will\n"
	.string "encounter mostly water types!$"

FischerMan_Aegisport_Text_2:
# 15 "data/maps/Fischer_House_Aegisport/scripts.pory"
	.string "If you manage to earn the Water Badge,\n"
	.string "come back and talk to me. I just might\l"
	.string "hand you over my best fishing rod!$"

FischerMan_Aegisport_Text_3:
# 23 "data/maps/Fischer_House_Aegisport/scripts.pory"
	.string "Oh, I see... Maybe another time.$"

FischerMan_Aegisport_Text_4:
# 32 "data/maps/Fischer_House_Aegisport/scripts.pory"
	.string "Hey there trainer! If you manage to\n"
	.string "earn the Water Badge, come back and\l"
	.string "talk to me!. I just might hand you over\l"
	.string "my best fishing rod!$"
