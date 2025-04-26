# 1 "data/maps/TundrawoodCity_Restaurant/scripts.pory"

# 2 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
TundrawoodCity_Restaurant_MapScripts::
# 3 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	.byte 0

COOKCHEFRECIPEEMULTICHOICE::
# 8 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	lockall
# 9 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	faceplayer
# 10 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox COOKCHEFRECIPEEMULTICHOICE_Text_0, MSGBOX_YESNO
# 11 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq COOKCHEFRECIPEEMULTICHOICE_2
COOKCHEFRECIPEEMULTICHOICE_1:
# 28 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq COOKCHEFRECIPEEMULTICHOICE_4
	return

COOKCHEFRECIPEEMULTICHOICE_2:
# 12 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox COOKCHEFRECIPEEMULTICHOICE_Text_1, MSGBOX_AUTOCLOSE
# 13 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	multichoice 25, 5, MULTI_COOK_RECIPEE, 0
# 14 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq COOKCHEFRECIPEEMULTICHOICE_7
COOKCHEFRECIPEEMULTICHOICE_6:
# 17 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq COOKCHEFRECIPEEMULTICHOICE_10
COOKCHEFRECIPEEMULTICHOICE_9:
# 20 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq COOKCHEFRECIPEEMULTICHOICE_13
COOKCHEFRECIPEEMULTICHOICE_12:
# 23 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq COOKCHEFRECIPEEMULTICHOICE_15
	goto COOKCHEFRECIPEEMULTICHOICE_1

COOKCHEFRECIPEEMULTICHOICE_4:
# 29 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	lockall
# 30 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox COOKCHEFRECIPEEMULTICHOICE_Text_2, MSGBOX_AUTOCLOSE
# 31 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

COOKCHEFRECIPEEMULTICHOICE_7:
# 15 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	call LeftoverCraft
	goto COOKCHEFRECIPEEMULTICHOICE_6

COOKCHEFRECIPEEMULTICHOICE_10:
# 18 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	call HoneyCraft
	goto COOKCHEFRECIPEEMULTICHOICE_9

COOKCHEFRECIPEEMULTICHOICE_13:
# 21 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	call LavacoockiCraft
	goto COOKCHEFRECIPEEMULTICHOICE_12

COOKCHEFRECIPEEMULTICHOICE_15:
# 24 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	call MoomoMilkCraft
	goto COOKCHEFRECIPEEMULTICHOICE_1


LavacoockiCraft::
# 42 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, 0
	goto_if_eq LavacoockiCraft_2
LavacoockiCraft_1:
# 113 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, 1
	goto_if_eq LavacoockiCraft_4
	return

LavacoockiCraft_2:
# 43 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	lockall
# 44 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_0, MSGBOX_AUTOCLOSE
# 45 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_1, MSGBOX_AUTOCLOSE
# 46 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	checkitem ITEM_HONEY, 2
# 47 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavacoockiCraft_7
# 52 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LavacoockiCraft_13
	goto LavacoockiCraft_1

LavacoockiCraft_4:
# 114 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	lockall
# 115 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_5, MSGBOX_AUTOCLOSE
# 116 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	givemon SPECIES_MILCERY, 1, ITEM_POKE_DOLL
# 117 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LavacoockiCraft_9
# 126 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LavacoockiCraft_10
	return

LavacoockiCraft_7:
# 48 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_2, MSGBOX_AUTOCLOSE
# 49 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

LavacoockiCraft_9:
# 118 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 119 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_6, MSGBOX_AUTOCLOSE
# 120 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_ABNORMAL_WEATHER_LOCATION, 0
# 121 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

LavacoockiCraft_10:
# 127 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 128 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_6, MSGBOX_AUTOCLOSE
# 129 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_ABNORMAL_WEATHER_LOCATION, 0
# 130 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

LavacoockiCraft_13:
# 53 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	checkitem ITEM_CHERI_BERRY, 1
# 54 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LavacoockiCraft_16
# 59 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LavacoockiCraft_18
	goto LavacoockiCraft_1

LavacoockiCraft_16:
# 55 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_2, MSGBOX_AUTOCLOSE
# 56 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

LavacoockiCraft_18:
# 60 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 0
	goto_if_eq LavacoockiCraft_21
# 70 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 1
	goto_if_eq LavacoockiCraft_24
# 80 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 2
	goto_if_eq LavacoockiCraft_27
# 90 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 3
	goto_if_eq LavacoockiCraft_30
# 100 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 4
	goto_if_eq LavacoockiCraft_32
	goto LavacoockiCraft_1

LavacoockiCraft_21:
# 61 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_HONEY, 2
# 62 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 63 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_CHERI_BERRY, 1
# 64 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 65 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_LAVA_COOKIE, 5
# 66 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_PC_BOX_TO_SEND_MON, 1
# 67 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

LavacoockiCraft_24:
# 71 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_HONEY, 2
# 72 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 73 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_CHERI_BERRY, 1
# 74 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 75 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_LAVA_COOKIE, 5
# 76 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_PC_BOX_TO_SEND_MON, 2
# 77 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

LavacoockiCraft_27:
# 81 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_HONEY, 2
# 82 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 83 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_CHERI_BERRY, 1
# 84 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 85 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_LAVA_COOKIE, 5
# 86 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_PC_BOX_TO_SEND_MON, 3
# 87 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

LavacoockiCraft_30:
# 91 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_HONEY, 2
# 92 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 93 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_CHERI_BERRY, 1
# 94 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 95 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_LAVA_COOKIE, 5
# 96 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_PC_BOX_TO_SEND_MON, 4
# 97 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_ABNORMAL_WEATHER_LOCATION, 1
# 98 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

LavacoockiCraft_32:
# 101 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_HONEY, 2
# 102 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 103 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_CHERI_BERRY, 1
# 104 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 105 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_LAVA_COOKIE, 5
# 106 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end


LeftoverCraft::
# 139 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, 0
	goto_if_eq LeftoverCraft_2
LeftoverCraft_1:
# 210 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, 1
	goto_if_eq LeftoverCraft_4
	return

LeftoverCraft_2:
# 140 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	lockall
# 141 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LeftoverCraft_Text_0, MSGBOX_AUTOCLOSE
# 142 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LeftoverCraft_Text_1, MSGBOX_AUTOCLOSE
# 143 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	checkitem ITEM_ORAN_BERRY, 3
# 144 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LeftoverCraft_7
# 149 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LeftoverCraft_13
	goto LeftoverCraft_1

LeftoverCraft_4:
# 211 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	lockall
# 212 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_5, MSGBOX_AUTOCLOSE
# 213 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	givemon SPECIES_MILCERY, 1, ITEM_POKE_DOLL
# 214 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq LeftoverCraft_9
# 223 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq LeftoverCraft_10
	return

LeftoverCraft_7:
# 145 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_2, MSGBOX_AUTOCLOSE
# 146 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

LeftoverCraft_9:
# 215 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 216 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_6, MSGBOX_AUTOCLOSE
# 217 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_ABNORMAL_WEATHER_LOCATION, 0
# 218 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

LeftoverCraft_10:
# 224 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 225 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_6, MSGBOX_AUTOCLOSE
# 226 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_ABNORMAL_WEATHER_LOCATION, 0
# 227 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

LeftoverCraft_13:
# 150 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	checkitem ITEM_SITRUS_BERRY, 4
# 151 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq LeftoverCraft_16
# 156 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LeftoverCraft_18
	goto LeftoverCraft_1

LeftoverCraft_16:
# 152 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_2, MSGBOX_AUTOCLOSE
# 153 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

LeftoverCraft_18:
# 157 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 0
	goto_if_eq LeftoverCraft_21
# 167 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 1
	goto_if_eq LeftoverCraft_24
# 177 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 2
	goto_if_eq LeftoverCraft_27
# 187 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 3
	goto_if_eq LeftoverCraft_30
# 197 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 4
	goto_if_eq LeftoverCraft_32
	goto LeftoverCraft_1

LeftoverCraft_21:
# 158 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_ORAN_BERRY, 3
# 159 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 160 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_SITRUS_BERRY, 4
# 161 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 162 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 163 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_PC_BOX_TO_SEND_MON, 1
# 164 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

LeftoverCraft_24:
# 168 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_ORAN_BERRY, 3
# 169 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 170 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_SITRUS_BERRY, 4
# 171 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 172 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 173 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_PC_BOX_TO_SEND_MON, 2
# 174 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

LeftoverCraft_27:
# 178 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_ORAN_BERRY, 3
# 179 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 180 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_SITRUS_BERRY, 4
# 181 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 182 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 183 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_PC_BOX_TO_SEND_MON, 3
# 184 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

LeftoverCraft_30:
# 188 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_ORAN_BERRY, 3
# 189 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 190 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_SITRUS_BERRY, 4
# 191 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 192 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 193 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_PC_BOX_TO_SEND_MON, 4
# 194 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_ABNORMAL_WEATHER_LOCATION, 1
# 195 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

LeftoverCraft_32:
# 198 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_ORAN_BERRY, 3
# 199 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 200 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_SITRUS_BERRY, 4
# 201 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 202 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_LEFTOVERS
# 203 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end


HoneyCraft::
# 239 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, 0
	goto_if_eq HoneyCraft_2
HoneyCraft_1:
# 310 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, 1
	goto_if_eq HoneyCraft_4
	return

HoneyCraft_2:
# 240 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	lockall
# 241 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox HoneyCraft_Text_0, MSGBOX_AUTOCLOSE
# 242 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox HoneyCraft_Text_1, MSGBOX_AUTOCLOSE
# 243 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	checkitem ITEM_PECHA_BERRY, 2
# 244 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq HoneyCraft_7
# 249 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HoneyCraft_13
	goto HoneyCraft_1

HoneyCraft_4:
# 311 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	lockall
# 312 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_5, MSGBOX_AUTOCLOSE
# 313 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	givemon SPECIES_MILCERY, 1, ITEM_POKE_DOLL
# 314 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq HoneyCraft_9
# 323 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq HoneyCraft_10
	return

HoneyCraft_7:
# 245 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_2, MSGBOX_AUTOCLOSE
# 246 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

HoneyCraft_9:
# 315 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 316 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_6, MSGBOX_AUTOCLOSE
# 317 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_ABNORMAL_WEATHER_LOCATION, 0
# 318 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

HoneyCraft_10:
# 324 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 325 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_6, MSGBOX_AUTOCLOSE
# 326 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_ABNORMAL_WEATHER_LOCATION, 0
# 327 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

HoneyCraft_13:
# 250 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	checkitem ITEM_RAWST_BERRY, 1
# 251 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq HoneyCraft_16
# 256 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq HoneyCraft_18
	goto HoneyCraft_1

HoneyCraft_16:
# 252 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_2, MSGBOX_AUTOCLOSE
# 253 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

HoneyCraft_18:
# 257 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 0
	goto_if_eq HoneyCraft_21
# 267 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 1
	goto_if_eq HoneyCraft_24
# 277 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 2
	goto_if_eq HoneyCraft_27
# 287 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 3
	goto_if_eq HoneyCraft_30
# 297 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 4
	goto_if_eq HoneyCraft_32
	goto HoneyCraft_1

HoneyCraft_21:
# 258 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_RAWST_BERRY, 1
# 259 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 260 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_PECHA_BERRY, 2
# 261 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 262 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_HONEY, 2
# 263 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_PC_BOX_TO_SEND_MON, 1
# 264 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

HoneyCraft_24:
# 268 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_RAWST_BERRY, 1
# 269 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 270 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_PECHA_BERRY, 2
# 271 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 272 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_HONEY, 2
# 273 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_PC_BOX_TO_SEND_MON, 2
# 274 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

HoneyCraft_27:
# 278 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_RAWST_BERRY, 1
# 279 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 280 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_PECHA_BERRY, 2
# 281 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 282 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_HONEY, 2
# 283 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_PC_BOX_TO_SEND_MON, 3
# 284 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

HoneyCraft_30:
# 288 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_RAWST_BERRY, 1
# 289 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 290 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_PECHA_BERRY, 2
# 291 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 292 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_HONEY, 2
# 293 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_PC_BOX_TO_SEND_MON, 4
# 294 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_ABNORMAL_WEATHER_LOCATION, 1
# 295 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end

HoneyCraft_32:
# 298 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_RAWST_BERRY, 1
# 299 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 300 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_PECHA_BERRY, 2
# 301 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 302 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_HONEY, 2
# 303 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	end


MoomoMilkCraft::
# 339 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, 0
	goto_if_eq MoomoMilkCraft_2
MoomoMilkCraft_1:
# 403 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_ABNORMAL_WEATHER_LOCATION, 1
	goto_if_eq MoomoMilkCraft_4
	return

MoomoMilkCraft_2:
# 340 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	lockall
# 341 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox MoomoMilkCraft_Text_0, MSGBOX_AUTOCLOSE
# 342 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox MoomoMilkCraft_Text_1, MSGBOX_AUTOCLOSE
# 343 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	checkitem ITEM_ORAN_BERRY, 2
# 344 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MoomoMilkCraft_7
MoomoMilkCraft_6:
# 348 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MoomoMilkCraft_13
	goto MoomoMilkCraft_1

MoomoMilkCraft_4:
# 404 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	lockall
# 405 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_5, MSGBOX_AUTOCLOSE
# 406 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	givemon SPECIES_MILCERY, 1, ITEM_POKE_DOLL
# 407 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq MoomoMilkCraft_9
# 415 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq MoomoMilkCraft_10
	return

MoomoMilkCraft_7:
# 345 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_2, MSGBOX_AUTOCLOSE
# 346 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	goto MoomoMilkCraft_6

MoomoMilkCraft_9:
# 408 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 409 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_6, MSGBOX_AUTOCLOSE
# 410 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_ABNORMAL_WEATHER_LOCATION, 0
# 411 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	return

MoomoMilkCraft_10:
# 416 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 417 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_6, MSGBOX_AUTOCLOSE
# 418 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_ABNORMAL_WEATHER_LOCATION, 0
# 419 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	return

MoomoMilkCraft_13:
# 349 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	checkitem ITEM_LAVA_COOKIE, 1
# 350 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MoomoMilkCraft_16
MoomoMilkCraft_15:
# 354 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MoomoMilkCraft_18
	goto MoomoMilkCraft_1

MoomoMilkCraft_16:
# 351 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_2, MSGBOX_AUTOCLOSE
# 352 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	goto MoomoMilkCraft_15

MoomoMilkCraft_18:
# 355 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 0
	goto_if_eq MoomoMilkCraft_21
MoomoMilkCraft_20:
# 364 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 1
	goto_if_eq MoomoMilkCraft_24
MoomoMilkCraft_23:
# 373 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 2
	goto_if_eq MoomoMilkCraft_27
MoomoMilkCraft_26:
# 382 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 3
	goto_if_eq MoomoMilkCraft_30
MoomoMilkCraft_29:
# 391 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	compare VAR_PC_BOX_TO_SEND_MON, 4
	goto_if_eq MoomoMilkCraft_32
	goto MoomoMilkCraft_1

MoomoMilkCraft_21:
# 356 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_LAVA_COOKIE, 1
# 357 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 358 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_ORAN_BERRY, 2
# 359 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 360 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_MOOMOO_MILK, 1
# 361 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_PC_BOX_TO_SEND_MON, 1
# 362 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	goto MoomoMilkCraft_20

MoomoMilkCraft_24:
# 365 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_LAVA_COOKIE, 1
# 366 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 367 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_ORAN_BERRY, 2
# 368 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 369 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_MOOMOO_MILK, 1
# 370 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_PC_BOX_TO_SEND_MON, 2
# 371 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	goto MoomoMilkCraft_23

MoomoMilkCraft_27:
# 374 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_LAVA_COOKIE, 1
# 375 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 376 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_ORAN_BERRY, 2
# 377 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 378 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_MOOMOO_MILK, 1
# 379 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_PC_BOX_TO_SEND_MON, 3
# 380 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	goto MoomoMilkCraft_26

MoomoMilkCraft_30:
# 383 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_LAVA_COOKIE, 1
# 384 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 385 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_ORAN_BERRY, 2
# 386 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 387 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_MOOMOO_MILK, 1
# 388 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_PC_BOX_TO_SEND_MON, 4
# 389 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	setvar VAR_ABNORMAL_WEATHER_LOCATION, 1
# 390 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	goto MoomoMilkCraft_29

MoomoMilkCraft_32:
# 392 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_LAVA_COOKIE, 1
# 393 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_3, MSGBOX_AUTOCLOSE
# 394 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	removeitem ITEM_ORAN_BERRY, 2
# 395 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	msgbox LavacoockiCraft_Text_4
# 396 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	giveitem ITEM_MOOMOO_MILK, 1
# 397 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	releaseall
	goto MoomoMilkCraft_1


COOKCHEFRECIPEEMULTICHOICE_Text_0:
# 10 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	.string "Hello, traveler! I can prepare some\n"
	.string "delicious dishes for you, but I'll need\l"
	.string "certain ingredients. Would you like to\l"
	.string "try?$"

COOKCHEFRECIPEEMULTICHOICE_Text_1:
# 12 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	.string "Alrighty, choose one of these recipes!$"

COOKCHEFRECIPEEMULTICHOICE_Text_2:
# 30 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	.string "Hope to see you again!$"

LavacoockiCraft_Text_0:
# 44 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	.string "Alright, so you've chosen Lava Cookie!\n"
	.string "It's a pretty easy recipe, and I'll give\l"
	.string "you 2 of them.$"

LavacoockiCraft_Text_1:
# 45 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	.string "Ill need 2 honey, and 1 Cherry berries!$"

LavacoockiCraft_Text_2:
# 48 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	.string "Sorry, you don't have the required item.$"

LavacoockiCraft_Text_3:
# 62 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	.string "Fantastic! You’ve got everything ready!$"

LavacoockiCraft_Text_4:
# 64 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	.string "Chop! Chop! Chop!$"

LavacoockiCraft_Text_5:
# 115 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	.string "Congratulationnnnnn, you are the\n"
	.string "1000th client to visit the shop as a\l"
	.string "result i must give you this pokemon!$"

LavacoockiCraft_Text_6:
# 119 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	.string "You received Milcery!$"

LeftoverCraft_Text_0:
# 141 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	.string "Alright, so you've chosen\n"
	.string "Leftovers-it's my most challenging\l"
	.string "recipe!$"

LeftoverCraft_Text_1:
# 142 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	.string "I'll need 3 Oran Berries and 4 Sitrus\n"
	.string "Berries!$"

HoneyCraft_Text_0:
# 241 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	.string "Alright, so you've chosen Honey! It's a\n"
	.string "pretty easy recipe, and I'll give you 2\l"
	.string "of them.$"

HoneyCraft_Text_1:
# 242 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	.string "I'll need 2 Pecha Berries and 1 Rawst\n"
	.string "Berry!$"

MoomoMilkCraft_Text_0:
# 341 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	.string "Alright, so you are choosing MoomoMilk,\n"
	.string "its a pretty easy recipee, and ill give 2\l"
	.string "of them$"

MoomoMilkCraft_Text_1:
# 342 "data/maps/TundrawoodCity_Restaurant/scripts.pory"
	.string "Ill need 2 oran berries, and 1\n"
	.string "lavacookie!$"
