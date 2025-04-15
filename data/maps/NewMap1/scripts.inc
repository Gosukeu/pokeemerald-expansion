# 1 "data/maps/NewMap1/scripts.pory"

# 2 "data/maps/NewMap1/scripts.pory"
NewMap1_MapScripts::
# 3 "data/maps/NewMap1/scripts.pory"
	.byte 0

gymadvisor::
# 11 "data/maps/NewMap1/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, gymadvisor_1
# 19 "data/maps/NewMap1/scripts.pory"
	lockall
# 20 "data/maps/NewMap1/scripts.pory"
	faceplayer
# 21 "data/maps/NewMap1/scripts.pory"
	msgbox gymadvisor_Text_1, MSGBOX_AUTOCLOSE
# 22 "data/maps/NewMap1/scripts.pory"
	releaseall
	return

gymadvisor_1:
# 12 "data/maps/NewMap1/scripts.pory"
	lockall
# 13 "data/maps/NewMap1/scripts.pory"
	faceplayer
# 14 "data/maps/NewMap1/scripts.pory"
	msgbox gymadvisor_Text_0, MSGBOX_AUTOCLOSE
# 15 "data/maps/NewMap1/scripts.pory"
	releaseall
	return


JUANBATTLE::
# 28 "data/maps/NewMap1/scripts.pory"
	lockall
# 29 "data/maps/NewMap1/scripts.pory"
	faceplayer
# 30 "data/maps/NewMap1/scripts.pory"
	trainerbattle_single TRAINER_FIRST_GYM_BADGE_WATER, JUANINTRO, JUANOUTRO, GYMREWARDJUAN
	end


GYMREWARDJUAN::
# 37 "data/maps/NewMap1/scripts.pory"
	lockall
# 38 "data/maps/NewMap1/scripts.pory"
	msgbox GYMREWARDJUAN_Text_0, MSGBOX_AUTOCLOSE
# 39 "data/maps/NewMap1/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 40 "data/maps/NewMap1/scripts.pory"
	setflag FLAG_BADGE01_GET
# 41 "data/maps/NewMap1/scripts.pory"
	msgbox GYMREWARDJUAN_Text_1, MSGBOX_AUTOCLOSE
# 42 "data/maps/NewMap1/scripts.pory"
	giveitem ITEM_HM_SURF
# 43 "data/maps/NewMap1/scripts.pory"
	releaseall
	return


FIRSTBATTLE::
# 58 "data/maps/NewMap1/scripts.pory"
	trainerbattle_single F1_WATER_GYM_TRAINER, F1_WATER_GYM_TRAINER_INTRO, F1_WATER_GYM_TRAINER_OUTRO
	end


SECONDBATTLE::
# 63 "data/maps/NewMap1/scripts.pory"
	trainerbattle_single F1_WATER_GYM_TRAINER1, F1_WATER_GYM_TRAINER_INTRO1, F1_WATER_GYM_TRAINER_OUTRO1
	end


THIRDBATTLE::
# 76 "data/maps/NewMap1/scripts.pory"
	trainerbattle_single F1_WATER_GYM_TRAINER2, F1_WATER_GYM_TRAINER_INTRO2, F1_WATER_GYM_TRAINER_OUTRO2
	end


FORTHBATTLE::
# 89 "data/maps/NewMap1/scripts.pory"
	trainerbattle_single F1_WATER_GYM_TRAINER3, F1_WATER_GYM_TRAINER_INTRO3, F1_WATER_GYM_TRAINER_OUTRO3
	end


fifthBATTLE::
# 104 "data/maps/NewMap1/scripts.pory"
	trainerbattle_single F1_WATER_GYM_TRAINER4, F1_WATER_GYM_TRAINER_INTRO4, F1_WATER_GYM_TRAINER_OUTRO4
	end


gymadvisor_Text_0:
# 14 "data/maps/NewMap1/scripts.pory"
	.string "Yow! You've even beaten our Gym Leader,\n"
	.string "the first true test for any trainer!\l"
	.string "Okay! Check out your Trainer Card. With\l"
	.string "your first Badge in hand, you're on your\l"
	.string "way to becoming a true Champion!$"

gymadvisor_Text_1:
# 21 "data/maps/NewMap1/scripts.pory"
	.string "Yo! How's it going, Champion-bound\n"
	.string "{PLAYER}? Sootopolis's Gym Leader\l"
	.string "Juan is a master of Water-type\l"
	.string "Pokémon. To reach Juan, an icy floor will\l"
	.string "hamper your progress. Listen, I'm sorry,\l"
	.string "but that's all the advice I have for\l"
	.string "you. The rest of the way, you have to go\l"
	.string "for it yourself!$"

GYMREWARDJUAN_Text_0:
# 38 "data/maps/NewMap1/scripts.pory"
	.string "{PLAYER} received the RAIN BADGE\n"
	.string "from JUAN$"

GYMREWARDJUAN_Text_1:
# 41 "data/maps/NewMap1/scripts.pory"
	.string "Having the Water Badge ensures that\n"
	.string "your Pokémon will obey you up to level\l"
	.string "27. It also grants you the ability to\l"
	.string "use the HM move Surf to cross large\l"
	.string "bodies of water. And, so you never\l"
	.string "forget the battle we shared, take this…$"

JUANINTRO::
# 46 "data/maps/NewMap1/scripts.pory"
	.string "Ah, I see you've made your way through\n"
	.string "the waves, {PLAYER}! You've come to\l"
	.string "test your skills against me, the master\l"
	.string "of Water type Pokémon. I hope you're\l"
	.string "ready, because in this gym, the tides\l"
	.string "are always in motion. Let's see if you\l"
	.string "have what it takes to ride the waves to\l"
	.string "victory!$"

JUANOUTRO::
# 51 "data/maps/NewMap1/scripts.pory"
	.string "You've proven yourself to be a worthy\n"
	.string "challenger! Your command of Water type\l"
	.string "Pokémon is impressive, but it's your\l"
	.string "heart and spirit that truly shine. With\l"
	.string "this victory, you have earned the Water\l"
	.string "Badge! Keep surfing toward your\l"
	.string "dreams!$"

F1_WATER_GYM_TRAINER_INTRO1::
# 67 "data/maps/NewMap1/scripts.pory"
	.string "The water here is deep, but my skills are\n"
	.string "deeper! Let’s see if you can swim with\l"
	.string "the best!$"

F1_WATER_GYM_TRAINER_OUTRO1::
# 71 "data/maps/NewMap1/scripts.pory"
	.string "Looks like I was the one who got washed\n"
	.string "away… You’ve got real potential!$"

F1_WATER_GYM_TRAINER_INTRO2::
# 80 "data/maps/NewMap1/scripts.pory"
	.string "Only those who can ride the tide stand\n"
	.string "a chance in this Gym. Let’s see if you’re\l"
	.string "one of them!$"

F1_WATER_GYM_TRAINER_OUTRO2::
# 84 "data/maps/NewMap1/scripts.pory"
	.string "You’re like a raging current… too strong\n"
	.string "to stop!$"

F1_WATER_GYM_TRAINER_INTRO3::
# 94 "data/maps/NewMap1/scripts.pory"
	.string "Water flows, surges, and crashes! Can\n"
	.string "you withstand the force of my Pokémon?$"

F1_WATER_GYM_TRAINER_OUTRO3::
# 98 "data/maps/NewMap1/scripts.pory"
	.string "I sank faster than I expected… You’re\n"
	.string "tougher than you look!$"

F1_WATER_GYM_TRAINER_INTRO4::
# 109 "data/maps/NewMap1/scripts.pory"
	.string "Battling in this Gym is like sailing in a\n"
	.string "storm-only the strongest make it\l"
	.string "through!$"

F1_WATER_GYM_TRAINER_OUTRO4::
# 114 "data/maps/NewMap1/scripts.pory"
	.string "The tide was against me this time, but\n"
	.string "I’ll keep training!$"

F1_WATER_GYM_TRAINER_INTRO::
# 120 "data/maps/NewMap1/scripts.pory"
	.string "So, you think you can handle the waves\n"
	.string "of this Gym? Let’s see if you can stay\l"
	.string "afloat in battle!$"

F1_WATER_GYM_TRAINER_OUTRO::
# 125 "data/maps/NewMap1/scripts.pory"
	.string "Whoa… You really made a splash! Guess I\n"
	.string "need to train harder.$"
