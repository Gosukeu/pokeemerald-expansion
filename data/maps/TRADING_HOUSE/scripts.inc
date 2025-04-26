# 1 "data/maps/TRADING_HOUSE/scripts.pory"

# 2 "data/maps/TRADING_HOUSE/scripts.pory"
TRADING_HOUSE_MapScripts::
# 3 "data/maps/TRADING_HOUSE/scripts.pory"
	.byte 0

OLDTRADER::
# 8 "data/maps/TRADING_HOUSE/scripts.pory"
	compare VAR_OLD_TRADER, 0
	goto_if_eq OLDTRADER_1
# 24 "data/maps/TRADING_HOUSE/scripts.pory"
	lockall
# 25 "data/maps/TRADING_HOUSE/scripts.pory"
	faceplayer
# 26 "data/maps/TRADING_HOUSE/scripts.pory"
	msgbox OLDTRADER_Text_2
# 27 "data/maps/TRADING_HOUSE/scripts.pory"
	releaseall
	return

OLDTRADER_1:
# 9 "data/maps/TRADING_HOUSE/scripts.pory"
	lockall
# 10 "data/maps/TRADING_HOUSE/scripts.pory"
	faceplayer
# 11 "data/maps/TRADING_HOUSE/scripts.pory"
	msgbox OLDTRADER_Text_0, MSGBOX_AUTOCLOSE
# 12 "data/maps/TRADING_HOUSE/scripts.pory"
	givemon SPECIES_HOOTHOOT, 10, ITEM_SOOTHE_BELL, ITEM_HEAL_BALL, NATURE_CALM
# 13 "data/maps/TRADING_HOUSE/scripts.pory"
	msgbox OLDTRADER_Text_1
# 14 "data/maps/TRADING_HOUSE/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/TRADING_HOUSE/scripts.pory"
	call NicknamePartyMon
# 16 "data/maps/TRADING_HOUSE/scripts.pory"
	setvar VAR_OLD_TRADER, 1
# 17 "data/maps/TRADING_HOUSE/scripts.pory"
	releaseall
	return


OLDTRADER_Text_0:
# 11 "data/maps/TRADING_HOUSE/scripts.pory"
	.string "Ahh… You’re a true Pokémon Trainer, I\n"
	.string "can see it. This Pokémon has been by my\l"
	.string "side for many years, but my time’s\l"
	.string "running short. I want it to go to\l"
	.string "someone who’ll cherish it. Please, take\l"
	.string "it… and give it a new adventure.$"

OLDTRADER_Text_1:
# 13 "data/maps/TRADING_HOUSE/scripts.pory"
	.string "Received Hoothoot!$"

OLDTRADER_Text_2:
# 26 "data/maps/TRADING_HOUSE/scripts.pory"
	.string "How$"
