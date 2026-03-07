ISLANDGAME_AETHERIA_BATTLE_CAFE_MapScripts::
# 6 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_AETHERIA_BATTLE_CAFE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_AETHERIA_BATTLE_CAFE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return


ISLANDGAME_AETHERIA_BATTLE_CAFE_Mami::
# 13 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	lock
# 14 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_NPC_2, ISLANDGAME_AETHERIA_BATTLE_CAFE_Mami_Movement_0
# 15 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Mami_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_BATTLE_CAFE_Misu::
# 22 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	lock
# 23 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Misu_Text_0, MSGBOX_AUTOCLOSE
# 26 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron1::
# 30 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	lock
# 31 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	faceplayer
# 32 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron1_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron2::
# 38 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	lock
# 39 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	faceplayer
# 40 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron2_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron3::
# 46 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	lock
# 47 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron3_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_BATTLE_CAFE_WaitingMother::
# 53 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	lock
# 54 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_WaitingMother_Text_0, MSGBOX_AUTOCLOSE
# 58 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_BATTLE_CAFE_WaitingChild::
# 62 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	lock
# 63 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_WaitingChild_Text_0, MSGBOX_AUTOCLOSE
# 66 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista::
# 76 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	lock
# 77 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	faceplayer
# 78 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto_if_set FLAG_TEMP_1E, ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_2
# 84 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_1, MSGBOX_YESNO
ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_1:
# 89 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_6
# 211 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_Decline
ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5:
# 214 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
AetheriaBattleCafeBarista_Decline:
# 215 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_12
# 218 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
# 220 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
AetheriaBattleCafeBarista_End:
# 221 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 222 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_2:
# 79 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_0, MSGBOX_YESNO
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_1

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_6:
# 90 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_2
# 93 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_3, 4
# 94 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_4, 0
# 95 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_5, 1
# 96 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_6, 2
# 100 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultistack 0, 0, TRUE, 5, FALSE, 4, DYN_MULTICHOICE_CB_NONE
# 101 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	switch VAR_RESULT
# 102 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	case 0, ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_10
# 136 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	case 1, ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_11
# 170 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	case 2, ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_12
# 205 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_Decline
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_10:
# 103 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	showmoneybox 18, 0
# 104 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_7, MSGBOX_YESNO
# 107 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_14
# 112 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checkmoney 2500
# 113 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_23
# 121 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removemoney 2500
# 122 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	updatemoneybox
# 123 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SHOP
# 124 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 125 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 126 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_9
# 129 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 130 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_FOLLOWERS_DISABLED
# 131 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidefollower
# 132 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	call ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo
# 133 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_11:
# 137 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	showmoneybox 18, 0
# 138 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_10, MSGBOX_YESNO
# 141 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_17
# 146 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checkmoney 2500
# 147 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_26
# 155 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removemoney 2500
# 156 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	updatemoneybox
# 157 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SHOP
# 158 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 159 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 160 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_9
# 163 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 164 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_FOLLOWERS_DISABLED
# 165 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidefollower
# 166 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	call ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo
# 167 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_12:
# 171 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	showmoneybox 18, 0
# 172 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_11, MSGBOX_YESNO
# 175 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_20
# 180 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checkmoney 2500
# 181 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_29
# 189 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removemoney 2500
# 190 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	updatemoneybox
# 191 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SHOP
# 192 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 193 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 194 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_9
# 197 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 198 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_FOLLOWERS_DISABLED
# 199 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidefollower
# 200 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	call ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo
# 201 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_14:
# 108 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 109 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_Decline
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_17:
# 142 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 143 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_Decline
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_20:
# 176 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 177 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_Decline
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_23:
# 114 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_8
# 117 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 118 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_26:
# 148 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_8
# 151 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 152 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_29:
# 182 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_8
# 185 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5


ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo::
# 231 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SLIDING_DOOR
# 232 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 234 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1F
# 235 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_1
# 236 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 0, -2
# 237 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_2
# 238 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 0, -2
# 240 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 13
# 241 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 7
# 242 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 243 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 244 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 13, 7
# 245 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_WAITRESS
# 246 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 11, 9
# 248 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_0
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 252 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SHINY
# 253 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_1
# 254 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 255 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2
# 256 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 257 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_0
# 262 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_SODA_POP
# 263 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_1
# 270 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 271 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_3
# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_4
# 273 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 274 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_5
# 275 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 276 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_2
# 281 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 0
# 283 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checktrainerflag TRAINER_BATTLE_CAFE_MARCIE
	goto_if 1, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_2
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_1:
# 286 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 288 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	trainerbattle_no_intro TRAINER_BATTLE_CAFE_MARCIE, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_3
# 290 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 292 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_APPLAUSE
# 293 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_Mami_Movement_0
# 294 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 295 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_4
# 299 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 301 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 303 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_5
# 309 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_LUMIOSE_GALETTE
# 310 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 312 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_TEMP_1F
# 313 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_1
# 314 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 12, 7
# 315 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_2
# 316 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 17, 6
# 318 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 4
# 319 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 6
# 320 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 321 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 322 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 4, 6
# 324 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_WAITRESS
# 325 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 0, -2
# 327 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 328 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_BARISTA, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_6
# 329 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 331 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_6
# 335 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_TEMP_F, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_5
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_4:
# 342 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_8
# 345 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1E
# 346 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
	return

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_2:
# 284 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 1
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_1

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_5:
# 336 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_7
# 339 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_CUSTAP_BERRY
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_4


ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo::
# 356 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SLIDING_DOOR
# 357 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 359 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1F
# 360 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_1
# 361 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 0, -2
# 362 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_2
# 363 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 0, -2
# 365 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 13
# 366 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 7
# 367 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 368 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 369 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 13, 7
# 370 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_WAITRESS
# 371 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 11, 9
# 373 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 375 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_0
# 376 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 377 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_M_SWAGGER
# 378 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 379 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2
# 380 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 381 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_0
# 388 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_LEMONADE
# 389 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_1
# 395 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 396 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_3
# 397 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_4
# 398 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 399 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_0
# 400 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 401 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_2
# 407 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 0
# 409 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checktrainerflag TRAINER_BATTLE_CAFE_MAMI
	goto_if 1, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_2
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_1:
# 412 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 414 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	trainerbattle_no_intro TRAINER_BATTLE_CAFE_MAMI, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_3
# 416 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 418 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_APPLAUSE
# 419 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_1
# 420 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_4
# 425 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 427 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_2
# 428 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay 30
# 429 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_3
# 430 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay 30
# 431 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_4
# 433 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 435 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_5
# 439 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_LUMIOSE_GALETTE
# 440 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 442 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_TEMP_1F
# 443 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_1
# 444 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 12, 7
# 445 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_2
# 446 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 17, 6
# 448 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 4
# 449 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 6
# 450 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 451 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 452 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 4, 6
# 454 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_WAITRESS
# 455 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 0, -2
# 457 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 458 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_BARISTA, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_6
# 459 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 461 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_6
# 465 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_TEMP_F, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_5
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_4:
# 472 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_8
# 475 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1E
# 476 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
	return

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_2:
# 410 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 1
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_1

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_5:
# 466 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_7
# 469 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_LIECHI_BERRY
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_4


ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo::
# 485 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SLIDING_DOOR
# 486 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 488 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1F
# 489 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_1
# 490 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 0, -2
# 491 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_2
# 492 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 0, -2
# 494 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 13
# 495 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 7
# 496 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 497 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 498 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 13, 7
# 499 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_WAITRESS
# 500 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 11, 9
# 502 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 504 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_0
# 505 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 506 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_PATRON, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_1
# 507 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 508 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_PIN
# 509 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 510 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_2
# 511 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 512 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_3
# 513 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 515 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2
# 516 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 517 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_0
# 523 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 524 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2
# 525 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_ICE_BREAK
# 526 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 527 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_2
# 528 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 529 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_1
# 532 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 533 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_4
# 534 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_3
# 535 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_WALL_HIT
# 536 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 537 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay 30
# 538 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_2
# 542 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 543 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_3
# 546 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 15, 7
# 547 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 548 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, Common_Movement_FaceLeft
# 549 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 551 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2
# 552 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 553 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_4
# 556 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_MOOMOO_MILK
# 557 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_5
# 564 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 565 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_3
# 566 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_4
# 567 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 568 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_0
# 569 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 570 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_6
# 576 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 0
# 578 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checktrainerflag TRAINER_BATTLE_CAFE_MISU
	goto_if 1, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_2
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_1:
# 581 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 583 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	trainerbattle_no_intro TRAINER_BATTLE_CAFE_MISU, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_7
# 585 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 587 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_APPLAUSE
# 588 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_0
# 589 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_8
# 596 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 598 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 600 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_9
# 604 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_LUMIOSE_GALETTE
# 605 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 607 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_TEMP_1F
# 608 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_1
# 609 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 12, 7
# 610 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_2
# 611 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 17, 6
# 613 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 4
# 614 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 6
# 615 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 616 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 617 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 4, 6
# 619 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_WAITRESS
# 620 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 0, -2
# 622 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 623 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_BARISTA, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_6
# 624 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 626 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_10
# 630 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_TEMP_F, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_5
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_4:
# 637 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_8
# 640 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1E
# 641 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
	return

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_2:
# 579 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 1
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_1

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_5:
# 631 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_7
# 634 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_KEE_BERRY
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_4


# 14 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_Mami_Movement_0:
# 14 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 14 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 14 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	jump_in_place_left
# 14 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	jump_in_place_up
# 14 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	jump_in_place_right
# 14 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	jump_in_place_down
# 14 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	jump_in_place_left
# 14 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	emote_heart
# 14 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 14 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_0:
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_up
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_right
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_down
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
	step_end

# 253 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_1:
# 253 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	emote_heart
	step_end

# 255 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2:
# 255 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_left
	step_end

# 271 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_3:
# 271 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 271 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 271 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 271 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 271 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
	step_end

# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_4:
# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_down
# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_down
# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_right
	step_end

# 274 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_5:
# 274 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 274 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 274 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	jump_in_place_left
# 274 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	jump_in_place_left
# 274 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 274 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 328 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_6:
# 328 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 328 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 328 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_down
# 328 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
	step_end

# 399 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_0:
# 399 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 399 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 399 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_left
# 399 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_left
# 399 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 399 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 419 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_1:
# 419 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 419 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 419 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_faster_left
# 419 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_faster_left
# 419 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 419 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 427 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_2:
# 427 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 427 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 427 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 427 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 427 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
	step_end

# 429 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_3:
# 429 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_down
	step_end

# 431 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_4:
# 431 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
	step_end

# 504 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_0:
# 504 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 504 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 504 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 504 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
# 504 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 504 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_up
# 504 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 504 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_right
# 504 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 504 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_down
# 504 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 504 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
# 504 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
	step_end

# 506 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_1:
# 506 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	emote_question_mark
# 506 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 506 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 506 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 506 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_right
# 506 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 510 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_2:
# 510 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	emote_exclamation_mark
# 510 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 510 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 512 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_3:
# 512 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 512 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 512 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_right
# 512 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_right
# 512 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_right
# 512 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_up
# 512 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_up
# 512 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
# 512 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 512 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 533 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_4:
# 533 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_down
# 533 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_down
# 533 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	slide_down
	step_end

ISLANDGAME_AETHERIA_BATTLE_CAFE_Mami_Text_0:
# 16 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Ugh, I can't believe I'm doing\n"
	.string "this...{COLOR GREEN}(=>~>=)$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Misu_Text_0:
# 24 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Kyaaa!{PAUSE 30} I-I'm so sorry! I didn't mean to\n"
	.string "spill your drink!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron1_Text_0:
# 33 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Mami's my favorite. Some might be turned\n"
	.string "off by her cold indifference, but I\l"
	.string "think it makes her much cooler!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron2_Text_0:
# 41 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Marcie's joy and energy is infectious.\n"
	.string "She never fails to cheer me up after a\l"
	.string "bad day!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron3_Text_0:
# 48 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Oh, don't worry about it...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_WaitingMother_Text_0:
# 55 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "I don't think this type of café would be\n"
	.string "appropriate for you, dearie...\p"
	.string "You still don't have your own Pokémon\n"
	.string "yet...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_WaitingChild_Text_0:
# 64 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "But I want flapjacks... -sniff-$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_0:
# 80 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Oooh, already back for more~?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_1:
# 85 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Haiyo~! Welcome to Café Lumi! Home of\n"
	.string "the STARLIGHT Cinnamon Roll herself,\l"
	.string "Azalea!\p"
	.string "Have you come to try our famous\n"
	.string "hotcakes?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_2:
# 91 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Wonderful! Which hotcake combo would\n"
	.string "you like~? {COLOR GREEN}(='u'=)$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_3:
# 93 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Nevermind :($"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_4:
# 94 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Classy~$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_5:
# 95 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Applin Cinna-Mon!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_6:
# 96 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Funfetti!!!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_7:
# 105 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Oooh~, good choice! It'll just be ¥2,500,\n"
	.string "is that okidokii~?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_8:
# 115 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Sowwy... We can't serve you if you can't\n"
	.string "pay for it... ):$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_9:
# 127 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Fantastic! Please take a seat over\n"
	.string "there, and your Café Cutie will be right\l"
	.string "with you, heehee.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_10:
# 139 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Hehe, so you like them a little tart,\n"
	.string "hmm~? It'll be ¥2,500, okidokii~?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_11:
# 173 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Yum-yum! I love confetti cake! It'll be\n"
	.string "¥2,500, okidokiiii~?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_12:
# 216 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Awwh. Let me know if you change your\n"
	.string "mind! {COLOR GREEN}(='w'=)$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_0:
# 258 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Haiyoooo~! My name is Marcie, and I'll be\n"
	.string "your Café Cuuuutie for today~!\p"
	.string "Bet'cha didn't expect me to be serving\n"
	.string "as well, ehe.\p"
	.string "First, let's start you off with a fizzy\n"
	.string "bottle of Lumi-Cola, made with lots of\l"
	.string "love from yours truly~!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_1:
# 264 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "And now... for the main course!\p"
	.string "A stack of our famous buttermilk\n"
	.string "hotcakes!\p"
	.string "But before I can serve them to you... we\n"
	.string "have to bless it with our super special\l"
	.string "secret ingredient!\p"
	.string "In order to bless your hotcakes, I'll\n"
	.string "need your help, ehe~.\p"
	.string "Come on up to the stage with me!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_2:
# 277 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "To infuse your hotcakes with maximum\n"
	.string "flavorful goodness, we'll be calling\l"
	.string "upon the Café gods to grant us their\l"
	.string "power!\p"
	.string "But they'll only grant it to us... if we\n"
	.string "entertain them with a battle!\p"
	.string "So we're going to give them exactly\n"
	.string "what they want! Let's both do our best,\l"
	.string "trainer!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_3:
# 288 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "A splendid show!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_4:
# 296 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Yay! What a wonderful performance! The\n"
	.string "Café gods shine upon us, trainer!\p"
	.string "And with that... ta-da! Our ritual is\n"
	.string "complete! Bon appétit~! Hee-hee.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_5:
# 304 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "{COLOR GREEN}> You dig into the stack of pancakes,\n"
	.string "expecting an explosion of flavor!\p"
	.string "> But to your disappointment, they\n"
	.string "taste no different than the same kind\l"
	.string "you buy at the frozen food aisle.\p"
	.string "> Still, you thought the café\n"
	.string "experience was fun.\p"
	.string "> You decided to save one for the road.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_6:
# 332 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Thank you for your patronage, trainer!\n"
	.string "It was nice meeting you. Our battle was\l"
	.string "quite fun, heehee~.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_7:
# 337 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Ooh, and please take this as well! It's a\n"
	.string "souvenir, to commemorate our exciting\l"
	.string "battle!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_8:
# 343 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Please come visit us again! {COLOR GREEN}(=>w<=)$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_0:
# 382 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Haiyooo... My name is Mami, and I'll, uh...\p"
	.string "-ahem-...\p"
	.string "be your Café Cutie for today...\p"
	.string "Anyways, let's start you off with this\n"
	.string "fresh can of tasty Lumi-nade.\p"
	.string "I made it with...{PAUSE 30} lots of love, so uh,\n"
	.string "please enjoy it or something...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_1:
# 390 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "And now for the main course.\p"
	.string "A stack of...{PAUSE 60} fruitastic Applin\n"
	.string "Cinna-Mon hotcakes...\p"
	.string "But before I can serve them, I'll need\n"
	.string "to enchant it with our super special\l"
	.string "secret ingredient.\p"
	.string "I'll need your help to do it, so come up\n"
	.string "to the stage with me.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_2:
# 402 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "To infuse your hotcakes with maximum\n"
	.string "flavor, I'll need to call upon the Café\l"
	.string "gods to grant us their power.\p"
	.string "But they'll only grant it to us if we\n"
	.string "entertain them with a battle.\p"
	.string "So we're going to have a battle.{PAUSE 30} Let's do\n"
	.string "our best, I guess.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_3:
# 414 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Awesome...\p"
	.string "I-I mean! W-Whatever, it was alright...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_4:
# 421 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "A-Anyways! The Café gods were really\n"
	.string "happy with our battle, and now your\l"
	.string "hotcakes will taste a lot better!\p"
	.string "P-Please enjoy them! Let me know if you\n"
	.string "need anything else!\p"
	.string "Okay bye!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_5:
# 436 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "{COLOR GREEN}> You dig into the stack of pancakes.\n"
	.string "They're the perfect blend of sweet and\l"
	.string "tart.\p"
	.string "> You decided to save one for the road.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_6:
# 462 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Thank you for your patronage, trainer!\n"
	.string "Mami said she a lot of fun with you, but\l"
	.string "don't let her know I told you, ehe.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_7:
# 467 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Ooh, and please take this souvenir as\n"
	.string "well, to commemorate the exciting\l"
	.string "battle between you two!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_0:
# 518 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "S-Sorry for the wait! {COLOR GREEN}(=>m<=)\p"
	.string "{COLOR DARK_GRAY}Let's start you off with a warm glass of\n"
	.string "soothing Moomoo Milk!\p"
	.string "W-Wait, I mean!{PAUSE 30} Haiyoooo!{PAUSE 30} My name is\n"
	.string "Misu, and I'll be your Cafe Cutie for\l"
	.string "today!\p"
	.string "L-Let's start you off with a warm glass\n"
	.string "of...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_1:
# 530 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "O-Oh no! I'm so sorry! I didn't mean to\n"
	.string "do that! H-Here, let me get go get you a\l"
	.string "new one real quick!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_2:
# 539 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Ooowie...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_3:
# 544 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "{COLOR GREEN}> You got up and helped Misu off the\n"
	.string "floor.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_4:
# 554 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "S-Sorry for the delay. Here is your warm\n"
	.string "glass of soothing Moomoo Milk, made\l"
	.string "with extra extra love to make up for my\l"
	.string "mistake...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_5:
# 558 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "And now, for the main course...\p"
	.string "A-A stack of super-sweet funfetti\n"
	.string "hotcakes!\p"
	.string "But before I can serve them, I'll have\n"
	.string "to enchant it with our super special\l"
	.string "secret ingredient...\p"
	.string "I-I'll need your help as well, so please\n"
	.string "come onto the stage with me!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_6:
# 571 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "To infuse your hotcakes with maximum\n"
	.string "flavor, we'll need to call upon the Café\l"
	.string "gods for them to grant us their power...\p"
	.string "But they'll only lend us their power... if\n"
	.string "we entertain them with a battle...\p"
	.string "So l-let's do our best, trainer!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_7:
# 583 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Amazing...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_8:
# 590 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Heh... That was fun, trainer.\p"
	.string "T-Thank you for being patient with me.\n"
	.string "I'm the one who's supposed to be\l"
	.string "serving you, and yet...\p"
	.string "O-Ooh! I didn't mean to spoil the mood\n"
	.string "with my rambling!\p"
	.string "H-Here are your hotcakes, blessed with\n"
	.string "the power of the Café gods!\p"
	.string "Please enjoy them! Let me know if you\n"
	.string "need anything else!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_9:
# 601 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "{COLOR GREEN}> You dig into the stack of pancakes.\n"
	.string "They bring back memories of childhood\l"
	.string "nostalgia of when your mother made you\l"
	.string "a birthday cake.\p"
	.string "> You decided to save one for the road.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_10:
# 627 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Thank you for your patronage, trainer!\n"
	.string "Please forgive Misu for any mishaps she\l"
	.string "may have committed during your service.\l"
	.string "She's still new and trying her very best,\l"
	.string "ehe.$"
