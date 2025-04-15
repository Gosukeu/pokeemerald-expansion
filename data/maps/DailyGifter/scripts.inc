DailyGifter_MapScripts::
	.byte 0


GiveDailyItem::
# 9 "data/maps/DailyGifter/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x923, GiveDailyItem_1
# 15 "data/maps/DailyGifter/scripts.pory"
	msgbox GiveDailyItem_Text_1
# 16 "data/maps/DailyGifter/scripts.pory"
	releaseall
	return

GiveDailyItem_1:
# 10 "data/maps/DailyGifter/scripts.pory"
	msgbox GiveDailyItem_Text_0
# 11 "data/maps/DailyGifter/scripts.pory"
	giveitem ITEM_SITRUS_BERRY
# 12 "data/maps/DailyGifter/scripts.pory"
	setflag FLAG_UNUSED_0x923
# 13 "data/maps/DailyGifter/scripts.pory"
	releaseall
	return


GiveDailyItem_Text_0:
# 10 "data/maps/DailyGifter/scripts.pory"
	.string "Here is your daily item!$"

GiveDailyItem_Text_1:
# 15 "data/maps/DailyGifter/scripts.pory"
	.string "You've already claimed today's reward!$"
