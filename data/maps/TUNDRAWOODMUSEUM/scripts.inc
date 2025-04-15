# 1 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"

# 2 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
TUNDRAWOODMUSEUM_MapScripts::
# 3 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.byte 0

MUSEUMNPC::
# 10 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_MUSEUM, 0
	goto_if_eq MUSEUMNPC_2
MUSEUMNPC_1:
# 27 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_MUSEUM, 1
	goto_if_eq MUSEUMNPC_5
MUSEUMNPC_4:
# 45 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_MUSEUM, 2
	goto_if_eq MUSEUMNPC_10
	return

MUSEUMNPC_2:
# 11 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	lockall
# 12 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	faceplayer
# 13 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox MUSEUMNPC_Text_0, MSGBOX_YESNO
# 15 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MUSEUMNPC_8
# 20 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MUSEUMNPC_15
	goto MUSEUMNPC_1

MUSEUMNPC_5:
# 28 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	lockall
# 29 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	checkitem ITEM_RELIC_STATUE, 6
# 30 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MUSEUMNPC_13
MUSEUMNPC_12:
# 38 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MUSEUMNPC_17
	goto MUSEUMNPC_4

MUSEUMNPC_8:
# 16 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox MUSEUMNPC_Text_1, MSGBOX_AUTOCLOSE
# 17 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	setvar VAR_MUSEUM, 1
	end

MUSEUMNPC_10:
# 46 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	lockall
# 47 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	faceplayer
# 48 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox MUSEUMNPC_Text_6, MSGBOX_AUTOCLOSE
# 49 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	releaseall
	return

MUSEUMNPC_13:
# 31 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	lockall
# 32 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox MUSEUMNPC_Text_3, MSGBOX_AUTOCLOSE
# 33 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	giveitem ITEM_ROOT_FOSSIL
# 34 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox MUSEUMNPC_Text_4, MSGBOX_AUTOCLOSE
# 35 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	setvar VAR_MUSEUM, 2
# 36 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	releaseall
	goto MUSEUMNPC_12

MUSEUMNPC_15:
# 21 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox MUSEUMNPC_Text_2, MSGBOX_AUTOCLOSE
# 22 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	releaseall
	end

MUSEUMNPC_17:
# 39 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox MUSEUMNPC_Text_5, MSGBOX_AUTOCLOSE
# 40 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	releaseall
	goto MUSEUMNPC_4


MOM1::
# 58 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	lockall
# 59 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	faceplayer
# 60 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox MOM1_Text_0, MSGBOX_AUTOCLOSE
# 61 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	releaseall
	return


KID1::
# 65 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	lockall
# 66 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	faceplayer
# 67 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox KID1_Text_0, MSGBOX_AUTOCLOSE
# 68 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	releaseall
	return


ARTIST1::
# 72 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_PAINTER_GIFT, 0
	goto_if_eq ARTIST1_1
# 83 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	lockall
# 84 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	faceplayer
# 85 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox ARTIST1_Text_0, MSGBOX_AUTOCLOSE
# 86 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	releaseall
	return

ARTIST1_1:
# 73 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	lockall
# 74 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	faceplayer
# 75 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox ARTIST1_Text_0, MSGBOX_AUTOCLOSE
# 76 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	giveitem ITEM_RELIC_STATUE
# 77 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 78 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	setvar VAR_PAINTER_GIFT, 1
# 79 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	releaseall
	return


GAMEBOYKID::
# 92 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	lockall
# 93 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	faceplayer
# 94 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox GAMEBOYKID_Text_0, MSGBOX_AUTOCLOSE
# 95 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	releaseall
	return


FATMAN::
# 99 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	lockall
# 100 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	faceplayer
# 101 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox FATMAN_Text_0, MSGBOX_AUTOCLOSE
# 102 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	releaseall
	return


SchoolBoy::
# 107 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	lockall
# 108 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	faceplayer
# 109 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox SchoolBoy_Text_0, MSGBOX_AUTOCLOSE
# 110 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	releaseall
	return


Women2F::
# 114 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	lockall
# 115 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	faceplayer
# 116 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox Women2F_Text_0, MSGBOX_AUTOCLOSE
# 117 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	releaseall
	return


gameboykidmom::
# 121 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	lockall
# 122 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	faceplayer
# 123 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox gameboykidmom_Text_0, MSGBOX_AUTOCLOSE
	return


REVIVEFOSSILSALL::
# 129 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	lockall
# 130 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_0, MSGBOX_YESNO
# 131 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REVIVEFOSSILSALL_1
# 297 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_32, MSGBOX_AUTOCLOSE
	return

REVIVEFOSSILSALL_1:
# 133 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	checkitem ITEM_ROOT_FOSSIL
# 134 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REVIVEFOSSILSALL_5
# 143 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	checkitem ITEM_DOME_FOSSIL
# 144 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REVIVEFOSSILSALL_8
# 153 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	checkitem ITEM_HELIX_FOSSIL
# 154 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REVIVEFOSSILSALL_11
# 163 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	checkitem ITEM_OLD_AMBER
# 164 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REVIVEFOSSILSALL_14
# 174 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	checkitem ITEM_CLAW_FOSSIL
# 175 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REVIVEFOSSILSALL_17
# 184 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	checkitem ITEM_ARMOR_FOSSIL
# 185 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REVIVEFOSSILSALL_20
# 194 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	checkitem ITEM_SKULL_FOSSIL
# 195 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REVIVEFOSSILSALL_23
# 205 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	checkitem ITEM_COVER_FOSSIL
# 206 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REVIVEFOSSILSALL_26
# 215 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	checkitem ITEM_PLUME_FOSSIL
# 216 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REVIVEFOSSILSALL_29
# 226 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	checkitem ITEM_JAW_FOSSIL
# 227 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REVIVEFOSSILSALL_32
# 237 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	checkitem ITEM_SAIL_FOSSIL
# 238 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REVIVEFOSSILSALL_35
# 247 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	checkitem ITEM_FOSSILIZED_DRAKE
# 248 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REVIVEFOSSILSALL_38
# 257 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	checkitem ITEM_FOSSILIZED_DINO
# 258 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REVIVEFOSSILSALL_41
# 267 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	checkitem ITEM_FOSSILIZED_BIRD
# 268 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REVIVEFOSSILSALL_44
# 277 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	checkitem ITEM_FOSSILIZED_FISH
# 278 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq REVIVEFOSSILSALL_46
# 289 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_31, MSGBOX_AUTOCLOSE
	return

REVIVEFOSSILSALL_5:
# 135 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_1, MSGBOX_AUTOCLOSE
# 136 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	givemon SPECIES_LILEEP, 1
# 137 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 138 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_2
# 139 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	removeitem ITEM_ROOT_FOSSIL
# 140 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	call NicknamePartyMon
	end

REVIVEFOSSILSALL_8:
# 145 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_3, MSGBOX_AUTOCLOSE
# 146 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	givemon SPECIES_KABUTO, 1
# 147 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 148 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_4
# 149 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	removeitem ITEM_DOME_FOSSIL
# 150 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	call NicknamePartyMon
	end

REVIVEFOSSILSALL_11:
# 155 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_5, MSGBOX_AUTOCLOSE
# 156 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	givemon SPECIES_OMANYTE, 1
# 157 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 158 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_6
# 159 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	removeitem ITEM_HELIX_FOSSIL
# 160 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	call NicknamePartyMon
	end

REVIVEFOSSILSALL_14:
# 165 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_7, MSGBOX_AUTOCLOSE
# 166 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	givemon SPECIES_AERODACTYL, 1
# 167 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 168 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_8
# 169 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	removeitem ITEM_OLD_AMBER
# 170 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	call NicknamePartyMon
	end

REVIVEFOSSILSALL_17:
# 176 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_9, MSGBOX_AUTOCLOSE
# 177 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	givemon SPECIES_ANORITH, 1
# 178 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 179 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_10
# 180 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	removeitem ITEM_CLAW_FOSSIL
# 181 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	call NicknamePartyMon
	end

REVIVEFOSSILSALL_20:
# 186 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_11, MSGBOX_AUTOCLOSE
# 187 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	givemon SPECIES_SHIELDON, 1
# 188 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 189 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_12
# 190 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	removeitem ITEM_ARMOR_FOSSIL
# 191 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	call NicknamePartyMon
	end

REVIVEFOSSILSALL_23:
# 196 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_13, MSGBOX_AUTOCLOSE
# 197 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	givemon SPECIES_CRANIDOS, 1
# 198 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 199 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_14
# 200 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	removeitem ITEM_SKULL_FOSSIL
# 201 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	call NicknamePartyMon
	end

REVIVEFOSSILSALL_26:
# 207 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_15, MSGBOX_AUTOCLOSE
# 208 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	givemon SPECIES_TIRTOUGA, 1
# 209 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 210 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_16
# 211 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	removeitem ITEM_COVER_FOSSIL
# 212 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	call NicknamePartyMon
	end

REVIVEFOSSILSALL_29:
# 217 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_17, MSGBOX_AUTOCLOSE
# 218 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	givemon SPECIES_ARCHEN, 1
# 219 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 220 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_18
# 221 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	removeitem ITEM_PLUME_FOSSIL
# 222 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	call NicknamePartyMon
	end

REVIVEFOSSILSALL_32:
# 228 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_19, MSGBOX_AUTOCLOSE
# 229 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	givemon SPECIES_TYRUNT, 1
# 230 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 231 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_20
# 232 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	removeitem ITEM_JAW_FOSSIL
# 233 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	call NicknamePartyMon
	end

REVIVEFOSSILSALL_35:
# 239 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_21, MSGBOX_AUTOCLOSE
# 240 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	givemon SPECIES_AMAURA, 1
# 241 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 242 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_22
# 243 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	removeitem ITEM_SAIL_FOSSIL
# 244 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	call NicknamePartyMon
	end

REVIVEFOSSILSALL_38:
# 249 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_23, MSGBOX_AUTOCLOSE
# 250 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	givemon SPECIES_DRACOZOLT, 1
# 251 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 252 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_24
# 253 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	removeitem ITEM_FOSSILIZED_DRAKE
# 254 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	call NicknamePartyMon
	end

REVIVEFOSSILSALL_41:
# 259 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_25, MSGBOX_AUTOCLOSE
# 260 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	givemon SPECIES_ARCTOZOLT, 1
# 261 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 262 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_26
# 263 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	removeitem ITEM_FOSSILIZED_DINO
# 264 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	call NicknamePartyMon
	end

REVIVEFOSSILSALL_44:
# 269 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_27, MSGBOX_AUTOCLOSE
# 270 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	givemon SPECIES_ARCTOVISH, 1
# 271 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 272 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_28
# 273 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	removeitem ITEM_FOSSILIZED_BIRD
# 274 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	call NicknamePartyMon
	end

REVIVEFOSSILSALL_46:
# 279 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_29, MSGBOX_AUTOCLOSE
# 280 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	givemon SPECIES_DRACOVISH, 1
# 281 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 282 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	msgbox REVIVEFOSSILSALL_Text_30
# 283 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	removeitem ITEM_FOSSILIZED_FISH
# 284 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	call NicknamePartyMon
	end


MUSEUMNPC_Text_0:
# 13 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Hey! Want to take part in the game?$"

MUSEUMNPC_Text_1:
# 16 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "It's simple! Gather 6 Relic Statues and\n"
	.string "bring them back to me. Once you have\l"
	.string "them all, I'll give you an appropriate\l"
	.string "reward! You can find those either here\l"
	.string "in the museum or somewhere in the city.\l"
	.string "Good luck!$"

MUSEUMNPC_Text_2:
# 21 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Feel free to come back if you change\n"
	.string "your mind!$"

MUSEUMNPC_Text_3:
# 32 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Congratulations! You've gathered all 6\n"
	.string "Relic Statues! As promised, here’s your\l"
	.string "well-earned reward. You've proven your\l"
	.string "dedication well done!$"

MUSEUMNPC_Text_4:
# 34 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "You can ressurect it witht he help of my\n"
	.string "colleague on my right!$"

MUSEUMNPC_Text_5:
# 39 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "You're not there yet! You still need\n"
	.string "more Relic Statues keep going!$"

MUSEUMNPC_Text_6:
# 48 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Feel free to visit the museum whenever\n"
	.string "you want!$"

MOM1_Text_0:
# 60 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Look at this place, sweetie. So many\n"
	.string "beautiful things from the past. Can you\l"
	.string "believe some of these paintings are\l"
	.string "hundreds of years old? Imagine how\l"
	.string "much time it must have taken the\l"
	.string "artists to create them.$"

KID1_Text_0:
# 67 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Whoa… this place is huge. So many\n"
	.string "paintings and statues… How do people\l"
	.string "even make stuff like this?$"

ARTIST1_Text_0:
# 75 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Light… it’s all about the light. The way\n"
	.string "it bends, the way it touches a surface…\l"
	.string "If I get that wrong, the whole piece\l"
	.string "falls apart.$"

GAMEBOYKID_Text_0:
# 94 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Alright… Mom just went upstairs. That\n"
	.string "means I’ve got at least what? Ten\l"
	.string "minutes? Maybe fifteen if she starts\l"
	.string "talking to someone!.$"

FATMAN_Text_0:
# 101 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Man… that’s a lot of paint. Like, how long\n"
	.string "did this take? Weeks? Months? Imagine\l"
	.string "working on something for that long and\l"
	.string "just hoping people don’t walk past it\l"
	.string "like it’s nothing.$"

SchoolBoy_Text_0:
# 109 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Whoa… this is HUGE. How did they even\n"
	.string "make this? Like… this is rock. Solid\l"
	.string "stone. And they made it look so real?$"

Women2F_Text_0:
# 116 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Oh… these are adorable. Look at them so\n"
	.string "small, so round. Whoever painted these\l"
	.string "really captured that innocent, playful\l"
	.string "look.$"

gameboykidmom_Text_0:
# 123 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "I barely stepped away for a minute, and\n"
	.string "he probably dove straight for that\l"
	.string "Game Boy. He thinks he’s slick, hiding it\l"
	.string "under a pillow or behind his backpack.\l"
	.string "As if I haven’t been catching him doing\l"
	.string "the same thing for years.$"

REVIVEFOSSILSALL_Text_0:
# 130 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "I've been working on a machine that can\n"
	.string "revive Pokémon from fossils. Would you\l"
	.string "like to give it a try?$"

REVIVEFOSSILSALL_Text_1:
# 135 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Oh, that's a Root Fossil! Here, take it.$"

REVIVEFOSSILSALL_Text_2:
# 138 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Received Lileep!$"

REVIVEFOSSILSALL_Text_3:
# 145 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Oh, that's a Dome Fossil! Here, take it.$"

REVIVEFOSSILSALL_Text_4:
# 148 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Received Kabuto!$"

REVIVEFOSSILSALL_Text_5:
# 155 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Oh, that's a Helix Fossil! Here, take it.$"

REVIVEFOSSILSALL_Text_6:
# 158 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Received Omanyte!$"

REVIVEFOSSILSALL_Text_7:
# 165 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Ho that is a root fossil, here.$"

REVIVEFOSSILSALL_Text_8:
# 168 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Received Aerodactyl!$"

REVIVEFOSSILSALL_Text_9:
# 176 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Oh, that's a Claw Fossil! Here, take it.$"

REVIVEFOSSILSALL_Text_10:
# 179 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Received Anorith!$"

REVIVEFOSSILSALL_Text_11:
# 186 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Oh, that's a Armor Fossil! Here, take it.$"

REVIVEFOSSILSALL_Text_12:
# 189 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Received Shieldon!$"

REVIVEFOSSILSALL_Text_13:
# 196 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Oh, that's a Skull Fossil! Here, take it.$"

REVIVEFOSSILSALL_Text_14:
# 199 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Received Cranidos!$"

REVIVEFOSSILSALL_Text_15:
# 207 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Oh, that's a Cover Fossil! Here, take it.$"

REVIVEFOSSILSALL_Text_16:
# 210 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Received Tirtouga!$"

REVIVEFOSSILSALL_Text_17:
# 217 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Oh, that's a Plume Fossil! Here, take it.$"

REVIVEFOSSILSALL_Text_18:
# 220 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Received Archen!$"

REVIVEFOSSILSALL_Text_19:
# 228 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Oh, that's a Jaw Fossil! Here, take it.$"

REVIVEFOSSILSALL_Text_20:
# 231 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Received Tyrunt!$"

REVIVEFOSSILSALL_Text_21:
# 239 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Oh, that's a Sail Fossil! Here, take it.$"

REVIVEFOSSILSALL_Text_22:
# 242 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Received Amaura!$"

REVIVEFOSSILSALL_Text_23:
# 249 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Oh, that's a Drake Fossil! Here, take it.$"

REVIVEFOSSILSALL_Text_24:
# 252 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Received Dracozolt!$"

REVIVEFOSSILSALL_Text_25:
# 259 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Oh, that's a Dino Fossil! Here, take it.$"

REVIVEFOSSILSALL_Text_26:
# 262 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Received Arctozolt!$"

REVIVEFOSSILSALL_Text_27:
# 269 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Oh, that's a Bird Fossil! Here, take it.$"

REVIVEFOSSILSALL_Text_28:
# 272 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Received Arctovish!$"

REVIVEFOSSILSALL_Text_29:
# 279 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Oh, that's a Fish Fossil! Here, take it.$"

REVIVEFOSSILSALL_Text_30:
# 282 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Received Dracovish!$"

REVIVEFOSSILSALL_Text_31:
# 289 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "Sorry, but you don't have any fossils.\n"
	.string "Come back when you've found some!$"

REVIVEFOSSILSALL_Text_32:
# 297 "data/maps/TUNDRAWOODMUSEUM/scripts.pory"
	.string "If you change your mind, feel free to\n"
	.string "come back anytime!$"
