# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 3 "data/maps/Route1/scripts.pory"
	.byte 0

Trainer1_Route_1::
# 8 "data/maps/Route1/scripts.pory"
	trainerbattle_single Route1TrainerKid, intro_text, lose_text, CLEARFLAGKID
# 9 "data/maps/Route1/scripts.pory"
	msgbox Route1Trainer_Postbattle, MSGBOX_DEFAULT
	end


CLEARFLAGKID::
# 14 "data/maps/Route1/scripts.pory"
	clearflag FLAG_LOST_KID
# 15 "data/maps/Route1/scripts.pory"
	setvar VAR_LOST_KID, 1
	return


Trainer2_Route_1::
# 18 "data/maps/Route1/scripts.pory"
	trainerbattle_single Route2TrainerKid, intro_text2, lose_text2
# 19 "data/maps/Route1/scripts.pory"
	msgbox Route1Trainer2_Postbattle, MSGBOX_DEFAULT
	end


Trainer3_Route_1::
# 25 "data/maps/Route1/scripts.pory"
	trainerbattle_single Route3TrainerKid, intro_text3, lose_text3
# 26 "data/maps/Route1/scripts.pory"
	msgbox Trainer3_Route_1_Text_0, MSGBOX_AUTOCLOSE
	end


RivalBattleTrigger::
# 69 "data/maps/Route1/scripts.pory"
	compare VAR_1FST_BATTLE_RIVAL, 0
	goto_if_eq RivalBattleTrigger_1
	return

RivalBattleTrigger_1:
# 70 "data/maps/Route1/scripts.pory"
	checkplayergender
# 71 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, MayBattle
# 72 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BrendanBattle
	return


RivalBattleTrigger1::
# 76 "data/maps/Route1/scripts.pory"
	compare VAR_1FST_BATTLE_RIVAL, 0
	goto_if_eq RivalBattleTrigger1_1
	return

RivalBattleTrigger1_1:
# 77 "data/maps/Route1/scripts.pory"
	checkplayergender
# 78 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, MayBattle1
# 79 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BrendanBattle1
	return


RivalBattleTrigger2::
# 83 "data/maps/Route1/scripts.pory"
	compare VAR_1FST_BATTLE_RIVAL, 0
	goto_if_eq RivalBattleTrigger2_1
	return

RivalBattleTrigger2_1:
# 84 "data/maps/Route1/scripts.pory"
	checkplayergender
# 85 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, MayBattle2
# 86 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BrendanBattle2
	return


RivalBattleTrigger3::
# 91 "data/maps/Route1/scripts.pory"
	compare VAR_1FST_BATTLE_RIVAL, 0
	goto_if_eq RivalBattleTrigger3_1
	return

RivalBattleTrigger3_1:
# 92 "data/maps/Route1/scripts.pory"
	checkplayergender
# 93 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, MayBattle3
# 94 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BrendanBattle3
	return


RivalBattleTrigger4::
# 98 "data/maps/Route1/scripts.pory"
	compare VAR_1FST_BATTLE_RIVAL, 0
	goto_if_eq RivalBattleTrigger4_1
	return

RivalBattleTrigger4_1:
# 99 "data/maps/Route1/scripts.pory"
	checkplayergender
# 100 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, MayBattle4
# 101 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, BrendanBattle4
	return


MayBattle::
# 108 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq MayBattle_2
MayBattle_1:
# 117 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq MayBattle_5
MayBattle_4:
# 126 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq MayBattle_7
	return

MayBattle_2:
# 109 "data/maps/Route1/scripts.pory"
	lockall
# 110 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 111 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 112 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 113 "data/maps/Route1/scripts.pory"
	applymovement 6, rivalgoesdown
# 114 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 115 "data/maps/Route1/scripts.pory"
	call MAY_FUECOCO1
	goto MayBattle_1

MayBattle_5:
# 118 "data/maps/Route1/scripts.pory"
	lockall
# 119 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 120 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 121 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 122 "data/maps/Route1/scripts.pory"
	applymovement 6, rivalgoesdown
# 123 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 124 "data/maps/Route1/scripts.pory"
	call MAY_TURTWIG1
	goto MayBattle_4

MayBattle_7:
# 127 "data/maps/Route1/scripts.pory"
	lockall
# 128 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 129 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 130 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 131 "data/maps/Route1/scripts.pory"
	applymovement 6, rivalgoesdown
# 132 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 133 "data/maps/Route1/scripts.pory"
	call MAY_OSHAWOTT1
	return


# 137 "data/maps/Route1/scripts.pory"
rivalgoesdown:
# 138 "data/maps/Route1/scripts.pory"
	walk_down
# 138 "data/maps/Route1/scripts.pory"
	walk_down
# 138 "data/maps/Route1/scripts.pory"
	walk_down
# 138 "data/maps/Route1/scripts.pory"
	walk_down
# 138 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 142 "data/maps/Route1/scripts.pory"
rivalgoesdown1:
# 143 "data/maps/Route1/scripts.pory"
	walk_down
# 144 "data/maps/Route1/scripts.pory"
	walk_right
# 145 "data/maps/Route1/scripts.pory"
	walk_down
# 145 "data/maps/Route1/scripts.pory"
	walk_down
# 145 "data/maps/Route1/scripts.pory"
	walk_down
# 145 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

MayBattle1::
# 150 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq MayBattle1_2
MayBattle1_1:
# 159 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq MayBattle1_5
MayBattle1_4:
# 168 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq MayBattle1_7
	return

MayBattle1_2:
# 151 "data/maps/Route1/scripts.pory"
	lockall
# 152 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 153 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 154 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 155 "data/maps/Route1/scripts.pory"
	applymovement 6, rivalgoesdown1
# 156 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 157 "data/maps/Route1/scripts.pory"
	call MAY_FUECOCO1
	goto MayBattle1_1

MayBattle1_5:
# 160 "data/maps/Route1/scripts.pory"
	lockall
# 161 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 162 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 163 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 164 "data/maps/Route1/scripts.pory"
	applymovement 6, rivalgoesdown1
# 165 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 166 "data/maps/Route1/scripts.pory"
	call MAY_TURTWIG1
	goto MayBattle1_4

MayBattle1_7:
# 169 "data/maps/Route1/scripts.pory"
	lockall
# 170 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 171 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 172 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 173 "data/maps/Route1/scripts.pory"
	applymovement 6, rivalgoesdown1
# 174 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 175 "data/maps/Route1/scripts.pory"
	call MAY_OSHAWOTT1
	return


# 180 "data/maps/Route1/scripts.pory"
rivalgoesdown2:
# 181 "data/maps/Route1/scripts.pory"
	walk_down
# 181 "data/maps/Route1/scripts.pory"
	walk_down
# 182 "data/maps/Route1/scripts.pory"
	walk_right
# 182 "data/maps/Route1/scripts.pory"
	walk_right
# 183 "data/maps/Route1/scripts.pory"
	walk_down
# 183 "data/maps/Route1/scripts.pory"
	walk_down
# 183 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

MayBattle2::
# 187 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq MayBattle2_2
MayBattle2_1:
# 196 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq MayBattle2_5
MayBattle2_4:
# 205 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq MayBattle2_7
	return

MayBattle2_2:
# 188 "data/maps/Route1/scripts.pory"
	lockall
# 189 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 190 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 191 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 192 "data/maps/Route1/scripts.pory"
	applymovement 6, rivalgoesdown2
# 193 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 194 "data/maps/Route1/scripts.pory"
	call MAY_FUECOCO2
	goto MayBattle2_1

MayBattle2_5:
# 197 "data/maps/Route1/scripts.pory"
	lockall
# 198 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 199 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 200 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 201 "data/maps/Route1/scripts.pory"
	applymovement 6, rivalgoesdown2
# 202 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 203 "data/maps/Route1/scripts.pory"
	call MAY_TURTWIG2
	goto MayBattle2_4

MayBattle2_7:
# 206 "data/maps/Route1/scripts.pory"
	lockall
# 207 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 208 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 209 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 210 "data/maps/Route1/scripts.pory"
	applymovement 6, rivalgoesdown2
# 211 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 212 "data/maps/Route1/scripts.pory"
	call MAY_OSHAWOTT2
	return


# 217 "data/maps/Route1/scripts.pory"
rivalgoesdown3:
# 218 "data/maps/Route1/scripts.pory"
	walk_down
# 218 "data/maps/Route1/scripts.pory"
	walk_down
# 219 "data/maps/Route1/scripts.pory"
	walk_right
# 219 "data/maps/Route1/scripts.pory"
	walk_right
# 219 "data/maps/Route1/scripts.pory"
	walk_right
# 220 "data/maps/Route1/scripts.pory"
	walk_down
# 220 "data/maps/Route1/scripts.pory"
	walk_down
# 220 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 222 "data/maps/Route1/scripts.pory"
rivalgoesdown4:
# 223 "data/maps/Route1/scripts.pory"
	walk_down
# 223 "data/maps/Route1/scripts.pory"
	walk_down
# 224 "data/maps/Route1/scripts.pory"
	walk_right
# 224 "data/maps/Route1/scripts.pory"
	walk_right
# 224 "data/maps/Route1/scripts.pory"
	walk_right
# 224 "data/maps/Route1/scripts.pory"
	walk_right
# 225 "data/maps/Route1/scripts.pory"
	walk_down
# 225 "data/maps/Route1/scripts.pory"
	walk_down
# 225 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

MayBattle3::
# 228 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq MayBattle3_2
MayBattle3_1:
# 237 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq MayBattle3_5
MayBattle3_4:
# 246 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq MayBattle3_7
	return

MayBattle3_2:
# 229 "data/maps/Route1/scripts.pory"
	lockall
# 230 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 231 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 232 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 233 "data/maps/Route1/scripts.pory"
	applymovement 6, rivalgoesdown3
# 234 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 235 "data/maps/Route1/scripts.pory"
	call MAY_FUECOCO3
	goto MayBattle3_1

MayBattle3_5:
# 238 "data/maps/Route1/scripts.pory"
	lockall
# 239 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 240 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 241 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 242 "data/maps/Route1/scripts.pory"
	applymovement 6, rivalgoesdown3
# 243 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 244 "data/maps/Route1/scripts.pory"
	call MAY_TURTWIG3
	goto MayBattle3_4

MayBattle3_7:
# 247 "data/maps/Route1/scripts.pory"
	lockall
# 248 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 249 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 250 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 251 "data/maps/Route1/scripts.pory"
	applymovement 6, rivalgoesdown3
# 252 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 253 "data/maps/Route1/scripts.pory"
	call MAY_OSHAWOTT3
	return


MayBattle4::
# 258 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq MayBattle4_2
MayBattle4_1:
# 267 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq MayBattle4_5
MayBattle4_4:
# 276 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq MayBattle4_7
	return

MayBattle4_2:
# 259 "data/maps/Route1/scripts.pory"
	lockall
# 260 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 261 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 262 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 263 "data/maps/Route1/scripts.pory"
	applymovement 6, rivalgoesdown4
# 264 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 265 "data/maps/Route1/scripts.pory"
	call MAY_FUECOCO4
	goto MayBattle4_1

MayBattle4_5:
# 268 "data/maps/Route1/scripts.pory"
	lockall
# 269 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 270 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 271 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 272 "data/maps/Route1/scripts.pory"
	applymovement 6, rivalgoesdown4
# 273 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 274 "data/maps/Route1/scripts.pory"
	call MAY_TURTWIG4
	goto MayBattle4_4

MayBattle4_7:
# 277 "data/maps/Route1/scripts.pory"
	lockall
# 278 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 279 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 280 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 281 "data/maps/Route1/scripts.pory"
	applymovement 6, rivalgoesdown4
# 282 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 283 "data/maps/Route1/scripts.pory"
	call MAY_OSHAWOTT4
	return


# 287 "data/maps/Route1/scripts.pory"
BRENDANGOESDOWN:
# 288 "data/maps/Route1/scripts.pory"
	walk_down
# 288 "data/maps/Route1/scripts.pory"
	walk_down
# 289 "data/maps/Route1/scripts.pory"
	walk_right
# 290 "data/maps/Route1/scripts.pory"
	walk_down
# 290 "data/maps/Route1/scripts.pory"
	walk_down
# 290 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

BrendanBattle::
# 295 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq BrendanBattle_2
BrendanBattle_1:
# 304 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq BrendanBattle_5
BrendanBattle_4:
# 313 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq BrendanBattle_7
	return

BrendanBattle_2:
# 296 "data/maps/Route1/scripts.pory"
	lockall
# 297 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 298 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 299 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 300 "data/maps/Route1/scripts.pory"
	applymovement 7, BRENDANGOESDOWN
# 301 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 302 "data/maps/Route1/scripts.pory"
	call BRENDAN_FUECOCO1
	goto BrendanBattle_1

BrendanBattle_5:
# 305 "data/maps/Route1/scripts.pory"
	lockall
# 306 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 307 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 308 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 309 "data/maps/Route1/scripts.pory"
	applymovement 7, BRENDANGOESDOWN
# 310 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 311 "data/maps/Route1/scripts.pory"
	call BRENDAN_TURTWIG1
	goto BrendanBattle_4

BrendanBattle_7:
# 314 "data/maps/Route1/scripts.pory"
	lockall
# 315 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 316 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 317 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 318 "data/maps/Route1/scripts.pory"
	applymovement 7, BRENDANGOESDOWN
# 319 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 320 "data/maps/Route1/scripts.pory"
	call BRENAND_OSHAWOTT1
	return


# 324 "data/maps/Route1/scripts.pory"
BRENDANGOESDOWN1:
# 325 "data/maps/Route1/scripts.pory"
	walk_down
# 325 "data/maps/Route1/scripts.pory"
	walk_down
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 327 "data/maps/Route1/scripts.pory"
	walk_down
# 327 "data/maps/Route1/scripts.pory"
	walk_down
# 327 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

BrendanBattle1::
# 331 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq BrendanBattle1_2
BrendanBattle1_1:
# 340 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq BrendanBattle1_5
BrendanBattle1_4:
# 349 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq BrendanBattle1_7
	return

BrendanBattle1_2:
# 332 "data/maps/Route1/scripts.pory"
	lockall
# 333 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 334 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 335 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 336 "data/maps/Route1/scripts.pory"
	applymovement 7, BRENDANGOESDOWN1
# 337 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 338 "data/maps/Route1/scripts.pory"
	call BRENDAN_FUECOCO1
	goto BrendanBattle1_1

BrendanBattle1_5:
# 341 "data/maps/Route1/scripts.pory"
	lockall
# 342 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 343 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 344 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 345 "data/maps/Route1/scripts.pory"
	applymovement 7, BRENDANGOESDOWN1
# 346 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 347 "data/maps/Route1/scripts.pory"
	call BRENDAN_TURTWIG1
	goto BrendanBattle1_4

BrendanBattle1_7:
# 350 "data/maps/Route1/scripts.pory"
	lockall
# 351 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 352 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 353 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 354 "data/maps/Route1/scripts.pory"
	applymovement 7, BRENDANGOESDOWN1
# 355 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 356 "data/maps/Route1/scripts.pory"
	call BRENAND_OSHAWOTT1
	return


# 361 "data/maps/Route1/scripts.pory"
BRENDANGOESDOWN2:
# 362 "data/maps/Route1/scripts.pory"
	walk_down
# 362 "data/maps/Route1/scripts.pory"
	walk_down
# 363 "data/maps/Route1/scripts.pory"
	walk_right
# 363 "data/maps/Route1/scripts.pory"
	walk_right
# 363 "data/maps/Route1/scripts.pory"
	walk_right
# 364 "data/maps/Route1/scripts.pory"
	walk_down
# 364 "data/maps/Route1/scripts.pory"
	walk_down
# 364 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

BrendanBattle2::
# 368 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq BrendanBattle2_2
BrendanBattle2_1:
# 377 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq BrendanBattle2_5
BrendanBattle2_4:
# 386 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq BrendanBattle2_7
	return

BrendanBattle2_2:
# 369 "data/maps/Route1/scripts.pory"
	lockall
# 370 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 371 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 372 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 373 "data/maps/Route1/scripts.pory"
	applymovement 7, BRENDANGOESDOWN2
# 374 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 375 "data/maps/Route1/scripts.pory"
	call BRENDAN_FUECOCO2
	goto BrendanBattle2_1

BrendanBattle2_5:
# 378 "data/maps/Route1/scripts.pory"
	lockall
# 379 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 380 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 381 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 382 "data/maps/Route1/scripts.pory"
	applymovement 7, BRENDANGOESDOWN2
# 383 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 384 "data/maps/Route1/scripts.pory"
	call BRENDAN_TURTWIG2
	goto BrendanBattle2_4

BrendanBattle2_7:
# 387 "data/maps/Route1/scripts.pory"
	lockall
# 388 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 389 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 390 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 391 "data/maps/Route1/scripts.pory"
	applymovement 7, BRENDANGOESDOWN2
# 392 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 393 "data/maps/Route1/scripts.pory"
	call BRENAND_OSHAWOTT2
	return


# 397 "data/maps/Route1/scripts.pory"
BRENDANGOESDOWN3:
# 398 "data/maps/Route1/scripts.pory"
	walk_down
# 398 "data/maps/Route1/scripts.pory"
	walk_down
# 399 "data/maps/Route1/scripts.pory"
	walk_right
# 399 "data/maps/Route1/scripts.pory"
	walk_right
# 399 "data/maps/Route1/scripts.pory"
	walk_right
# 399 "data/maps/Route1/scripts.pory"
	walk_right
# 400 "data/maps/Route1/scripts.pory"
	walk_down
# 400 "data/maps/Route1/scripts.pory"
	walk_down
# 400 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

BrendanBattle3::
# 404 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq BrendanBattle3_2
BrendanBattle3_1:
# 413 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq BrendanBattle3_5
BrendanBattle3_4:
# 422 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq BrendanBattle3_7
	return

BrendanBattle3_2:
# 405 "data/maps/Route1/scripts.pory"
	lockall
# 406 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 407 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 408 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 409 "data/maps/Route1/scripts.pory"
	applymovement 7, BRENDANGOESDOWN3
# 410 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 411 "data/maps/Route1/scripts.pory"
	call BRENDAN_FUECOCO3
	goto BrendanBattle3_1

BrendanBattle3_5:
# 414 "data/maps/Route1/scripts.pory"
	lockall
# 415 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 416 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 417 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 418 "data/maps/Route1/scripts.pory"
	applymovement 7, BRENDANGOESDOWN3
# 419 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 420 "data/maps/Route1/scripts.pory"
	call BRENDAN_TURTWIG3
	goto BrendanBattle3_4

BrendanBattle3_7:
# 423 "data/maps/Route1/scripts.pory"
	lockall
# 424 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 425 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 426 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 427 "data/maps/Route1/scripts.pory"
	applymovement 7, BRENDANGOESDOWN3
# 428 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 429 "data/maps/Route1/scripts.pory"
	call BRENAND_OSHAWOTT3
	return


# 433 "data/maps/Route1/scripts.pory"
BRENDANGOESDOWN4:
# 434 "data/maps/Route1/scripts.pory"
	walk_down
# 434 "data/maps/Route1/scripts.pory"
	walk_down
# 435 "data/maps/Route1/scripts.pory"
	walk_right
# 435 "data/maps/Route1/scripts.pory"
	walk_right
# 435 "data/maps/Route1/scripts.pory"
	walk_right
# 435 "data/maps/Route1/scripts.pory"
	walk_right
# 436 "data/maps/Route1/scripts.pory"
	walk_down
# 436 "data/maps/Route1/scripts.pory"
	walk_down
# 436 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

BrendanBattle4::
# 440 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 3
	goto_if_eq BrendanBattle4_2
BrendanBattle4_1:
# 449 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq BrendanBattle4_5
BrendanBattle4_4:
# 458 "data/maps/Route1/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq BrendanBattle4_7
	return

BrendanBattle4_2:
# 441 "data/maps/Route1/scripts.pory"
	lockall
# 442 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 443 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 444 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 445 "data/maps/Route1/scripts.pory"
	applymovement 7, BRENDANGOESDOWN4
# 446 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 447 "data/maps/Route1/scripts.pory"
	call BRENDAN_FUECOCO4
	goto BrendanBattle4_1

BrendanBattle4_5:
# 450 "data/maps/Route1/scripts.pory"
	lockall
# 451 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 452 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 453 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 454 "data/maps/Route1/scripts.pory"
	applymovement 7, BRENDANGOESDOWN4
# 455 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 456 "data/maps/Route1/scripts.pory"
	call BRENDAN_TURTWIG4
	goto BrendanBattle4_4

BrendanBattle4_7:
# 459 "data/maps/Route1/scripts.pory"
	lockall
# 460 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PLAYERSURPRISE
# 461 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 462 "data/maps/Route1/scripts.pory"
	msgbox MayBattle_Text_0, MSGBOX_AUTOCLOSE
# 463 "data/maps/Route1/scripts.pory"
	applymovement 7, BRENDANGOESDOWN4
# 464 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 465 "data/maps/Route1/scripts.pory"
	call BRENAND_OSHAWOTT4
	return


# 470 "data/maps/Route1/scripts.pory"
PLAYERSURPRISE:
# 471 "data/maps/Route1/scripts.pory"
	emote_exclamation_mark
	step_end

BRENDANGOESBACK::
# 476 "data/maps/Route1/scripts.pory"
	lockall
# 477 "data/maps/Route1/scripts.pory"
	applymovement 6, maygoesup
# 478 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 479 "data/maps/Route1/scripts.pory"
	removeobject 6
# 480 "data/maps/Route1/scripts.pory"
	releaseall
	return


BRENDAN_FUECOCO1::
# 484 "data/maps/Route1/scripts.pory"
	trainerbattle_single brendanfuecoco, TURTWIGINTRO, TURTWIGOUTRO, BRENDANGOESBACKTEST
	end


BRENAND_OSHAWOTT1::
# 489 "data/maps/Route1/scripts.pory"
	trainerbattle_single brendanoshawott, TURTWIGINTRO, TURTWIGOUTRO, BRENDANGOESBACKTEST
	end


BRENDAN_TURTWIG1::
# 494 "data/maps/Route1/scripts.pory"
	trainerbattle_single brenednTurtwig, TURTWIGINTRO, TURTWIGOUTRO, BRENDANGOESBACKTEST
	end


BRENDAN_FUECOCO2::
# 499 "data/maps/Route1/scripts.pory"
	trainerbattle_single brendanfuecoco, TURTWIGINTRO, TURTWIGOUTRO, BRENDANGOESBACKTEST1
	end


BRENAND_OSHAWOTT2::
# 504 "data/maps/Route1/scripts.pory"
	trainerbattle_single brendanoshawott, TURTWIGINTRO, TURTWIGOUTRO, BRENDANGOESBACKTEST1
	end


BRENDAN_TURTWIG2::
# 509 "data/maps/Route1/scripts.pory"
	trainerbattle_single brenednTurtwig, TURTWIGINTRO, TURTWIGOUTRO, BRENDANGOESBACKTEST1
	end


BRENDAN_FUECOCO3::
# 513 "data/maps/Route1/scripts.pory"
	trainerbattle_single brendanfuecoco, TURTWIGINTRO, TURTWIGOUTRO, BRENDANGOESBACKTEST2
	end


BRENAND_OSHAWOTT3::
# 518 "data/maps/Route1/scripts.pory"
	trainerbattle_single brendanoshawott, TURTWIGINTRO, TURTWIGOUTRO, BRENDANGOESBACKTEST2
	end


BRENDAN_TURTWIG3::
# 523 "data/maps/Route1/scripts.pory"
	trainerbattle_single brenednTurtwig, TURTWIGINTRO, TURTWIGOUTRO, BRENDANGOESBACKTEST2
	end


BRENDAN_FUECOCO4::
# 527 "data/maps/Route1/scripts.pory"
	trainerbattle_single brendanfuecoco, TURTWIGINTRO, TURTWIGOUTRO, BRENDANGOESBACKTEST3
	end


BRENAND_OSHAWOTT4::
# 532 "data/maps/Route1/scripts.pory"
	trainerbattle_single brendanoshawott, TURTWIGINTRO, TURTWIGOUTRO, BRENDANGOESBACKTEST3
	end


BRENDAN_TURTWIG4::
# 537 "data/maps/Route1/scripts.pory"
	trainerbattle_single brenednTurtwig, TURTWIGINTRO, TURTWIGOUTRO, BRENDANGOESBACKTEST3
	end


MAYGOESBACKTEST::
# 543 "data/maps/Route1/scripts.pory"
	lockall
# 544 "data/maps/Route1/scripts.pory"
	setvar VAR_1FST_BATTLE_RIVAL, 1
# 545 "data/maps/Route1/scripts.pory"
	applymovement 6, maygoesup
# 546 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 547 "data/maps/Route1/scripts.pory"
	removeobject 6
# 548 "data/maps/Route1/scripts.pory"
	removeobject 7
# 549 "data/maps/Route1/scripts.pory"
	releaseall
	return


BRENDANGOESBACKTEST::
# 553 "data/maps/Route1/scripts.pory"
	lockall
# 554 "data/maps/Route1/scripts.pory"
	setvar VAR_1FST_BATTLE_RIVAL, 1
# 555 "data/maps/Route1/scripts.pory"
	applymovement 7, maygoesup
# 556 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 557 "data/maps/Route1/scripts.pory"
	removeobject 6
# 558 "data/maps/Route1/scripts.pory"
	removeobject 7
# 559 "data/maps/Route1/scripts.pory"
	releaseall
	return


# 562 "data/maps/Route1/scripts.pory"
maygoesup:
# 563 "data/maps/Route1/scripts.pory"
	walk_up
# 563 "data/maps/Route1/scripts.pory"
	walk_up
# 563 "data/maps/Route1/scripts.pory"
	walk_up
# 563 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

MAY_TURTWIG1::
# 567 "data/maps/Route1/scripts.pory"
	trainerbattle_single MAYTurtwig, TURTWIGINTRO, TURTWIGOUTRO, MAYGOESBACKTEST
	end


MAY_OSHAWOTT1::
# 572 "data/maps/Route1/scripts.pory"
	trainerbattle_single MAYOashwott, TURTWIGINTRO, TURTWIGOUTRO, MAYGOESBACKTEST
	end


MAY_FUECOCO1::
# 577 "data/maps/Route1/scripts.pory"
	trainerbattle_single MAYFuecoco, TURTWIGINTRO, TURTWIGOUTRO, MAYGOESBACKTEST
	end


MAYGOESBACKTEST1::
# 582 "data/maps/Route1/scripts.pory"
	lockall
# 583 "data/maps/Route1/scripts.pory"
	setvar VAR_1FST_BATTLE_RIVAL, 1
# 584 "data/maps/Route1/scripts.pory"
	applymovement 6, maygoesup1
# 585 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 586 "data/maps/Route1/scripts.pory"
	removeobject 6
# 587 "data/maps/Route1/scripts.pory"
	removeobject 7
# 588 "data/maps/Route1/scripts.pory"
	releaseall
	return


BRENDANGOESBACKTEST1::
# 593 "data/maps/Route1/scripts.pory"
	lockall
# 594 "data/maps/Route1/scripts.pory"
	setvar VAR_1FST_BATTLE_RIVAL, 1
# 595 "data/maps/Route1/scripts.pory"
	applymovement 7, maygoesup1
# 596 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 597 "data/maps/Route1/scripts.pory"
	removeobject 6
# 598 "data/maps/Route1/scripts.pory"
	removeobject 7
# 599 "data/maps/Route1/scripts.pory"
	releaseall
	return


# 603 "data/maps/Route1/scripts.pory"
maygoesup1:
# 604 "data/maps/Route1/scripts.pory"
	walk_up
# 604 "data/maps/Route1/scripts.pory"
	walk_up
# 604 "data/maps/Route1/scripts.pory"
	walk_up
# 605 "data/maps/Route1/scripts.pory"
	walk_left
# 605 "data/maps/Route1/scripts.pory"
	walk_left
# 606 "data/maps/Route1/scripts.pory"
	walk_up
# 606 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

MAY_TURTWIG2::
# 612 "data/maps/Route1/scripts.pory"
	trainerbattle_single MAYTurtwig, TURTWIGINTRO, TURTWIGOUTRO, MAYGOESBACKTEST1
	end


MAY_OSHAWOTT2::
# 617 "data/maps/Route1/scripts.pory"
	trainerbattle_single MAYOashwott, TURTWIGINTRO, TURTWIGOUTRO, MAYGOESBACKTEST1
	end


MAY_FUECOCO2::
# 622 "data/maps/Route1/scripts.pory"
	trainerbattle_single MAYFuecoco, TURTWIGINTRO, TURTWIGOUTRO, MAYGOESBACKTEST1
	end


MAYGOESBACKTEST2::
# 627 "data/maps/Route1/scripts.pory"
	lockall
# 628 "data/maps/Route1/scripts.pory"
	setvar VAR_1FST_BATTLE_RIVAL, 1
# 629 "data/maps/Route1/scripts.pory"
	applymovement 6, maygoesup2
# 630 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 631 "data/maps/Route1/scripts.pory"
	removeobject 6
# 632 "data/maps/Route1/scripts.pory"
	removeobject 7
# 633 "data/maps/Route1/scripts.pory"
	releaseall
	return


BRENDANGOESBACKTEST2::
# 637 "data/maps/Route1/scripts.pory"
	lockall
# 638 "data/maps/Route1/scripts.pory"
	setvar VAR_1FST_BATTLE_RIVAL, 1
# 639 "data/maps/Route1/scripts.pory"
	applymovement 7, maygoesup2
# 640 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 641 "data/maps/Route1/scripts.pory"
	removeobject 6
# 642 "data/maps/Route1/scripts.pory"
	removeobject 7
# 643 "data/maps/Route1/scripts.pory"
	releaseall
	return


# 646 "data/maps/Route1/scripts.pory"
maygoesup2:
# 647 "data/maps/Route1/scripts.pory"
	walk_up
# 647 "data/maps/Route1/scripts.pory"
	walk_up
# 647 "data/maps/Route1/scripts.pory"
	walk_up
# 648 "data/maps/Route1/scripts.pory"
	walk_left
# 648 "data/maps/Route1/scripts.pory"
	walk_left
# 648 "data/maps/Route1/scripts.pory"
	walk_left
# 649 "data/maps/Route1/scripts.pory"
	walk_up
# 649 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

# 653 "data/maps/Route1/scripts.pory"
maygoesup3:
# 654 "data/maps/Route1/scripts.pory"
	walk_up
# 654 "data/maps/Route1/scripts.pory"
	walk_up
# 654 "data/maps/Route1/scripts.pory"
	walk_up
# 655 "data/maps/Route1/scripts.pory"
	walk_left
# 655 "data/maps/Route1/scripts.pory"
	walk_left
# 655 "data/maps/Route1/scripts.pory"
	walk_left
# 656 "data/maps/Route1/scripts.pory"
	walk_up
# 656 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

MAY_TURTWIG3::
# 661 "data/maps/Route1/scripts.pory"
	trainerbattle_single MAYTurtwig, TURTWIGINTRO, TURTWIGOUTRO, MAYGOESBACKTEST2
	end


MAY_OSHAWOTT3::
# 666 "data/maps/Route1/scripts.pory"
	trainerbattle_single MAYOashwott, TURTWIGINTRO, TURTWIGOUTRO, MAYGOESBACKTEST2
	end


MAY_FUECOCO3::
# 671 "data/maps/Route1/scripts.pory"
	trainerbattle_single MAYFuecoco, TURTWIGINTRO, TURTWIGOUTRO, MAYGOESBACKTEST2
	end


MAYGOESBACKTEST3::
# 676 "data/maps/Route1/scripts.pory"
	lockall
# 677 "data/maps/Route1/scripts.pory"
	setvar VAR_1FST_BATTLE_RIVAL, 1
# 678 "data/maps/Route1/scripts.pory"
	applymovement 6, maygoesup3
# 679 "data/maps/Route1/scripts.pory"
	waitmovement 6
# 680 "data/maps/Route1/scripts.pory"
	removeobject 6
# 681 "data/maps/Route1/scripts.pory"
	removeobject 7
# 682 "data/maps/Route1/scripts.pory"
	releaseall
	return


BRENDANGOESBACKTEST3::
# 686 "data/maps/Route1/scripts.pory"
	lockall
# 687 "data/maps/Route1/scripts.pory"
	setvar VAR_1FST_BATTLE_RIVAL, 1
# 688 "data/maps/Route1/scripts.pory"
	applymovement 7, maygoesup3
# 689 "data/maps/Route1/scripts.pory"
	waitmovement 7
# 690 "data/maps/Route1/scripts.pory"
	removeobject 6
# 691 "data/maps/Route1/scripts.pory"
	removeobject 7
# 692 "data/maps/Route1/scripts.pory"
	releaseall
	return


MAY_TURTWIG4::
# 697 "data/maps/Route1/scripts.pory"
	trainerbattle_single MAYTurtwig, TURTWIGINTRO, TURTWIGOUTRO, MAYGOESBACKTEST3
	end


MAY_OSHAWOTT4::
# 702 "data/maps/Route1/scripts.pory"
	trainerbattle_single MAYOashwott, TURTWIGINTRO, TURTWIGOUTRO, MAYGOESBACKTEST3
	end


MAY_FUECOCO4::
# 707 "data/maps/Route1/scripts.pory"
	trainerbattle_single MAYFuecoco, TURTWIGINTRO, TURTWIGOUTRO, MAYGOESBACKTEST3
	end


# 712 "data/maps/Route1/scripts.pory"
rivalgoesup:
# 713 "data/maps/Route1/scripts.pory"
	walk_up
# 713 "data/maps/Route1/scripts.pory"
	walk_up
# 713 "data/maps/Route1/scripts.pory"
	walk_up
# 713 "data/maps/Route1/scripts.pory"
	walk_up
# 713 "data/maps/Route1/scripts.pory"
	walk_up
# 713 "data/maps/Route1/scripts.pory"
	walk_up
# 713 "data/maps/Route1/scripts.pory"
	walk_up
# 713 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

Trainer3_Route_1_Text_0:
# 26 "data/maps/Route1/scripts.pory"
	.string "You’re really strong! I bet you’ve got\n"
	.string "what it takes to challenge the Gym\l"
	.string "Leader in the next city!$"

MayBattle_Text_0:
# 112 "data/maps/Route1/scripts.pory"
	.string "Sup {PLAYER}, long time no see! Our\n"
	.string "boss told me to battle each other every\l"
	.string "once in a while, cmon isn't that\l"
	.string "exciting? Ready?$"

intro_text3::
# 30 "data/maps/Route1/scripts.pory"
	.string "HEY$"

lose_text3::
# 33 "data/maps/Route1/scripts.pory"
	.string "HEY$"

Route1Trainer3_Postbattle::
# 36 "data/maps/Route1/scripts.pory"
	.string "HEY$"

Route1Trainer2_Postbattle::
# 40 "data/maps/Route1/scripts.pory"
	.string "I need to train my bugs more. Next time,\n"
	.string "I won't lose!$"

lose_text2::
# 45 "data/maps/Route1/scripts.pory"
	.string "My bugs... squashed... Nooo!$"

intro_text2::
# 49 "data/maps/Route1/scripts.pory"
	.string "Bugs may be small, but they pack a\n"
	.string "punch! Let's battle!$"

intro_text::
# 53 "data/maps/Route1/scripts.pory"
	.string "Hey! You look like a fresh-faced\n"
	.string "trainer! Let’s see if you’ve got what it\l"
	.string "takes to start strong!$"

lose_text::
# 58 "data/maps/Route1/scripts.pory"
	.string "Ho! My mom asked you to bring me back to\n"
	.string "my house... I juste love Pokémons and\l"
	.string "battles$"

Route1Trainer_Postbattle::
# 63 "data/maps/Route1/scripts.pory"
	.string "You’re really strong! I bet you’ve got\n"
	.string "what it takes to challenge the Gym\l"
	.string "Leader in the next city!$"

TURTWIGOUTRO::
# 717 "data/maps/Route1/scripts.pory"
	.string "I guess it was benefitial for both of\n"
	.string "us... You are god damn talented$"

TURTWIGINTRO::
# 721 "data/maps/Route1/scripts.pory"
	.string "Now let's battle!$"
