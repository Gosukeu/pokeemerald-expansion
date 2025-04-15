# 1 "data/maps/TundroWood_House1/scripts.pory"

# 2 "data/maps/TundroWood_House1/scripts.pory"
TundroWood_House1_MapScripts::
# 3 "data/maps/TundroWood_House1/scripts.pory"
	.byte 0

SchoolHouseTournamentTrigger::
# 8 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 9 "data/maps/TundroWood_House1/scripts.pory"
	applymovement 8, exlamationmovement
# 10 "data/maps/TundroWood_House1/scripts.pory"
	waitmovement 8
# 11 "data/maps/TundroWood_House1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, exlamationmovement
# 12 "data/maps/TundroWood_House1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 13 "data/maps/TundroWood_House1/scripts.pory"
	msgbox SchoolHouseTournamentTrigger_Text_0, MSGBOX_AUTOCLOSE
# 14 "data/maps/TundroWood_House1/scripts.pory"
	applymovement 7, oldpapygoesback
# 15 "data/maps/TundroWood_House1/scripts.pory"
	waitmovement 7
# 16 "data/maps/TundroWood_House1/scripts.pory"
	removeobject 7
# 17 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 2
# 18 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavar::
# 24 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 25 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 1
# 26 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_EACH_TRAINER, 1
# 27 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavar1::
# 32 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 33 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 2
# 34 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_EACH_TRAINER, 1
# 35 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavar2::
# 39 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 40 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 3
# 41 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_EACH_TRAINER, 1
# 42 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavar3::
# 46 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 47 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 4
# 48 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_EACH_TRAINER, 1
# 49 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavar4::
# 53 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 54 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 5
# 55 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_EACH_TRAINER, 1
# 56 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavar5::
# 60 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 61 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 6
# 62 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_EACH_TRAINER, 1
# 63 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 3
# 64 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavardeuxiemecombat::
# 69 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 70 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 1
# 71 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_NEW1, 1
# 72 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavar1deuxiemecombat::
# 76 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 77 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 2
# 78 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_NEW1, 1
# 79 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavar2deuxiemecombat::
# 83 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 84 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 3
# 85 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_NEW1, 1
# 86 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavar3deuxiemecombat::
# 90 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 91 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 4
# 92 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_NEW1, 1
# 93 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavar4deuxiemecombat::
# 97 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 98 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 5
# 99 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_NEW1, 1
# 100 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavar5deuxiemecombat::
# 104 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 105 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 6
# 106 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_NEW1, 1
# 107 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 3
# 108 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavartroisiemecombat::
# 115 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 116 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 1
# 117 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE111_STATE, 1
# 118 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavartroisiemecombat1::
# 122 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 123 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 2
# 124 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE111_STATE, 1
# 125 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavartroisiemecombat2::
# 129 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 130 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 3
# 131 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE111_STATE, 1
# 132 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavartroisiemecombat3::
# 136 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 137 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 4
# 138 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE111_STATE, 1
# 139 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavartroisiemecombat4::
# 143 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 144 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 5
# 145 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE111_STATE, 1
# 146 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavartroisiemecombat5::
# 150 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 151 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 6
# 152 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE111_STATE, 1
# 153 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 3
# 154 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarquatriemecombat::
# 159 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 160 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 1
# 161 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE112_STATE, 1
# 162 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarquatriemecombat1::
# 166 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 167 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 2
# 168 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE112_STATE, 1
# 169 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarquatriemecombat2::
# 173 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 174 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 3
# 175 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE112_STATE, 1
# 176 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarquatriemecombat3::
# 180 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 181 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 4
# 182 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE112_STATE, 1
# 183 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarquatriemecombat4::
# 187 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 188 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 5
# 189 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE112_STATE, 1
# 190 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarquatriemecombat5::
# 194 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 195 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 6
# 196 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE112_STATE, 1
# 197 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 3
# 198 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarcinquiemecombat::
# 203 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 204 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 1
# 205 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE113_STATE, 1
# 206 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarcinquiemecombat1::
# 210 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 211 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 2
# 212 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE113_STATE, 1
# 213 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarcinquiemecombat2::
# 217 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 218 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 3
# 219 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE113_STATE, 1
# 220 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarcinquiemecombat3::
# 224 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 225 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 4
# 226 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE113_STATE, 1
# 227 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarcinquiemecombat4::
# 231 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 232 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 5
# 233 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE113_STATE, 1
# 234 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarcinquiemecombat5::
# 238 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 239 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 6
# 240 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE113_STATE, 1
# 241 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 3
# 242 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarsixiemecombat::
# 247 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 248 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 1
# 249 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE114_STATE, 1
# 250 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarsixiemecombat1::
# 254 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 255 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 2
# 256 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE114_STATE, 1
# 257 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarsixiemecombat2::
# 261 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 262 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 3
# 263 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE114_STATE, 1
# 264 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarsixiemecombat3::
# 269 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 270 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 4
# 271 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE114_STATE, 1
# 272 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarsixiemecombat4::
# 276 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 277 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 5
# 278 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE114_STATE, 1
# 279 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


pourlavarsixiemecombat5::
# 283 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 284 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT, 6
# 285 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE114_STATE, 1
# 286 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 3
# 287 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


KID6TOURNEMENTBattle1::
# 292 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT5, kid1intro1, kid1outro1, pourlavarsixiemecombat
	return


KID6TOURNEMENTBattle2::
# 296 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT5, kid1intro2, kid1outro2, pourlavarsixiemecombat1
	return


KID6TOURNEMENTBattle3::
# 300 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT5, kid1intro3, kid1outro3, pourlavarsixiemecombat2
	return


KID6TOURNEMENTBattle4::
# 304 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT5, kid1intro4, kid1outro4, pourlavarsixiemecombat3
	return


KID6TOURNEMENTBattle5::
# 308 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT5, kid1intro5, kid1outro5, pourlavarsixiemecombat4
	return


KID6TOURNEMENTBattle6::
# 311 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT5, kid1intro6, kid1outro6, pourlavarsixiemecombat5
	return


KID5TOURNEMENTBattle1::
# 316 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT4, kid1intro1, kid1outro1, pourlavarcinquiemecombat
	return


KID5TOURNEMENTBattle2::
# 320 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT4, kid1intro2, kid1outro2, pourlavarcinquiemecombat1
	return


KID5TOURNEMENTBattle3::
# 324 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT4, kid1intro3, kid1outro3, pourlavarcinquiemecombat2
	return


KID5TOURNEMENTBattle4::
# 328 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT4, kid1intro4, kid1outro4, pourlavarcinquiemecombat3
	return


KID5TOURNEMENTBattle5::
# 332 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT4, kid1intro5, kid1outro5, pourlavarcinquiemecombat4
	return


KID5TOURNEMENTBattle6::
# 335 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT4, kid1intro6, kid1outro6, pourlavarcinquiemecombat5
	return


KID4TOURNEMENTBattle1::
# 340 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT3, kid1intro1, kid1outro1, pourlavarquatriemecombat
	return


KID4TOURNEMENTBattle2::
# 344 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT3, kid1intro2, kid1outro2, pourlavarquatriemecombat1
	return


KID4TOURNEMENTBattle3::
# 348 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT3, kid1intro3, kid1outro3, pourlavarquatriemecombat2
	return


KID4TOURNEMENTBattle4::
# 352 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT3, kid1intro4, kid1outro4, pourlavarquatriemecombat3
	return


KID4TOURNEMENTBattle5::
# 356 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT3, kid1intro5, kid1outro5, pourlavarquatriemecombat4
	return


KID4TOURNEMENTBattle6::
# 359 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT3, kid1intro6, kid1outro6, pourlavarquatriemecombat5
	return


KID3TOURNEMENTBattle1::
# 364 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT2, kid1intro1, kid1outro1, pourlavartroisiemecombat
	return


KID3TOURNEMENTBattle2::
# 368 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT2, kid1intro2, kid1outro2, pourlavartroisiemecombat1
	return


KID3TOURNEMENTBattle3::
# 372 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT2, kid1intro3, kid1outro3, pourlavartroisiemecombat2
	return


KID3TOURNEMENTBattle4::
# 376 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT2, kid1intro4, kid1outro4, pourlavartroisiemecombat3
	return


KID3TOURNEMENTBattle5::
# 380 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT2, kid1intro5, kid1outro5, pourlavartroisiemecombat4
	return


KID3TOURNEMENTBattle6::
# 383 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT2, kid1intro6, kid1outro6, pourlavartroisiemecombat5
	return


KID2TOURNEMENTBattle1::
# 389 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT1, kid1intro1, kid1outro1, pourlavardeuxiemecombat
	return


KID2TOURNEMENTBattle2::
# 393 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT1, kid1intro2, kid1outro2, pourlavar1deuxiemecombat
	return


KID2TOURNEMENTBattle3::
# 397 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT1, kid1intro3, kid1outro3, pourlavar2deuxiemecombat
	return


KID2TOURNEMENTBattle4::
# 401 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT1, kid1intro4, kid1outro4, pourlavar3deuxiemecombat
	return


KID2TOURNEMENTBattle5::
# 405 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT1, kid1intro5, kid1outro5, pourlavar4deuxiemecombat
	return


KID2TOURNEMENTBattle6::
# 408 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT1, kid1intro6, kid1outro6, pourlavar5deuxiemecombat
	return


KID1TOURNEMENTBattle1::
# 414 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT, kid1intro1, kid1outro1, pourlavar
	return


KID1TOURNEMENTBattle2::
# 418 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT, kid1intro2, kid1outro2, pourlavar1
	return


KID1TOURNEMENTBattle3::
# 422 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT, kid1intro3, kid1outro3, pourlavar2
	return


KID1TOURNEMENTBattle4::
# 426 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT, kid1intro4, kid1outro4, pourlavar3
	return


KID1TOURNEMENTBattle5::
# 430 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT, kid1intro5, kid1outro5, pourlavar4
	return


KID1TOURNEMENTBattle6::
# 433 "data/maps/TundroWood_House1/scripts.pory"
	trainerbattle_single KID1TOURNEMENT, kid1intro6, kid1outro6, pourlavar5
	return


KID1TOURNEMENTQUIZ::
# 487 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_EACH_TRAINER, 0
	goto_if_eq KID1TOURNEMENTQUIZ_1
# 585 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 586 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_15
	return

KID1TOURNEMENTQUIZ_1:
# 489 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 0
	goto_if_eq KID1TOURNEMENTQUIZ_5
KID1TOURNEMENTQUIZ_4:
# 505 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 1
	goto_if_eq KID1TOURNEMENTQUIZ_8
KID1TOURNEMENTQUIZ_7:
# 521 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 2
	goto_if_eq KID1TOURNEMENTQUIZ_14
KID1TOURNEMENTQUIZ_13:
# 536 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 3
	goto_if_eq KID1TOURNEMENTQUIZ_22
KID1TOURNEMENTQUIZ_21:
# 551 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 4
	goto_if_eq KID1TOURNEMENTQUIZ_30
KID1TOURNEMENTQUIZ_29:
# 566 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 5
	goto_if_eq KID1TOURNEMENTQUIZ_37
	return

KID1TOURNEMENTQUIZ_5:
# 490 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 491 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 492 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_0, MSGBOX_AUTOCLOSE
# 493 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 494 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_2, MSGBOX_YESNO
# 495 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENTQUIZ_11
KID1TOURNEMENTQUIZ_10:
# 499 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENTQUIZ_19
	goto KID1TOURNEMENTQUIZ_4

KID1TOURNEMENTQUIZ_8:
# 506 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 507 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 508 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_5, MSGBOX_AUTOCLOSE
# 509 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 510 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_6, MSGBOX_YESNO
# 511 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENTQUIZ_17
KID1TOURNEMENTQUIZ_16:
# 516 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENTQUIZ_27
	goto KID1TOURNEMENTQUIZ_7

KID1TOURNEMENTQUIZ_11:
# 496 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 497 "data/maps/TundroWood_House1/scripts.pory"
	call KID1TOURNEMENTBattle1
	goto KID1TOURNEMENTQUIZ_10

KID1TOURNEMENTQUIZ_14:
# 522 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 523 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 524 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_7, MSGBOX_AUTOCLOSE
# 525 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 526 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_8, MSGBOX_YESNO
# 527 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENTQUIZ_25
KID1TOURNEMENTQUIZ_24:
# 531 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENTQUIZ_35
	goto KID1TOURNEMENTQUIZ_13

KID1TOURNEMENTQUIZ_17:
# 512 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 513 "data/maps/TundroWood_House1/scripts.pory"
	call KID1TOURNEMENTBattle2
	goto KID1TOURNEMENTQUIZ_16

KID1TOURNEMENTQUIZ_19:
# 500 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 501 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENTQUIZ_4

KID1TOURNEMENTQUIZ_22:
# 537 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 538 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 539 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_9, MSGBOX_AUTOCLOSE
# 540 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 541 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_10, MSGBOX_YESNO
# 542 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENTQUIZ_33
KID1TOURNEMENTQUIZ_32:
# 546 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENTQUIZ_42
	goto KID1TOURNEMENTQUIZ_21

KID1TOURNEMENTQUIZ_25:
# 528 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 529 "data/maps/TundroWood_House1/scripts.pory"
	call KID1TOURNEMENTBattle3
	goto KID1TOURNEMENTQUIZ_24

KID1TOURNEMENTQUIZ_27:
# 517 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 518 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENTQUIZ_7

KID1TOURNEMENTQUIZ_30:
# 552 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 553 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 554 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_11, MSGBOX_AUTOCLOSE
# 555 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 556 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_12, MSGBOX_YESNO
# 557 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENTQUIZ_40
KID1TOURNEMENTQUIZ_39:
# 561 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENTQUIZ_47
	goto KID1TOURNEMENTQUIZ_29

KID1TOURNEMENTQUIZ_33:
# 543 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 544 "data/maps/TundroWood_House1/scripts.pory"
	call KID1TOURNEMENTBattle4
	goto KID1TOURNEMENTQUIZ_32

KID1TOURNEMENTQUIZ_35:
# 532 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 533 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENTQUIZ_13

KID1TOURNEMENTQUIZ_37:
# 567 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 568 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 569 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_13, MSGBOX_AUTOCLOSE
# 570 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 571 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_14, MSGBOX_YESNO
# 572 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENTQUIZ_45
KID1TOURNEMENTQUIZ_44:
# 576 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENTQUIZ_49
	return

KID1TOURNEMENTQUIZ_40:
# 558 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 559 "data/maps/TundroWood_House1/scripts.pory"
	call KID1TOURNEMENTBattle5
	goto KID1TOURNEMENTQUIZ_39

KID1TOURNEMENTQUIZ_42:
# 547 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 548 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENTQUIZ_21

KID1TOURNEMENTQUIZ_45:
# 573 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 574 "data/maps/TundroWood_House1/scripts.pory"
	call KID1TOURNEMENTBattle6
	goto KID1TOURNEMENTQUIZ_44

KID1TOURNEMENTQUIZ_47:
# 562 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 563 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENTQUIZ_29

KID1TOURNEMENTQUIZ_49:
# 577 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 578 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	return


KID1TOURNEMENT1QUIZ::
# 591 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_NEW1, 0
	goto_if_eq KID1TOURNEMENT1QUIZ_1
# 688 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 689 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_15, MSGBOX_AUTOCLOSE
# 690 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	return

KID1TOURNEMENT1QUIZ_1:
# 593 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 0
	goto_if_eq KID1TOURNEMENT1QUIZ_5
KID1TOURNEMENT1QUIZ_4:
# 609 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 1
	goto_if_eq KID1TOURNEMENT1QUIZ_8
KID1TOURNEMENT1QUIZ_7:
# 624 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 2
	goto_if_eq KID1TOURNEMENT1QUIZ_14
KID1TOURNEMENT1QUIZ_13:
# 639 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 3
	goto_if_eq KID1TOURNEMENT1QUIZ_22
KID1TOURNEMENT1QUIZ_21:
# 654 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 4
	goto_if_eq KID1TOURNEMENT1QUIZ_30
KID1TOURNEMENT1QUIZ_29:
# 669 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 5
	goto_if_eq KID1TOURNEMENT1QUIZ_37
	return

KID1TOURNEMENT1QUIZ_5:
# 594 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 595 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 596 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_0, MSGBOX_AUTOCLOSE
# 597 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 598 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_2, MSGBOX_YESNO
# 599 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT1QUIZ_11
KID1TOURNEMENT1QUIZ_10:
# 603 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT1QUIZ_19
	goto KID1TOURNEMENT1QUIZ_4

KID1TOURNEMENT1QUIZ_8:
# 610 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 611 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 612 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_5, MSGBOX_AUTOCLOSE
# 613 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 614 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_6, MSGBOX_YESNO
# 615 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT1QUIZ_17
KID1TOURNEMENT1QUIZ_16:
# 619 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT1QUIZ_27
	goto KID1TOURNEMENT1QUIZ_7

KID1TOURNEMENT1QUIZ_11:
# 600 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 601 "data/maps/TundroWood_House1/scripts.pory"
	call KID2TOURNEMENTBattle1
	goto KID1TOURNEMENT1QUIZ_10

KID1TOURNEMENT1QUIZ_14:
# 625 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 626 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 627 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_7, MSGBOX_AUTOCLOSE
# 628 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 629 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_8, MSGBOX_YESNO
# 630 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT1QUIZ_25
KID1TOURNEMENT1QUIZ_24:
# 634 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT1QUIZ_35
	goto KID1TOURNEMENT1QUIZ_13

KID1TOURNEMENT1QUIZ_17:
# 616 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 617 "data/maps/TundroWood_House1/scripts.pory"
	call KID2TOURNEMENTBattle2
	goto KID1TOURNEMENT1QUIZ_16

KID1TOURNEMENT1QUIZ_19:
# 604 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 605 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT1QUIZ_4

KID1TOURNEMENT1QUIZ_22:
# 640 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 641 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 642 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_9, MSGBOX_AUTOCLOSE
# 643 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 644 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_10, MSGBOX_YESNO
# 645 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT1QUIZ_33
KID1TOURNEMENT1QUIZ_32:
# 649 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT1QUIZ_42
	goto KID1TOURNEMENT1QUIZ_21

KID1TOURNEMENT1QUIZ_25:
# 631 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 632 "data/maps/TundroWood_House1/scripts.pory"
	call KID2TOURNEMENTBattle3
	goto KID1TOURNEMENT1QUIZ_24

KID1TOURNEMENT1QUIZ_27:
# 620 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 621 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT1QUIZ_7

KID1TOURNEMENT1QUIZ_30:
# 655 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 656 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 657 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_11, MSGBOX_AUTOCLOSE
# 658 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 659 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_12, MSGBOX_YESNO
# 660 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT1QUIZ_40
KID1TOURNEMENT1QUIZ_39:
# 664 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT1QUIZ_47
	goto KID1TOURNEMENT1QUIZ_29

KID1TOURNEMENT1QUIZ_33:
# 646 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 647 "data/maps/TundroWood_House1/scripts.pory"
	call KID2TOURNEMENTBattle4
	goto KID1TOURNEMENT1QUIZ_32

KID1TOURNEMENT1QUIZ_35:
# 635 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 636 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT1QUIZ_13

KID1TOURNEMENT1QUIZ_37:
# 670 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 671 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 672 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_13, MSGBOX_AUTOCLOSE
# 673 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 674 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_14, MSGBOX_YESNO
# 675 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT1QUIZ_45
KID1TOURNEMENT1QUIZ_44:
# 679 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT1QUIZ_49
	return

KID1TOURNEMENT1QUIZ_40:
# 661 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 662 "data/maps/TundroWood_House1/scripts.pory"
	call KID2TOURNEMENTBattle5
	goto KID1TOURNEMENT1QUIZ_39

KID1TOURNEMENT1QUIZ_42:
# 650 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 651 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT1QUIZ_21

KID1TOURNEMENT1QUIZ_45:
# 676 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 677 "data/maps/TundroWood_House1/scripts.pory"
	call KID2TOURNEMENTBattle6
	goto KID1TOURNEMENT1QUIZ_44

KID1TOURNEMENT1QUIZ_47:
# 665 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 666 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT1QUIZ_29

KID1TOURNEMENT1QUIZ_49:
# 680 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 681 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	return


KID1TOURNEMENT2QUIZ::
# 697 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_ROUTE111_STATE, 0
	goto_if_eq KID1TOURNEMENT2QUIZ_1
# 795 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 796 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_15, MSGBOX_AUTOCLOSE
	return

KID1TOURNEMENT2QUIZ_1:
# 699 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 0
	goto_if_eq KID1TOURNEMENT2QUIZ_5
KID1TOURNEMENT2QUIZ_4:
# 715 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 1
	goto_if_eq KID1TOURNEMENT2QUIZ_8
KID1TOURNEMENT2QUIZ_7:
# 730 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 2
	goto_if_eq KID1TOURNEMENT2QUIZ_14
KID1TOURNEMENT2QUIZ_13:
# 745 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 3
	goto_if_eq KID1TOURNEMENT2QUIZ_22
KID1TOURNEMENT2QUIZ_21:
# 760 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 4
	goto_if_eq KID1TOURNEMENT2QUIZ_30
KID1TOURNEMENT2QUIZ_29:
# 775 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 5
	goto_if_eq KID1TOURNEMENT2QUIZ_37
	return

KID1TOURNEMENT2QUIZ_5:
# 700 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 701 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 702 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_0, MSGBOX_AUTOCLOSE
# 703 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 704 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_2, MSGBOX_YESNO
# 705 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT2QUIZ_11
KID1TOURNEMENT2QUIZ_10:
# 709 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT2QUIZ_19
	goto KID1TOURNEMENT2QUIZ_4

KID1TOURNEMENT2QUIZ_8:
# 716 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 717 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 718 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_5, MSGBOX_AUTOCLOSE
# 719 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 720 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_6, MSGBOX_YESNO
# 721 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT2QUIZ_17
KID1TOURNEMENT2QUIZ_16:
# 725 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT2QUIZ_27
	goto KID1TOURNEMENT2QUIZ_7

KID1TOURNEMENT2QUIZ_11:
# 706 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 707 "data/maps/TundroWood_House1/scripts.pory"
	call KID3TOURNEMENTBattle1
	goto KID1TOURNEMENT2QUIZ_10

KID1TOURNEMENT2QUIZ_14:
# 731 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 732 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 733 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_7, MSGBOX_AUTOCLOSE
# 734 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 735 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_8, MSGBOX_YESNO
# 736 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT2QUIZ_25
KID1TOURNEMENT2QUIZ_24:
# 740 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT2QUIZ_35
	goto KID1TOURNEMENT2QUIZ_13

KID1TOURNEMENT2QUIZ_17:
# 722 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 723 "data/maps/TundroWood_House1/scripts.pory"
	call KID3TOURNEMENTBattle2
	goto KID1TOURNEMENT2QUIZ_16

KID1TOURNEMENT2QUIZ_19:
# 710 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 711 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT2QUIZ_4

KID1TOURNEMENT2QUIZ_22:
# 746 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 747 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 748 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_9, MSGBOX_AUTOCLOSE
# 749 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 750 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_10, MSGBOX_YESNO
# 751 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT2QUIZ_33
KID1TOURNEMENT2QUIZ_32:
# 755 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT2QUIZ_42
	goto KID1TOURNEMENT2QUIZ_21

KID1TOURNEMENT2QUIZ_25:
# 737 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 738 "data/maps/TundroWood_House1/scripts.pory"
	call KID3TOURNEMENTBattle3
	goto KID1TOURNEMENT2QUIZ_24

KID1TOURNEMENT2QUIZ_27:
# 726 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 727 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT2QUIZ_7

KID1TOURNEMENT2QUIZ_30:
# 761 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 762 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 763 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_11, MSGBOX_AUTOCLOSE
# 764 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 765 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_12, MSGBOX_YESNO
# 766 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT2QUIZ_40
KID1TOURNEMENT2QUIZ_39:
# 770 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT2QUIZ_47
	goto KID1TOURNEMENT2QUIZ_29

KID1TOURNEMENT2QUIZ_33:
# 752 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 753 "data/maps/TundroWood_House1/scripts.pory"
	call KID3TOURNEMENTBattle4
	goto KID1TOURNEMENT2QUIZ_32

KID1TOURNEMENT2QUIZ_35:
# 741 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 742 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT2QUIZ_13

KID1TOURNEMENT2QUIZ_37:
# 776 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 777 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 778 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_13, MSGBOX_AUTOCLOSE
# 779 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 780 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_14, MSGBOX_YESNO
# 781 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT2QUIZ_45
KID1TOURNEMENT2QUIZ_44:
# 785 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT2QUIZ_49
	return

KID1TOURNEMENT2QUIZ_40:
# 767 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 768 "data/maps/TundroWood_House1/scripts.pory"
	call KID3TOURNEMENTBattle5
	goto KID1TOURNEMENT2QUIZ_39

KID1TOURNEMENT2QUIZ_42:
# 756 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 757 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT2QUIZ_21

KID1TOURNEMENT2QUIZ_45:
# 782 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 783 "data/maps/TundroWood_House1/scripts.pory"
	call KID3TOURNEMENTBattle6
	goto KID1TOURNEMENT2QUIZ_44

KID1TOURNEMENT2QUIZ_47:
# 771 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 772 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT2QUIZ_29

KID1TOURNEMENT2QUIZ_49:
# 786 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 787 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	return


KID1TOURNEMENT3QUIZ::
# 802 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_ROUTE112_STATE, 0
	goto_if_eq KID1TOURNEMENT3QUIZ_1
# 901 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 902 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_15, MSGBOX_AUTOCLOSE
	return

KID1TOURNEMENT3QUIZ_1:
# 803 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 0
	goto_if_eq KID1TOURNEMENT3QUIZ_5
KID1TOURNEMENT3QUIZ_4:
# 821 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 1
	goto_if_eq KID1TOURNEMENT3QUIZ_8
KID1TOURNEMENT3QUIZ_7:
# 836 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 2
	goto_if_eq KID1TOURNEMENT3QUIZ_14
KID1TOURNEMENT3QUIZ_13:
# 851 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 3
	goto_if_eq KID1TOURNEMENT3QUIZ_22
KID1TOURNEMENT3QUIZ_21:
# 866 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 4
	goto_if_eq KID1TOURNEMENT3QUIZ_30
KID1TOURNEMENT3QUIZ_29:
# 881 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 5
	goto_if_eq KID1TOURNEMENT3QUIZ_37
	return

KID1TOURNEMENT3QUIZ_5:
# 804 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 805 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 806 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_0, MSGBOX_AUTOCLOSE
# 807 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 808 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_2, MSGBOX_YESNO
# 809 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT3QUIZ_11
KID1TOURNEMENT3QUIZ_10:
# 814 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT3QUIZ_19
	goto KID1TOURNEMENT3QUIZ_4

KID1TOURNEMENT3QUIZ_8:
# 822 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 823 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 824 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_5, MSGBOX_AUTOCLOSE
# 825 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 826 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_6, MSGBOX_YESNO
# 827 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT3QUIZ_17
KID1TOURNEMENT3QUIZ_16:
# 831 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT3QUIZ_27
	goto KID1TOURNEMENT3QUIZ_7

KID1TOURNEMENT3QUIZ_11:
# 810 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 811 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 812 "data/maps/TundroWood_House1/scripts.pory"
	call KID4TOURNEMENTBattle1
	goto KID1TOURNEMENT3QUIZ_10

KID1TOURNEMENT3QUIZ_14:
# 837 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 838 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 839 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_7, MSGBOX_AUTOCLOSE
# 840 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 841 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_8, MSGBOX_YESNO
# 842 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT3QUIZ_25
KID1TOURNEMENT3QUIZ_24:
# 846 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT3QUIZ_35
	goto KID1TOURNEMENT3QUIZ_13

KID1TOURNEMENT3QUIZ_17:
# 828 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 829 "data/maps/TundroWood_House1/scripts.pory"
	call KID4TOURNEMENTBattle2
	goto KID1TOURNEMENT3QUIZ_16

KID1TOURNEMENT3QUIZ_19:
# 815 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 816 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 817 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT3QUIZ_4

KID1TOURNEMENT3QUIZ_22:
# 852 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 853 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 854 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_9, MSGBOX_AUTOCLOSE
# 855 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 856 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_10, MSGBOX_YESNO
# 857 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT3QUIZ_33
KID1TOURNEMENT3QUIZ_32:
# 861 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT3QUIZ_42
	goto KID1TOURNEMENT3QUIZ_21

KID1TOURNEMENT3QUIZ_25:
# 843 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 844 "data/maps/TundroWood_House1/scripts.pory"
	call KID4TOURNEMENTBattle3
	goto KID1TOURNEMENT3QUIZ_24

KID1TOURNEMENT3QUIZ_27:
# 832 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 833 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT3QUIZ_7

KID1TOURNEMENT3QUIZ_30:
# 867 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 868 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 869 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_11, MSGBOX_AUTOCLOSE
# 870 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 871 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_12, MSGBOX_YESNO
# 872 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT3QUIZ_40
KID1TOURNEMENT3QUIZ_39:
# 876 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT3QUIZ_47
	goto KID1TOURNEMENT3QUIZ_29

KID1TOURNEMENT3QUIZ_33:
# 858 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 859 "data/maps/TundroWood_House1/scripts.pory"
	call KID4TOURNEMENTBattle4
	goto KID1TOURNEMENT3QUIZ_32

KID1TOURNEMENT3QUIZ_35:
# 847 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 848 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT3QUIZ_13

KID1TOURNEMENT3QUIZ_37:
# 882 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 883 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 884 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_13, MSGBOX_AUTOCLOSE
# 885 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 886 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_14, MSGBOX_YESNO
# 887 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT3QUIZ_45
KID1TOURNEMENT3QUIZ_44:
# 891 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT3QUIZ_49
	return

KID1TOURNEMENT3QUIZ_40:
# 873 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 874 "data/maps/TundroWood_House1/scripts.pory"
	call KID4TOURNEMENTBattle5
	goto KID1TOURNEMENT3QUIZ_39

KID1TOURNEMENT3QUIZ_42:
# 862 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 863 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT3QUIZ_21

KID1TOURNEMENT3QUIZ_45:
# 888 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 889 "data/maps/TundroWood_House1/scripts.pory"
	call KID4TOURNEMENTBattle6
	goto KID1TOURNEMENT3QUIZ_44

KID1TOURNEMENT3QUIZ_47:
# 877 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 878 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT3QUIZ_29

KID1TOURNEMENT3QUIZ_49:
# 892 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 893 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	return


KID1TOURNEMENT4QUIZ::
# 910 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_ROUTE113_STATE, 0
	goto_if_eq KID1TOURNEMENT4QUIZ_1
# 1006 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1007 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_15, MSGBOX_AUTOCLOSE
	return

KID1TOURNEMENT4QUIZ_1:
# 911 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 0
	goto_if_eq KID1TOURNEMENT4QUIZ_5
KID1TOURNEMENT4QUIZ_4:
# 927 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 1
	goto_if_eq KID1TOURNEMENT4QUIZ_8
KID1TOURNEMENT4QUIZ_7:
# 942 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 2
	goto_if_eq KID1TOURNEMENT4QUIZ_14
KID1TOURNEMENT4QUIZ_13:
# 957 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 3
	goto_if_eq KID1TOURNEMENT4QUIZ_22
KID1TOURNEMENT4QUIZ_21:
# 972 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 4
	goto_if_eq KID1TOURNEMENT4QUIZ_30
KID1TOURNEMENT4QUIZ_29:
# 987 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 5
	goto_if_eq KID1TOURNEMENT4QUIZ_37
	return

KID1TOURNEMENT4QUIZ_5:
# 912 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 913 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 914 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_0, MSGBOX_AUTOCLOSE
# 915 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 916 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_2, MSGBOX_YESNO
# 917 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT4QUIZ_11
KID1TOURNEMENT4QUIZ_10:
# 921 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT4QUIZ_19
	goto KID1TOURNEMENT4QUIZ_4

KID1TOURNEMENT4QUIZ_8:
# 928 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 929 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 930 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_5, MSGBOX_AUTOCLOSE
# 931 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 932 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_6, MSGBOX_YESNO
# 933 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT4QUIZ_17
KID1TOURNEMENT4QUIZ_16:
# 937 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT4QUIZ_27
	goto KID1TOURNEMENT4QUIZ_7

KID1TOURNEMENT4QUIZ_11:
# 918 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 919 "data/maps/TundroWood_House1/scripts.pory"
	call KID5TOURNEMENTBattle1
	goto KID1TOURNEMENT4QUIZ_10

KID1TOURNEMENT4QUIZ_14:
# 943 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 944 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 945 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_7, MSGBOX_AUTOCLOSE
# 946 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 947 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_8, MSGBOX_YESNO
# 948 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT4QUIZ_25
KID1TOURNEMENT4QUIZ_24:
# 952 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT4QUIZ_35
	goto KID1TOURNEMENT4QUIZ_13

KID1TOURNEMENT4QUIZ_17:
# 934 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 935 "data/maps/TundroWood_House1/scripts.pory"
	call KID5TOURNEMENTBattle2
	goto KID1TOURNEMENT4QUIZ_16

KID1TOURNEMENT4QUIZ_19:
# 922 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 923 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT4QUIZ_4

KID1TOURNEMENT4QUIZ_22:
# 958 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 959 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 960 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_9, MSGBOX_AUTOCLOSE
# 961 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 962 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_10, MSGBOX_YESNO
# 963 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT4QUIZ_33
KID1TOURNEMENT4QUIZ_32:
# 967 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT4QUIZ_42
	goto KID1TOURNEMENT4QUIZ_21

KID1TOURNEMENT4QUIZ_25:
# 949 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 950 "data/maps/TundroWood_House1/scripts.pory"
	call KID5TOURNEMENTBattle3
	goto KID1TOURNEMENT4QUIZ_24

KID1TOURNEMENT4QUIZ_27:
# 938 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 939 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT4QUIZ_7

KID1TOURNEMENT4QUIZ_30:
# 973 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 974 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 975 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_11, MSGBOX_AUTOCLOSE
# 976 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 977 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_12, MSGBOX_YESNO
# 978 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT4QUIZ_40
KID1TOURNEMENT4QUIZ_39:
# 982 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT4QUIZ_47
	goto KID1TOURNEMENT4QUIZ_29

KID1TOURNEMENT4QUIZ_33:
# 964 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 965 "data/maps/TundroWood_House1/scripts.pory"
	call KID5TOURNEMENTBattle4
	goto KID1TOURNEMENT4QUIZ_32

KID1TOURNEMENT4QUIZ_35:
# 953 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 954 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT4QUIZ_13

KID1TOURNEMENT4QUIZ_37:
# 988 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 989 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 990 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_13, MSGBOX_AUTOCLOSE
# 991 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 992 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_14, MSGBOX_YESNO
# 993 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT4QUIZ_45
KID1TOURNEMENT4QUIZ_44:
# 997 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT4QUIZ_49
	return

KID1TOURNEMENT4QUIZ_40:
# 979 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 980 "data/maps/TundroWood_House1/scripts.pory"
	call KID5TOURNEMENTBattle5
	goto KID1TOURNEMENT4QUIZ_39

KID1TOURNEMENT4QUIZ_42:
# 968 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 969 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT4QUIZ_21

KID1TOURNEMENT4QUIZ_45:
# 994 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 995 "data/maps/TundroWood_House1/scripts.pory"
	call KID5TOURNEMENTBattle6
	goto KID1TOURNEMENT4QUIZ_44

KID1TOURNEMENT4QUIZ_47:
# 983 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 984 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT4QUIZ_29

KID1TOURNEMENT4QUIZ_49:
# 998 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 999 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	return


KID1TOURNEMENT5QUIZZ::
# 1014 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_ROUTE114_STATE, 0
	goto_if_eq KID1TOURNEMENT5QUIZZ_1
# 1110 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1111 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_15, MSGBOX_AUTOCLOSE
	return

KID1TOURNEMENT5QUIZZ_1:
# 1015 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 0
	goto_if_eq KID1TOURNEMENT5QUIZZ_5
KID1TOURNEMENT5QUIZZ_4:
# 1031 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 1
	goto_if_eq KID1TOURNEMENT5QUIZZ_8
KID1TOURNEMENT5QUIZZ_7:
# 1046 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 2
	goto_if_eq KID1TOURNEMENT5QUIZZ_14
KID1TOURNEMENT5QUIZZ_13:
# 1061 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 3
	goto_if_eq KID1TOURNEMENT5QUIZZ_22
KID1TOURNEMENT5QUIZZ_21:
# 1076 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 4
	goto_if_eq KID1TOURNEMENT5QUIZZ_30
KID1TOURNEMENT5QUIZZ_29:
# 1091 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_SCHOOL_TOURNAMENT, 5
	goto_if_eq KID1TOURNEMENT5QUIZZ_37
	return

KID1TOURNEMENT5QUIZZ_5:
# 1016 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1017 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1018 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_0, MSGBOX_AUTOCLOSE
# 1019 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 1020 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_2, MSGBOX_YESNO
# 1021 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT5QUIZZ_11
KID1TOURNEMENT5QUIZZ_10:
# 1025 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT5QUIZZ_19
	goto KID1TOURNEMENT5QUIZZ_4

KID1TOURNEMENT5QUIZZ_8:
# 1032 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1033 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1034 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_5, MSGBOX_AUTOCLOSE
# 1035 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 1036 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_6, MSGBOX_YESNO
# 1037 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT5QUIZZ_17
KID1TOURNEMENT5QUIZZ_16:
# 1041 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT5QUIZZ_27
	goto KID1TOURNEMENT5QUIZZ_7

KID1TOURNEMENT5QUIZZ_11:
# 1022 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 1023 "data/maps/TundroWood_House1/scripts.pory"
	call KID6TOURNEMENTBattle1
	goto KID1TOURNEMENT5QUIZZ_10

KID1TOURNEMENT5QUIZZ_14:
# 1047 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1048 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1049 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_7, MSGBOX_AUTOCLOSE
# 1050 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 1051 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_8, MSGBOX_YESNO
# 1052 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT5QUIZZ_25
KID1TOURNEMENT5QUIZZ_24:
# 1056 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT5QUIZZ_35
	goto KID1TOURNEMENT5QUIZZ_13

KID1TOURNEMENT5QUIZZ_17:
# 1038 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 1039 "data/maps/TundroWood_House1/scripts.pory"
	call KID6TOURNEMENTBattle2
	goto KID1TOURNEMENT5QUIZZ_16

KID1TOURNEMENT5QUIZZ_19:
# 1026 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 1027 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT5QUIZZ_4

KID1TOURNEMENT5QUIZZ_22:
# 1062 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1063 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1064 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_9, MSGBOX_AUTOCLOSE
# 1065 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 1066 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_10, MSGBOX_YESNO
# 1067 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT5QUIZZ_33
KID1TOURNEMENT5QUIZZ_32:
# 1071 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT5QUIZZ_42
	goto KID1TOURNEMENT5QUIZZ_21

KID1TOURNEMENT5QUIZZ_25:
# 1053 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 1054 "data/maps/TundroWood_House1/scripts.pory"
	call KID6TOURNEMENTBattle3
	goto KID1TOURNEMENT5QUIZZ_24

KID1TOURNEMENT5QUIZZ_27:
# 1042 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 1043 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT5QUIZZ_7

KID1TOURNEMENT5QUIZZ_30:
# 1077 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1078 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1079 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_11, MSGBOX_AUTOCLOSE
# 1080 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 1081 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_12, MSGBOX_YESNO
# 1082 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT5QUIZZ_40
KID1TOURNEMENT5QUIZZ_39:
# 1086 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT5QUIZZ_47
	goto KID1TOURNEMENT5QUIZZ_29

KID1TOURNEMENT5QUIZZ_33:
# 1068 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 1069 "data/maps/TundroWood_House1/scripts.pory"
	call KID6TOURNEMENTBattle4
	goto KID1TOURNEMENT5QUIZZ_32

KID1TOURNEMENT5QUIZZ_35:
# 1057 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 1058 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT5QUIZZ_13

KID1TOURNEMENT5QUIZZ_37:
# 1092 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1093 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1094 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_13, MSGBOX_AUTOCLOSE
# 1095 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_1, MSGBOX_AUTOCLOSE
# 1096 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_14, MSGBOX_YESNO
# 1097 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KID1TOURNEMENT5QUIZZ_45
KID1TOURNEMENT5QUIZZ_44:
# 1101 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq KID1TOURNEMENT5QUIZZ_49
	return

KID1TOURNEMENT5QUIZZ_40:
# 1083 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 1084 "data/maps/TundroWood_House1/scripts.pory"
	call KID6TOURNEMENTBattle5
	goto KID1TOURNEMENT5QUIZZ_39

KID1TOURNEMENT5QUIZZ_42:
# 1072 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 1073 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT5QUIZZ_21

KID1TOURNEMENT5QUIZZ_45:
# 1098 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_3, MSGBOX_AUTOCLOSE
# 1099 "data/maps/TundroWood_House1/scripts.pory"
	call KID6TOURNEMENTBattle6
	goto KID1TOURNEMENT5QUIZZ_44

KID1TOURNEMENT5QUIZZ_47:
# 1087 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 1088 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto KID1TOURNEMENT5QUIZZ_29

KID1TOURNEMENT5QUIZZ_49:
# 1102 "data/maps/TundroWood_House1/scripts.pory"
	msgbox KID1TOURNEMENTQUIZ_Text_4, MSGBOX_AUTOCLOSE
# 1103 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	return


# 1114 "data/maps/TundroWood_House1/scripts.pory"
oldpapygoesback:
# 1115 "data/maps/TundroWood_House1/scripts.pory"
	walk_left
# 1115 "data/maps/TundroWood_House1/scripts.pory"
	walk_left
# 1115 "data/maps/TundroWood_House1/scripts.pory"
	walk_left
# 1116 "data/maps/TundroWood_House1/scripts.pory"
	walk_up
# 1116 "data/maps/TundroWood_House1/scripts.pory"
	walk_up
	step_end

OldTeacherBattleCount::
# 1123 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_ROUTE107_STATE, 1
	goto_if_eq OldTeacherBattleCount_2
# 1131 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_ROUTE107_STATE, 2
	goto_if_eq OldTeacherBattleCount_5
OldTeacherBattleCount_4:
# 1138 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_ROUTE107_STATE, 3
	goto_if_eq OldTeacherBattleCount_8
OldTeacherBattleCount_7:
# 1257 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_ROUTE107_STATE, 4
	goto_if_eq OldTeacherBattleCount_10
	return

OldTeacherBattleCount_2:
# 1124 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1125 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1126 "data/maps/TundroWood_House1/scripts.pory"
	msgbox OldTeacherBattleCount_Text_0, MSGBOX_AUTOCLOSE
# 1127 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 2
# 1128 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end

OldTeacherBattleCount_5:
# 1132 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1133 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1134 "data/maps/TundroWood_House1/scripts.pory"
	msgbox OldTeacherBattleCount_Text_1, MSGBOX_AUTOCLOSE
# 1135 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	goto OldTeacherBattleCount_4

OldTeacherBattleCount_8:
# 1139 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1140 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1141 "data/maps/TundroWood_House1/scripts.pory"
	msgbox OldTeacherBattleCount_Text_2, MSGBOX_AUTOCLOSE
# 1142 "data/maps/TundroWood_House1/scripts.pory"
	random 5
# 1143 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq OldTeacherBattleCount_13
OldTeacherBattleCount_12:
# 1163 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq OldTeacherBattleCount_16
OldTeacherBattleCount_15:
# 1185 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq OldTeacherBattleCount_23
OldTeacherBattleCount_22:
# 1208 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq OldTeacherBattleCount_30
OldTeacherBattleCount_29:
# 1232 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq OldTeacherBattleCount_36
	goto OldTeacherBattleCount_7

OldTeacherBattleCount_10:
# 1258 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1259 "data/maps/TundroWood_House1/scripts.pory"
	msgbox OldTeacherBattleCount_Text_6, MSGBOX_AUTOCLOSE
# 1260 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	return

OldTeacherBattleCount_13:
# 1144 "data/maps/TundroWood_House1/scripts.pory"
	giveegg SPECIES_RIOLU
# 1145 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq OldTeacherBattleCount_18
# 1153 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq OldTeacherBattleCount_19
	goto OldTeacherBattleCount_12

OldTeacherBattleCount_16:
# 1164 "data/maps/TundroWood_House1/scripts.pory"
	giveegg SPECIES_MAGBY
# 1165 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq OldTeacherBattleCount_25
# 1173 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq OldTeacherBattleCount_26
	goto OldTeacherBattleCount_15

OldTeacherBattleCount_18:
# 1146 "data/maps/TundroWood_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1147 "data/maps/TundroWood_House1/scripts.pory"
	msgbox OldTeacherBattleCount_Text_3, MSGBOX_AUTOCLOSE
# 1148 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 4
# 1149 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end

OldTeacherBattleCount_19:
# 1154 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1155 "data/maps/TundroWood_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1156 "data/maps/TundroWood_House1/scripts.pory"
	msgbox OldTeacherBattleCount_Text_4, MSGBOX_AUTOCLOSE
# 1157 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 4
# 1158 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end

OldTeacherBattleCount_23:
# 1186 "data/maps/TundroWood_House1/scripts.pory"
	giveegg SPECIES_ELEKID
# 1187 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq OldTeacherBattleCount_32
# 1195 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq OldTeacherBattleCount_33
	goto OldTeacherBattleCount_22

OldTeacherBattleCount_25:
# 1166 "data/maps/TundroWood_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1167 "data/maps/TundroWood_House1/scripts.pory"
	msgbox OldTeacherBattleCount_Text_3, MSGBOX_AUTOCLOSE
# 1168 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 4
# 1169 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end

OldTeacherBattleCount_26:
# 1174 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1175 "data/maps/TundroWood_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1176 "data/maps/TundroWood_House1/scripts.pory"
	msgbox OldTeacherBattleCount_Text_4, MSGBOX_AUTOCLOSE
# 1177 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 4
# 1178 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end

OldTeacherBattleCount_30:
# 1209 "data/maps/TundroWood_House1/scripts.pory"
	giveegg SPECIES_TOGEPI
# 1210 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq OldTeacherBattleCount_38
# 1218 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq OldTeacherBattleCount_39
	goto OldTeacherBattleCount_29

OldTeacherBattleCount_32:
# 1188 "data/maps/TundroWood_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1189 "data/maps/TundroWood_House1/scripts.pory"
	msgbox OldTeacherBattleCount_Text_3, MSGBOX_AUTOCLOSE
# 1190 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 4
# 1191 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end

OldTeacherBattleCount_33:
# 1196 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1197 "data/maps/TundroWood_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1198 "data/maps/TundroWood_House1/scripts.pory"
	msgbox OldTeacherBattleCount_Text_4, MSGBOX_AUTOCLOSE
# 1199 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 4
# 1200 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end

OldTeacherBattleCount_36:
# 1233 "data/maps/TundroWood_House1/scripts.pory"
	giveegg SPECIES_PICHU
# 1234 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq OldTeacherBattleCount_42
# 1242 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq OldTeacherBattleCount_43
	goto OldTeacherBattleCount_7

OldTeacherBattleCount_38:
# 1211 "data/maps/TundroWood_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1212 "data/maps/TundroWood_House1/scripts.pory"
	msgbox OldTeacherBattleCount_Text_3, MSGBOX_AUTOCLOSE
# 1213 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 4
# 1214 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end

OldTeacherBattleCount_39:
# 1219 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1220 "data/maps/TundroWood_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1221 "data/maps/TundroWood_House1/scripts.pory"
	msgbox OldTeacherBattleCount_Text_5
# 1222 "data/maps/TundroWood_House1/scripts.pory"
	msgbox OldTeacherBattleCount_Text_4, MSGBOX_AUTOCLOSE
# 1223 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 4
# 1224 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end

OldTeacherBattleCount_42:
# 1235 "data/maps/TundroWood_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1236 "data/maps/TundroWood_House1/scripts.pory"
	msgbox OldTeacherBattleCount_Text_3, MSGBOX_AUTOCLOSE
# 1237 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 4
# 1238 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end

OldTeacherBattleCount_43:
# 1243 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1244 "data/maps/TundroWood_House1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 1245 "data/maps/TundroWood_House1/scripts.pory"
	msgbox OldTeacherBattleCount_Text_5
# 1246 "data/maps/TundroWood_House1/scripts.pory"
	msgbox OldTeacherBattleCount_Text_4, MSGBOX_AUTOCLOSE
# 1247 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_ROUTE107_STATE, 4
# 1248 "data/maps/TundroWood_House1/scripts.pory"
	releaseall
	end


# 1264 "data/maps/TundroWood_House1/scripts.pory"
exlamationmovementwalkup:
# 1265 "data/maps/TundroWood_House1/scripts.pory"
	walk_up
	step_end

HisuanFormsSwap::
# 1270 "data/maps/TundroWood_House1/scripts.pory"
	lockall
# 1271 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_0, MSGBOX_YESNO
# 1272 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HisuanFormsSwap_1
# 1366 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_18, MSGBOX_AUTOCLOSE
	return

HisuanFormsSwap_1:
# 1274 "data/maps/TundroWood_House1/scripts.pory"
	checkspecies SPECIES_GROWLITHE
# 1275 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HisuanFormsSwap_5
HisuanFormsSwap_4:
# 1279 "data/maps/TundroWood_House1/scripts.pory"
	checkspecies SPECIES_ARCANINE
# 1280 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HisuanFormsSwap_8
HisuanFormsSwap_7:
# 1284 "data/maps/TundroWood_House1/scripts.pory"
	checkspecies SPECIES_VOLTORB
# 1285 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HisuanFormsSwap_11
HisuanFormsSwap_10:
# 1289 "data/maps/TundroWood_House1/scripts.pory"
	checkspecies SPECIES_ELECTRODE
# 1290 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HisuanFormsSwap_14
HisuanFormsSwap_13:
# 1294 "data/maps/TundroWood_House1/scripts.pory"
	checkspecies SPECIES_QWILFISH
# 1295 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HisuanFormsSwap_17
HisuanFormsSwap_16:
# 1299 "data/maps/TundroWood_House1/scripts.pory"
	checkspecies SPECIES_TYPHLOSION
# 1300 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HisuanFormsSwap_20
HisuanFormsSwap_19:
# 1304 "data/maps/TundroWood_House1/scripts.pory"
	checkspecies SPECIES_SNEASEL
# 1305 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HisuanFormsSwap_23
HisuanFormsSwap_22:
# 1309 "data/maps/TundroWood_House1/scripts.pory"
	checkspecies SPECIES_SAMUROTT
# 1310 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HisuanFormsSwap_26
HisuanFormsSwap_25:
# 1314 "data/maps/TundroWood_House1/scripts.pory"
	checkspecies SPECIES_LILLIGANT
# 1315 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HisuanFormsSwap_29
HisuanFormsSwap_28:
# 1319 "data/maps/TundroWood_House1/scripts.pory"
	checkspecies SPECIES_ZORUA
# 1320 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HisuanFormsSwap_32
HisuanFormsSwap_31:
# 1324 "data/maps/TundroWood_House1/scripts.pory"
	checkspecies SPECIES_ZOROARK
# 1325 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HisuanFormsSwap_35
HisuanFormsSwap_34:
# 1329 "data/maps/TundroWood_House1/scripts.pory"
	checkspecies SPECIES_BRAVIARY
# 1330 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HisuanFormsSwap_38
HisuanFormsSwap_37:
# 1334 "data/maps/TundroWood_House1/scripts.pory"
	checkspecies SPECIES_SLIGGOO
# 1335 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HisuanFormsSwap_41
HisuanFormsSwap_40:
# 1339 "data/maps/TundroWood_House1/scripts.pory"
	checkspecies SPECIES_GOODRA
# 1340 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HisuanFormsSwap_44
HisuanFormsSwap_43:
# 1344 "data/maps/TundroWood_House1/scripts.pory"
	checkspecies SPECIES_AVALUGG
# 1345 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HisuanFormsSwap_47
HisuanFormsSwap_46:
# 1350 "data/maps/TundroWood_House1/scripts.pory"
	checkspecies SPECIES_DECIDUEYE
# 1351 "data/maps/TundroWood_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HisuanFormsSwap_49
# 1358 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_17, MSGBOX_AUTOCLOSE
	return

HisuanFormsSwap_5:
# 1276 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_1, MSGBOX_AUTOCLOSE
# 1277 "data/maps/TundroWood_House1/scripts.pory"
	call TundraWood_House1_GrowlithTrade
	goto HisuanFormsSwap_4

HisuanFormsSwap_8:
# 1281 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_2, MSGBOX_AUTOCLOSE
# 1282 "data/maps/TundroWood_House1/scripts.pory"
	call TundraWood_House1_ArcanineTrade
	goto HisuanFormsSwap_7

HisuanFormsSwap_11:
# 1286 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_3, MSGBOX_AUTOCLOSE
# 1287 "data/maps/TundroWood_House1/scripts.pory"
	call TundraWood_House1_VoltorbTrade
	goto HisuanFormsSwap_10

HisuanFormsSwap_14:
# 1291 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_4, MSGBOX_AUTOCLOSE
# 1292 "data/maps/TundroWood_House1/scripts.pory"
	call TundraWood_House1_ElectrodeTrade
	goto HisuanFormsSwap_13

HisuanFormsSwap_17:
# 1296 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_5, MSGBOX_AUTOCLOSE
# 1297 "data/maps/TundroWood_House1/scripts.pory"
	call TundraWood_House1_QwilfishTrade
	goto HisuanFormsSwap_16

HisuanFormsSwap_20:
# 1301 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_6, MSGBOX_AUTOCLOSE
# 1302 "data/maps/TundroWood_House1/scripts.pory"
	call TundraWood_House1_TyphlosionTrade
	goto HisuanFormsSwap_19

HisuanFormsSwap_23:
# 1306 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_7, MSGBOX_AUTOCLOSE
# 1307 "data/maps/TundroWood_House1/scripts.pory"
	call TundraWood_House1_SneaselTrade
	goto HisuanFormsSwap_22

HisuanFormsSwap_26:
# 1311 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_8, MSGBOX_AUTOCLOSE
# 1312 "data/maps/TundroWood_House1/scripts.pory"
	call TundraWood_House1_SamurottTrade
	goto HisuanFormsSwap_25

HisuanFormsSwap_29:
# 1316 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_9, MSGBOX_AUTOCLOSE
# 1317 "data/maps/TundroWood_House1/scripts.pory"
	call TundraWood_House1_LilligantTrade
	goto HisuanFormsSwap_28

HisuanFormsSwap_32:
# 1321 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_10, MSGBOX_AUTOCLOSE
# 1322 "data/maps/TundroWood_House1/scripts.pory"
	call TundraWood_House1_ZoruaTrade
	goto HisuanFormsSwap_31

HisuanFormsSwap_35:
# 1326 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_11, MSGBOX_AUTOCLOSE
# 1327 "data/maps/TundroWood_House1/scripts.pory"
	call TundraWood_House1_ZoroarkTrade
	goto HisuanFormsSwap_34

HisuanFormsSwap_38:
# 1331 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_12, MSGBOX_AUTOCLOSE
# 1332 "data/maps/TundroWood_House1/scripts.pory"
	call TundraWood_House1_BraviaryTrade
	goto HisuanFormsSwap_37

HisuanFormsSwap_41:
# 1336 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_13, MSGBOX_AUTOCLOSE
# 1337 "data/maps/TundroWood_House1/scripts.pory"
	call TundraWood_House1_SliggooTrade
	goto HisuanFormsSwap_40

HisuanFormsSwap_44:
# 1341 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_14, MSGBOX_AUTOCLOSE
# 1342 "data/maps/TundroWood_House1/scripts.pory"
	call TundraWood_House1_GoodraTrade
	goto HisuanFormsSwap_43

HisuanFormsSwap_47:
# 1346 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_15, MSGBOX_AUTOCLOSE
# 1347 "data/maps/TundroWood_House1/scripts.pory"
	call TundraWood_House1_AvaluggTrade
	goto HisuanFormsSwap_46

HisuanFormsSwap_49:
# 1352 "data/maps/TundroWood_House1/scripts.pory"
	msgbox HisuanFormsSwap_Text_16, MSGBOX_AUTOCLOSE
# 1353 "data/maps/TundroWood_House1/scripts.pory"
	call TundraWood_House1_DecidueyeTrade
	return


# 1371 "data/maps/TundroWood_House1/scripts.pory"

# 1372 "data/maps/TundroWood_House1/scripts.pory"
TundraWood_House1_GrowlithTrade::
# 1373 "data/maps/TundroWood_House1/scripts.pory"

# 1374 "data/maps/TundroWood_House1/scripts.pory"
    lock
# 1375 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1376 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_GROWLITH
# 1377 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1378 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1379 "data/maps/TundroWood_House1/scripts.pory"
	special ChoosePartyMon
# 1380 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1381 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_DeclineTrade
# 1382 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1383 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies 
# 1384 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTown_EventScript_NotRequestedMon 
# 1385 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1386 "data/maps/TundroWood_House1/scripts.pory"
	special CreateInGameTradePokemon 
# 1387 "data/maps/TundroWood_House1/scripts.pory"
	special DoInGameTradeScene 
# 1388 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1389 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1390 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1391 "data/maps/TundroWood_House1/scripts.pory"

# 1392 "data/maps/TundroWood_House1/scripts.pory"
	TundraWood_House1_ArcanineTrade::
# 1393 "data/maps/TundroWood_House1/scripts.pory"

# 1394 "data/maps/TundroWood_House1/scripts.pory"
    lock
# 1395 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1396 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ARCANINE
# 1397 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1398 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1399 "data/maps/TundroWood_House1/scripts.pory"
	special ChoosePartyMon
# 1400 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1401 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_DeclineTrade
# 1402 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1403 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies 
# 1404 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTown_EventScript_NotRequestedMon 
# 1405 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1406 "data/maps/TundroWood_House1/scripts.pory"
	special CreateInGameTradePokemon 
# 1407 "data/maps/TundroWood_House1/scripts.pory"
	special DoInGameTradeScene 
# 1408 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1409 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1410 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1411 "data/maps/TundroWood_House1/scripts.pory"

# 1412 "data/maps/TundroWood_House1/scripts.pory"
	TundraWood_House1_VoltorbTrade::
# 1413 "data/maps/TundroWood_House1/scripts.pory"

# 1414 "data/maps/TundroWood_House1/scripts.pory"
    lock
# 1415 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1416 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_VOLTORB
# 1417 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1418 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1419 "data/maps/TundroWood_House1/scripts.pory"
	special ChoosePartyMon
# 1420 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1421 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_DeclineTrade
# 1422 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1423 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies 
# 1424 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTown_EventScript_NotRequestedMon 
# 1425 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1426 "data/maps/TundroWood_House1/scripts.pory"
	special CreateInGameTradePokemon 
# 1427 "data/maps/TundroWood_House1/scripts.pory"
	special DoInGameTradeScene 
# 1428 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1429 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1430 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1431 "data/maps/TundroWood_House1/scripts.pory"
		
# 1432 "data/maps/TundroWood_House1/scripts.pory"
	TundraWood_House1_ElectrodeTrade::
# 1433 "data/maps/TundroWood_House1/scripts.pory"
    
# 1434 "data/maps/TundroWood_House1/scripts.pory"
	lock
# 1435 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1436 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ELECTRODE
# 1437 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1438 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1439 "data/maps/TundroWood_House1/scripts.pory"
	special ChoosePartyMon
# 1440 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1441 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_DeclineTrade
# 1442 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1443 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies 
# 1444 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTown_EventScript_NotRequestedMon 
# 1445 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1446 "data/maps/TundroWood_House1/scripts.pory"
	special CreateInGameTradePokemon 
# 1447 "data/maps/TundroWood_House1/scripts.pory"
	special DoInGameTradeScene 
# 1448 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1449 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1450 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1451 "data/maps/TundroWood_House1/scripts.pory"
	
# 1452 "data/maps/TundroWood_House1/scripts.pory"
	TundraWood_House1_TyphlosionTrade::
# 1453 "data/maps/TundroWood_House1/scripts.pory"
    lock
# 1454 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1455 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TYPHLOSION
# 1456 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1457 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1458 "data/maps/TundroWood_House1/scripts.pory"
	special ChoosePartyMon
# 1459 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1460 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_DeclineTrade
# 1461 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1462 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies 
# 1463 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTown_EventScript_NotRequestedMon 
# 1464 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1465 "data/maps/TundroWood_House1/scripts.pory"
	special CreateInGameTradePokemon 
# 1466 "data/maps/TundroWood_House1/scripts.pory"
	special DoInGameTradeScene 
# 1467 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1468 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1469 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1470 "data/maps/TundroWood_House1/scripts.pory"
	
# 1471 "data/maps/TundroWood_House1/scripts.pory"
	TundraWood_House1_QwilfishTrade::
# 1472 "data/maps/TundroWood_House1/scripts.pory"
	lock
# 1473 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1474 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_QWILFISH
# 1475 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1476 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1477 "data/maps/TundroWood_House1/scripts.pory"
	special ChoosePartyMon
# 1478 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1479 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_DeclineTrade
# 1480 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1481 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies 
# 1482 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTown_EventScript_NotRequestedMon 
# 1483 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1484 "data/maps/TundroWood_House1/scripts.pory"
	special CreateInGameTradePokemon 
# 1485 "data/maps/TundroWood_House1/scripts.pory"
	special DoInGameTradeScene 
# 1486 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1487 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1488 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1489 "data/maps/TundroWood_House1/scripts.pory"

# 1490 "data/maps/TundroWood_House1/scripts.pory"
	TundraWood_House1_SneaselTrade::
# 1491 "data/maps/TundroWood_House1/scripts.pory"
	lock
# 1492 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1493 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SNEASEL
# 1494 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1495 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1496 "data/maps/TundroWood_House1/scripts.pory"
	special ChoosePartyMon
# 1497 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1498 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_DeclineTrade
# 1499 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1500 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies 
# 1501 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTown_EventScript_NotRequestedMon 
# 1502 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1503 "data/maps/TundroWood_House1/scripts.pory"
	special CreateInGameTradePokemon 
# 1504 "data/maps/TundroWood_House1/scripts.pory"
	special DoInGameTradeScene 
# 1505 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1506 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1507 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1508 "data/maps/TundroWood_House1/scripts.pory"

# 1509 "data/maps/TundroWood_House1/scripts.pory"
	TundraWood_House1_SamurottTrade::
# 1510 "data/maps/TundroWood_House1/scripts.pory"
	lock
# 1511 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1512 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SAMUROTT
# 1513 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1514 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1515 "data/maps/TundroWood_House1/scripts.pory"
	special ChoosePartyMon
# 1516 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1517 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_DeclineTrade
# 1518 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1519 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies 
# 1520 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTown_EventScript_NotRequestedMon 
# 1521 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1522 "data/maps/TundroWood_House1/scripts.pory"
	special CreateInGameTradePokemon 
# 1523 "data/maps/TundroWood_House1/scripts.pory"
	special DoInGameTradeScene 
# 1524 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1525 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1526 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1527 "data/maps/TundroWood_House1/scripts.pory"

# 1528 "data/maps/TundroWood_House1/scripts.pory"
	TundraWood_House1_LilligantTrade::
# 1529 "data/maps/TundroWood_House1/scripts.pory"
	lock
# 1530 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1531 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_LILIGANT
# 1532 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1533 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1534 "data/maps/TundroWood_House1/scripts.pory"
	special ChoosePartyMon
# 1535 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1536 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_DeclineTrade
# 1537 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1538 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies 
# 1539 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTown_EventScript_NotRequestedMon 
# 1540 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1541 "data/maps/TundroWood_House1/scripts.pory"
	special CreateInGameTradePokemon 
# 1542 "data/maps/TundroWood_House1/scripts.pory"
	special DoInGameTradeScene 
# 1543 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1544 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1545 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1546 "data/maps/TundroWood_House1/scripts.pory"

# 1547 "data/maps/TundroWood_House1/scripts.pory"
	TundraWood_House1_ZoruaTrade::
# 1548 "data/maps/TundroWood_House1/scripts.pory"
	lock
# 1549 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1550 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ZORUA
# 1551 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1552 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1553 "data/maps/TundroWood_House1/scripts.pory"
	special ChoosePartyMon
# 1554 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1555 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_DeclineTrade
# 1556 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1557 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies 
# 1558 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTown_EventScript_NotRequestedMon 
# 1559 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1560 "data/maps/TundroWood_House1/scripts.pory"
	special CreateInGameTradePokemon 
# 1561 "data/maps/TundroWood_House1/scripts.pory"
	special DoInGameTradeScene 
# 1562 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1563 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1564 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1565 "data/maps/TundroWood_House1/scripts.pory"

# 1566 "data/maps/TundroWood_House1/scripts.pory"
	TundraWood_House1_ZoroarkTrade::
# 1567 "data/maps/TundroWood_House1/scripts.pory"
	lock
# 1568 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1569 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ZOROARK
# 1570 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1571 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1572 "data/maps/TundroWood_House1/scripts.pory"
	special ChoosePartyMon
# 1573 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1574 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_DeclineTrade
# 1575 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1576 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies 
# 1577 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTown_EventScript_NotRequestedMon 
# 1578 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1579 "data/maps/TundroWood_House1/scripts.pory"
	special CreateInGameTradePokemon 
# 1580 "data/maps/TundroWood_House1/scripts.pory"
	special DoInGameTradeScene 
# 1581 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1582 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1583 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1584 "data/maps/TundroWood_House1/scripts.pory"

# 1585 "data/maps/TundroWood_House1/scripts.pory"
	TundraWood_House1_BraviaryTrade::
# 1586 "data/maps/TundroWood_House1/scripts.pory"
	lock
# 1587 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1588 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_BRAVIARY
# 1589 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1590 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1591 "data/maps/TundroWood_House1/scripts.pory"
	special ChoosePartyMon
# 1592 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1593 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_DeclineTrade
# 1594 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1595 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies 
# 1596 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTown_EventScript_NotRequestedMon 
# 1597 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1598 "data/maps/TundroWood_House1/scripts.pory"
	special CreateInGameTradePokemon 
# 1599 "data/maps/TundroWood_House1/scripts.pory"
	special DoInGameTradeScene 
# 1600 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1601 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1602 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1603 "data/maps/TundroWood_House1/scripts.pory"

# 1604 "data/maps/TundroWood_House1/scripts.pory"
	TundraWood_House1_SliggooTrade::
# 1605 "data/maps/TundroWood_House1/scripts.pory"
	lock
# 1606 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1607 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_SLIGGOO
# 1608 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1609 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1610 "data/maps/TundroWood_House1/scripts.pory"
	special ChoosePartyMon
# 1611 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1612 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_DeclineTrade
# 1613 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1614 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies 
# 1615 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTown_EventScript_NotRequestedMon 
# 1616 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1617 "data/maps/TundroWood_House1/scripts.pory"
	special CreateInGameTradePokemon 
# 1618 "data/maps/TundroWood_House1/scripts.pory"
	special DoInGameTradeScene 
# 1619 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1620 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1621 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1622 "data/maps/TundroWood_House1/scripts.pory"

# 1623 "data/maps/TundroWood_House1/scripts.pory"
	TundraWood_House1_GoodraTrade::
# 1624 "data/maps/TundroWood_House1/scripts.pory"
	lock
# 1625 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1626 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_GOODRA
# 1627 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1628 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1629 "data/maps/TundroWood_House1/scripts.pory"
	special ChoosePartyMon
# 1630 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1631 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_DeclineTrade
# 1632 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1633 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies 
# 1634 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTown_EventScript_NotRequestedMon 
# 1635 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1636 "data/maps/TundroWood_House1/scripts.pory"
	special CreateInGameTradePokemon 
# 1637 "data/maps/TundroWood_House1/scripts.pory"
	special DoInGameTradeScene 
# 1638 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1639 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1640 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1641 "data/maps/TundroWood_House1/scripts.pory"

# 1642 "data/maps/TundroWood_House1/scripts.pory"
	TundraWood_House1_AvaluggTrade::
# 1643 "data/maps/TundroWood_House1/scripts.pory"
	lock
# 1644 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1645 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_AVALUGG
# 1646 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1647 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1648 "data/maps/TundroWood_House1/scripts.pory"
	special ChoosePartyMon
# 1649 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1650 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_DeclineTrade
# 1651 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1652 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies 
# 1653 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTown_EventScript_NotRequestedMon 
# 1654 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1655 "data/maps/TundroWood_House1/scripts.pory"
	special CreateInGameTradePokemon 
# 1656 "data/maps/TundroWood_House1/scripts.pory"
	special DoInGameTradeScene 
# 1657 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1658 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1659 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1660 "data/maps/TundroWood_House1/scripts.pory"

# 1661 "data/maps/TundroWood_House1/scripts.pory"
	TundraWood_House1_DecidueyeTrade::
# 1662 "data/maps/TundroWood_House1/scripts.pory"
	lock
# 1663 "data/maps/TundroWood_House1/scripts.pory"
	faceplayer
# 1664 "data/maps/TundroWood_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_DECIDUEYE
# 1665 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1666 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 1667 "data/maps/TundroWood_House1/scripts.pory"
	special ChoosePartyMon
# 1668 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1669 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, LittlerootTown_DeclineTrade
# 1670 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x8004
# 1671 "data/maps/TundroWood_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies 
# 1672 "data/maps/TundroWood_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, LittlerootTown_EventScript_NotRequestedMon 
# 1673 "data/maps/TundroWood_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 1674 "data/maps/TundroWood_House1/scripts.pory"
	special CreateInGameTradePokemon 
# 1675 "data/maps/TundroWood_House1/scripts.pory"
	special DoInGameTradeScene 
# 1676 "data/maps/TundroWood_House1/scripts.pory"
	waitstate
# 1677 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1678 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1679 "data/maps/TundroWood_House1/scripts.pory"
 
# 1680 "data/maps/TundroWood_House1/scripts.pory"
LittlerootTown_DeclineTrade::
# 1681 "data/maps/TundroWood_House1/scripts.pory"
	msgbox LittlerootTown_DeclineTrade_Text, MSGBOX_DEFAULT
# 1682 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1683 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1684 "data/maps/TundroWood_House1/scripts.pory"
 
# 1685 "data/maps/TundroWood_House1/scripts.pory"
LittlerootTown_EventScript_NotRequestedMon::
# 1686 "data/maps/TundroWood_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 1687 "data/maps/TundroWood_House1/scripts.pory"
	msgbox LittlerootTown_WrongMon_Text, MSGBOX_DEFAULT
# 1688 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1689 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1690 "data/maps/TundroWood_House1/scripts.pory"
 
# 1691 "data/maps/TundroWood_House1/scripts.pory"
LittlerootTown_EventScript_TradeCompleted::
# 1692 "data/maps/TundroWood_House1/scripts.pory"
	msgbox LittlerootTown_EventScript_TradeCompleted_Text, MSGBOX_DEFAULT
# 1693 "data/maps/TundroWood_House1/scripts.pory"
	release
# 1694 "data/maps/TundroWood_House1/scripts.pory"
	end
# 1695 "data/maps/TundroWood_House1/scripts.pory"
 
# 1696 "data/maps/TundroWood_House1/scripts.pory"
LittlerootTown_EventScript_TradeCompleted_Text::
# 1697 "data/maps/TundroWood_House1/scripts.pory"
	.string "Thanks for trading with me!$"
# 1698 "data/maps/TundroWood_House1/scripts.pory"
 
# 1699 "data/maps/TundroWood_House1/scripts.pory"
LittlerootTown_Text_WillingToTradeIt::
# 1700 "data/maps/TundroWood_House1/scripts.pory"
	.string "Check out this {STR_VAR_2}!\n"
# 1701 "data/maps/TundroWood_House1/scripts.pory"
	.string "Oh, I can see that you want it!\p"
# 1702 "data/maps/TundroWood_House1/scripts.pory"
	.string "I'll tell you what. I might be willing\n"
# 1703 "data/maps/TundroWood_House1/scripts.pory"
	.string "to trade it for a {STR_VAR_1}.$"
# 1704 "data/maps/TundroWood_House1/scripts.pory"
 
# 1705 "data/maps/TundroWood_House1/scripts.pory"
LittlerootTown_DeclineTrade_Text::
# 1706 "data/maps/TundroWood_House1/scripts.pory"
	.string "Thats too bad, maybe next time.$"
# 1707 "data/maps/TundroWood_House1/scripts.pory"
 
# 1708 "data/maps/TundroWood_House1/scripts.pory"
LittlerootTown_WrongMon_Text::
# 1709 "data/maps/TundroWood_House1/scripts.pory"
	.string "I'm sorry but that is not\n"
# 1710 "data/maps/TundroWood_House1/scripts.pory"
	.string "a {STR_VAR_1}, I cannot trade with you.$"

SchoolHouseTournamentTrigger_Text_0:
# 13 "data/maps/TundroWood_House1/scripts.pory"
	.string "Ah, I see... You must be the last\n"
	.string "student! Come over here-you're just in\l"
	.string "time. We are about to begin the grand\l"
	.string "Tournament of Knowledge and Battle!\l"
	.string "The winner gets a mysterie egg!$"

KID1TOURNEMENTQUIZ_Text_0:
# 492 "data/maps/TundroWood_House1/scripts.pory"
	.string "Hah! I will be the first to win this\n"
	.string "tournament! I've studied every type,\l"
	.string "every move… You don’t stand a chance\l"
	.string "against me! Get ready for an\l"
	.string "unforgettable lesson!$"

KID1TOURNEMENTQUIZ_Text_1:
# 493 "data/maps/TundroWood_House1/scripts.pory"
	.string "Quiz Time!$"

KID1TOURNEMENTQUIZ_Text_2:
# 494 "data/maps/TundroWood_House1/scripts.pory"
	.string "Pikachu is an Electric-type Pokémon.\n"
	.string "Yes or No?$"

KID1TOURNEMENTQUIZ_Text_3:
# 496 "data/maps/TundroWood_House1/scripts.pory"
	.string "Well done! Now let's fight!$"

KID1TOURNEMENTQUIZ_Text_4:
# 500 "data/maps/TundroWood_House1/scripts.pory"
	.string "That's not right try again.$"

KID1TOURNEMENTQUIZ_Text_5:
# 508 "data/maps/TundroWood_House1/scripts.pory"
	.string "Hmm… You managed to pass the first\n"
	.string "round? Interesting. But the real\l"
	.string "challenge starts now. A great Trainer\l"
	.string "doesn’t rely only on strength but also\l"
	.string "on strategy! Let’s see if you’re up to\l"
	.string "the task.$"

KID1TOURNEMENTQUIZ_Text_6:
# 510 "data/maps/TundroWood_House1/scripts.pory"
	.string "Can a Pokémon have more than two\n"
	.string "active status conditions at the same\l"
	.string "time? Yes or No?$"

KID1TOURNEMENTQUIZ_Text_7:
# 524 "data/maps/TundroWood_House1/scripts.pory"
	.string "You’re stronger than I thought... But I\n"
	.string "can’t give up now! If I lose, how can I\l"
	.string "prove that all my training was worth it?\l"
	.string "Alright, I’ll give it my all!$"

KID1TOURNEMENTQUIZ_Text_8:
# 526 "data/maps/TundroWood_House1/scripts.pory"
	.string "A Water-type Pokémon can be burned by\n"
	.string "a Fire-type move. Yes or No?$"

KID1TOURNEMENTQUIZ_Text_9:
# 539 "data/maps/TundroWood_House1/scripts.pory"
	.string "We finally meet… I knew you would make\n"
	.string "it this far. But I’ve also given\l"
	.string "everything to reach this moment! This\l"
	.string "battle will decide who truly deserves a\l"
	.string "spot in the final. Don’t hold back!$"

KID1TOURNEMENTQUIZ_Text_10:
# 541 "data/maps/TundroWood_House1/scripts.pory"
	.string "The ability Intimidate lowers the\n"
	.string "opponent’s Special Attack. Yes or No?$"

KID1TOURNEMENTQUIZ_Text_11:
# 554 "data/maps/TundroWood_House1/scripts.pory"
	.string "Impressive. Very impressive. Few\n"
	.string "students make it this far… But I am the\l"
	.string "best for a reason. This tournament is\l"
	.string "not just about strength, but also\l"
	.string "knowledge and mastery. Are you ready to\l"
	.string "face the Academy’s greatest challenge?$"

KID1TOURNEMENTQUIZ_Text_12:
# 556 "data/maps/TundroWood_House1/scripts.pory"
	.string "A Pokémon can have more than four\n"
	.string "moves in battle. Yes or No?$"

KID1TOURNEMENTQUIZ_Text_13:
# 569 "data/maps/TundroWood_House1/scripts.pory"
	.string "Incredible! You have proven yourself\n"
	.string "not only as an outstanding Trainer but\l"
	.string "also as a true Pokémon scholar. On\l"
	.string "behalf of the entire Academy, I\l"
	.string "congratulate you. Here is your reward,\l"
	.string "Champion of the Tournament of\l"
	.string "Knowledge and Battle!$"

KID1TOURNEMENTQUIZ_Text_14:
# 571 "data/maps/TundroWood_House1/scripts.pory"
	.string "Charizard is a Dragon-type Pokémon.\n"
	.string "Yes or No?$"

KID1TOURNEMENTQUIZ_Text_15:
# 586 "data/maps/TundroWood_House1/scripts.pory"
	.string "I already lost, their more participants!$"

OldTeacherBattleCount_Text_0:
# 1126 "data/maps/TundroWood_House1/scripts.pory"
	.string "The first one to beat every participant\n"
	.string "and winning all quiz will earn a\l"
	.string "mysterige egg!$"

OldTeacherBattleCount_Text_1:
# 1134 "data/maps/TundroWood_House1/scripts.pory"
	.string "You are not there yet, good luck!$"

OldTeacherBattleCount_Text_2:
# 1141 "data/maps/TundroWood_House1/scripts.pory"
	.string "Congarts, here!$"

OldTeacherBattleCount_Text_3:
# 1147 "data/maps/TundroWood_House1/scripts.pory"
	.string "You received an egg!$"

OldTeacherBattleCount_Text_4:
# 1156 "data/maps/TundroWood_House1/scripts.pory"
	.string "The egg has been sent to your pc!$"

OldTeacherBattleCount_Text_5:
# 1221 "data/maps/TundroWood_House1/scripts.pory"
	.string "You party is full!$"

OldTeacherBattleCount_Text_6:
# 1259 "data/maps/TundroWood_House1/scripts.pory"
	.string "I couldn't be happier to hand over an\n"
	.string "egg to such a promising student!$"

HisuanFormsSwap_Text_0:
# 1271 "data/maps/TundroWood_House1/scripts.pory"
	.string "I've been studying Pokémon from the\n"
	.string "Hisui region and discovered a way to\l"
	.string "restore certain Pokémon to their\l"
	.string "ancient forms. If you have a compatible\l"
	.string "Pokémon, I can awaken its Hisuian\l"
	.string "lineage! Would you like to try?$"

HisuanFormsSwap_Text_1:
# 1276 "data/maps/TundroWood_House1/scripts.pory"
	.string "Oh, that's a Growlithe! He will now be\n"
	.string "fire and rock type$"

HisuanFormsSwap_Text_2:
# 1281 "data/maps/TundroWood_House1/scripts.pory"
	.string "Oh, that's a Arcanine! He will now be fire\n"
	.string "and rock type$"

HisuanFormsSwap_Text_3:
# 1286 "data/maps/TundroWood_House1/scripts.pory"
	.string "Oh, that's a Voltorb! He will now be\n"
	.string "Electric and Grass type$"

HisuanFormsSwap_Text_4:
# 1291 "data/maps/TundroWood_House1/scripts.pory"
	.string "Oh, that's a Electrode! He will now be\n"
	.string "Electric and Grass type$"

HisuanFormsSwap_Text_5:
# 1296 "data/maps/TundroWood_House1/scripts.pory"
	.string "Oh, that's a Qwilfish! He will now be Dark\n"
	.string "and Poison type$"

HisuanFormsSwap_Text_6:
# 1301 "data/maps/TundroWood_House1/scripts.pory"
	.string "Oh, that's a Typhlosion! He will now be\n"
	.string "Fire and Ghost type$"

HisuanFormsSwap_Text_7:
# 1306 "data/maps/TundroWood_House1/scripts.pory"
	.string "Oh, that's a Sneasel! He will now be\n"
	.string "Fight and Poison type$"

HisuanFormsSwap_Text_8:
# 1311 "data/maps/TundroWood_House1/scripts.pory"
	.string "Oh, that's a Samurott! He will now be\n"
	.string "Water and Dark type$"

HisuanFormsSwap_Text_9:
# 1316 "data/maps/TundroWood_House1/scripts.pory"
	.string "Oh, that's a Lilligant! He will now be\n"
	.string "Grass and Fight type$"

HisuanFormsSwap_Text_10:
# 1321 "data/maps/TundroWood_House1/scripts.pory"
	.string "Oh, that's a Zorua! He will now be Normal\n"
	.string "and Ghost type$"

HisuanFormsSwap_Text_11:
# 1326 "data/maps/TundroWood_House1/scripts.pory"
	.string "Oh, that's a Zoroark! He will now be\n"
	.string "Normal and Ghost type$"

HisuanFormsSwap_Text_12:
# 1331 "data/maps/TundroWood_House1/scripts.pory"
	.string "Oh, that's a Braviary! He will now be\n"
	.string "Psychic and Flying type$"

HisuanFormsSwap_Text_13:
# 1336 "data/maps/TundroWood_House1/scripts.pory"
	.string "Oh, that's a Sliggo! He will now be Steel\n"
	.string "and Dragon type$"

HisuanFormsSwap_Text_14:
# 1341 "data/maps/TundroWood_House1/scripts.pory"
	.string "Oh, that's a Goodra! He will now be Steel\n"
	.string "and Dragon type$"

HisuanFormsSwap_Text_15:
# 1346 "data/maps/TundroWood_House1/scripts.pory"
	.string "Oh, that's a Avalugg! He will now be Ice\n"
	.string "and Rock type$"

HisuanFormsSwap_Text_16:
# 1352 "data/maps/TundroWood_House1/scripts.pory"
	.string "Oh, that's a Decidueye! He will now be\n"
	.string "Grass and Fight type$"

HisuanFormsSwap_Text_17:
# 1358 "data/maps/TundroWood_House1/scripts.pory"
	.string "Sorry, but you don't have any Requested\n"
	.string "Pokemon.$"

HisuanFormsSwap_Text_18:
# 1366 "data/maps/TundroWood_House1/scripts.pory"
	.string "If you change your mind, feel free to\n"
	.string "come back anytime!$"

kid1intro1::
# 437 "data/maps/TundroWood_House1/scripts.pory"
	.string "Hah! I’ll be the first to win this\n"
	.string "tournament. Prepare to be defeated!$"

kid1outro1::
# 441 "data/maps/TundroWood_House1/scripts.pory"
	.string "This can’t be… I’ll get you next time!$"

kid1intro2::
# 445 "data/maps/TundroWood_House1/scripts.pory"
	.string "You survived the first round, but can\n"
	.string "you handle a real challenge? Let’s put\l"
	.string "your skills to the test!$"

kid1outro2::
# 449 "data/maps/TundroWood_House1/scripts.pory"
	.string "Not bad. You outplayed me this time…\n"
	.string "but don’t get overconfident!$"

kid1intro3::
# 453 "data/maps/TundroWood_House1/scripts.pory"
	.string "Only the strongest remain… I won’t let\n"
	.string "my journey end here!$"

kid1outro3::
# 457 "data/maps/TundroWood_House1/scripts.pory"
	.string "I fought with everything I had… You\n"
	.string "really are something else.$"

kid1intro4::
# 461 "data/maps/TundroWood_House1/scripts.pory"
	.string "I knew we’d face off eventually. This is\n"
	.string "where things get serious!$"

kid1outro4::
# 465 "data/maps/TundroWood_House1/scripts.pory"
	.string "I was so close… but you deserved this\n"
	.string "win. Go take the title!$"

kid1intro5::
# 469 "data/maps/TundroWood_House1/scripts.pory"
	.string "You’ve proven yourself, but the final\n"
	.string "battle is where true champions are\l"
	.string "made!$"

kid1outro5::
# 473 "data/maps/TundroWood_House1/scripts.pory"
	.string "I can’t believe it… You really did it. The\n"
	.string "tournament has a new champion!$"

kid1intro6::
# 477 "data/maps/TundroWood_House1/scripts.pory"
	.string "You’ve overcome every challenge… Now,\n"
	.string "accept your title with pride!$"

kid1outro6::
# 481 "data/maps/TundroWood_House1/scripts.pory"
	.string "This victory will be remembered in\n"
	.string "Academy history. Well done, Champion!$"
