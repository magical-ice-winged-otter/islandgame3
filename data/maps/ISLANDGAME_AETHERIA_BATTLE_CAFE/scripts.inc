ISLANDGAME_AETHERIA_BATTLE_CAFE_MapScripts::
# 6 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_AETHERIA_BATTLE_CAFE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_AETHERIA_BATTLE_CAFE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return


ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista::
# 12 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	lock
# 13 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	faceplayer
# 14 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto_if_set FLAG_TEMP_1E, ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_2
# 20 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_1, MSGBOX_YESNO
ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_1:
# 25 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_6
# 147 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_Decline
ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5:
# 150 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
AetheriaBattleCafeBarista_Decline:
# 151 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_13
# 154 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
# 156 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
AetheriaBattleCafeBarista_End:
# 157 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 158 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_2:
# 15 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_0, MSGBOX_YESNO
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_1

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_6:
# 26 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_2
# 29 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_3, 4
# 30 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_4, 0
# 31 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_5, 1
# 32 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_6, 2
# 33 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checktrainerflag TRAINER_BATTLE_CAFE_MARCIE
	goto_if 1, ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_12
ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_9:
# 36 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultistack 0, 0, TRUE, 5, FALSE, 4, DYN_MULTICHOICE_CB_NONE
# 37 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	switch VAR_RESULT
# 38 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	case 0, ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_17
# 72 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	case 1, ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_18
# 106 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	case 2, ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_19
# 141 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_Decline
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_10:
# 34 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_7, 3
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_9

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_11:
# 33 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checktrainerflag TRAINER_BATTLE_CAFE_MAMI
	goto_if 1, ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_10
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_9

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_12:
# 33 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checktrainerflag TRAINER_BATTLE_CAFE_MISU
	goto_if 1, ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_11
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_9

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_17:
# 39 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	showmoneybox 18, 0
# 40 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_8, MSGBOX_YESNO
# 43 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_21
# 48 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checkmoney 2500
# 49 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_30
# 57 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removemoney 2500
# 58 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	updatemoneybox
# 59 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SHOP
# 60 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 61 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 62 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_10
# 65 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 66 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_FOLLOWERS_DISABLED
# 67 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidefollower
# 68 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	call ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo
# 69 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_18:
# 73 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	showmoneybox 18, 0
# 74 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_11, MSGBOX_YESNO
# 77 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_24
# 82 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checkmoney 2500
# 83 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_33
# 91 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removemoney 2500
# 92 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	updatemoneybox
# 93 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SHOP
# 94 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 95 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 96 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_10
# 99 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 100 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_FOLLOWERS_DISABLED
# 101 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidefollower
# 102 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	call ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo
# 103 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_19:
# 107 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	showmoneybox 18, 0
# 108 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_12, MSGBOX_YESNO
# 111 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_27
# 116 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checkmoney 2500
# 117 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_36
# 125 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removemoney 2500
# 126 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	updatemoneybox
# 127 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SHOP
# 128 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 129 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 130 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_10
# 133 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 134 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_FOLLOWERS_DISABLED
# 135 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidefollower
# 136 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	call ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo
# 137 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_21:
# 44 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 45 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_Decline
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_24:
# 78 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 79 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_Decline
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_27:
# 112 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 113 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_Decline
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_30:
# 50 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_9
# 53 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 54 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_33:
# 84 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_9
# 87 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 88 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_36:
# 118 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_9
# 121 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 122 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5


ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo::
# 167 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SLIDING_DOOR
# 168 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 170 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1F
# 171 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_1
# 172 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 0, -2
# 173 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_2
# 174 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 0, -2
# 176 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 13
# 177 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 7
# 178 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 179 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 180 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 13, 7
# 181 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_WAITRESS
# 182 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 11, 9
# 184 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_0
# 187 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 188 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SHINY
# 189 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_1
# 190 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 191 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2
# 192 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 193 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_0
# 198 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_SODA_POP
# 199 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_1
# 206 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 207 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_3
# 208 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_4
# 209 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 210 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_5
# 211 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 212 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_2
# 217 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 0
# 219 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checktrainerflag TRAINER_BATTLE_CAFE_MARCIE
	goto_if 1, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_2
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_1:
# 222 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 224 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	trainerbattle_no_intro TRAINER_BATTLE_CAFE_MARCIE, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_3
# 226 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 228 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_APPLAUSE
# 229 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_6
# 230 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 231 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_4
# 235 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 237 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 239 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_5
# 245 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_LUMIOSE_GALETTE
# 246 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 248 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_TEMP_1F
# 249 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_1
# 250 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 12, 7
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_2
# 252 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 17, 6
# 254 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 4
# 255 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 6
# 256 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 257 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 258 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 4, 6
# 260 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_WAITRESS
# 261 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 0, -2
# 263 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 264 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_BARISTA, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_7
# 265 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 267 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_6
# 271 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_TEMP_F, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_5
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_4:
# 278 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_8
# 281 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1E
# 282 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
	return

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_2:
# 220 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 1
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_1

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_5:
# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_7
# 275 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_CUSTAP_BERRY
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_4


ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo::
# 292 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SLIDING_DOOR
# 293 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 295 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1F
# 296 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_1
# 297 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 0, -2
# 298 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_2
# 299 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 0, -2
# 301 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 13
# 302 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 7
# 303 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 304 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 305 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 13, 7
# 306 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_WAITRESS
# 307 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 11, 9
# 309 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 311 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_0
# 312 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 313 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_M_SWAGGER
# 314 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 315 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2
# 316 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 317 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_0
# 324 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_LEMONADE
# 325 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_1
# 331 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 332 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_3
# 333 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_4
# 334 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 335 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_0
# 336 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 337 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_2
# 343 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 0
# 345 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checktrainerflag TRAINER_BATTLE_CAFE_MAMI
	goto_if 1, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_2
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_1:
# 348 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 350 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	trainerbattle_no_intro TRAINER_BATTLE_CAFE_MAMI, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_3
# 352 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 354 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_APPLAUSE
# 355 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_1
# 356 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_4
# 361 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 363 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_2
# 364 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay 30
# 365 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_3
# 366 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay 30
# 367 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_4
# 369 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 371 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_5
# 375 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_LUMIOSE_GALETTE
# 376 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 378 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_TEMP_1F
# 379 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_1
# 380 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 12, 7
# 381 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_2
# 382 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 17, 6
# 384 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 4
# 385 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 6
# 386 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 387 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 388 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 4, 6
# 390 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_WAITRESS
# 391 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 0, -2
# 393 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 394 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_BARISTA, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_7
# 395 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 397 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_6
# 401 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_TEMP_F, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_5
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_4:
# 408 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_8
# 411 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1E
# 412 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
	return

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_2:
# 346 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 1
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_1

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_5:
# 402 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_7
# 405 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_LIECHI_BERRY
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_4


ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo::
# 421 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SLIDING_DOOR
# 422 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 424 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1F
# 425 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_1
# 426 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 0, -2
# 427 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_2
# 428 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 0, -2
# 430 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 13
# 431 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 7
# 432 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 433 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 434 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 13, 7
# 435 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_WAITRESS
# 436 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 11, 9
# 438 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 440 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_0
# 441 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 442 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_PATRON, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_1
# 443 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 444 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_PIN
# 445 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 446 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_2
# 447 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 448 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_3
# 449 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 451 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2
# 452 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 453 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_0
# 459 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 460 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2
# 461 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_ICE_BREAK
# 462 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 463 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_2
# 464 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 465 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_1
# 468 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 469 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_4
# 470 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_3
# 471 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_WALL_HIT
# 472 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 473 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay 30
# 474 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_2
# 478 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 479 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_3
# 482 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 15, 7
# 483 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 484 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, Common_Movement_FaceLeft
# 485 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 487 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2
# 488 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 489 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_4
# 492 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_MOOMOO_MILK
# 493 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_5
# 500 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 501 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_3
# 502 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_4
# 503 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 504 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_0
# 505 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 506 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_6
# 512 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 0
# 514 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checktrainerflag TRAINER_BATTLE_CAFE_MISU
	goto_if 1, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_2
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_1:
# 517 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 519 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	trainerbattle_no_intro TRAINER_BATTLE_CAFE_MISU, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_7
# 521 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 523 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_APPLAUSE
# 524 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_0
# 525 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_8
# 532 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 534 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 536 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_9
# 540 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_LUMIOSE_GALETTE
# 541 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 543 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_TEMP_1F
# 544 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_1
# 545 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 12, 7
# 546 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_2
# 547 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 17, 6
# 549 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 4
# 550 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 6
# 551 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 552 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 553 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 4, 6
# 555 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_WAITRESS
# 556 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 0, -2
# 558 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 559 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_BARISTA, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_7
# 560 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 562 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_10
# 566 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_TEMP_F, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_5
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_4:
# 573 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_8
# 576 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1E
# 577 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
	return

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_2:
# 515 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 1
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_1

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_5:
# 567 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_7
# 570 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_KEE_BERRY
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_4


# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_0:
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_up
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_right
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_down
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
	step_end

# 189 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_1:
# 189 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	emote_heart
	step_end

# 191 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2:
# 191 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_left
	step_end

# 207 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_3:
# 207 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 207 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 207 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 207 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 207 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
	step_end

# 208 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_4:
# 208 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_down
# 208 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_down
# 208 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 208 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 208 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 208 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 208 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 208 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 208 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_right
	step_end

# 210 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_5:
# 210 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 210 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 210 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	jump_in_place_left
# 210 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	jump_in_place_left
# 210 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 210 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 229 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_6:
# 229 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 229 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 229 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	jump_in_place_left
# 229 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	jump_in_place_up
# 229 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	jump_in_place_right
# 229 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	jump_in_place_down
# 229 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	jump_in_place_left
# 229 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	emote_heart
# 229 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 229 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 264 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_7:
# 264 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 264 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 264 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_down
# 264 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
	step_end

# 335 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_0:
# 335 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 335 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 335 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_left
# 335 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_left
# 335 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 335 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 355 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_1:
# 355 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 355 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 355 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_faster_left
# 355 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_faster_left
# 355 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 355 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 363 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_2:
# 363 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 363 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 363 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 363 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 363 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 363 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 363 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 363 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 363 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 363 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 363 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 363 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
	step_end

# 365 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_3:
# 365 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_down
	step_end

# 367 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_4:
# 367 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
	step_end

# 440 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_0:
# 440 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 440 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 440 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 440 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
# 440 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 440 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_up
# 440 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 440 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_right
# 440 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 440 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_down
# 440 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 440 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
# 440 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
	step_end

# 442 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_1:
# 442 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	emote_question_mark
# 442 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 442 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 442 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 442 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_right
# 442 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 446 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_2:
# 446 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	emote_exclamation_mark
# 446 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 446 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 448 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_3:
# 448 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 448 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 448 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_right
# 448 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_right
# 448 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_right
# 448 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_up
# 448 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_up
# 448 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
# 448 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 448 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 469 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_4:
# 469 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 469 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	slide_down
# 469 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	slide_down
	step_end

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_0:
# 16 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Oooh, already back for more~?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_1:
# 21 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Haiyo~! Welcome to Café Lumi! Home of\n"
	.string "the STARLIGHT Cinnamon Roll herself,\l"
	.string "Azalea!\p"
	.string "Have you come to try our famous\n"
	.string "hotcakes?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_2:
# 27 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Wonderful! Which hotcake combo would\n"
	.string "you like~? {COLOR GREEN}(='u'=)$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_3:
# 29 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Nevermind :($"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_4:
# 30 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Classy~$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_5:
# 31 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Applin Cinna-Mon!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_6:
# 32 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Funfetti!!!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_7:
# 34 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Super Secret Special???$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_8:
# 41 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Oooh~, good choice! It'll just be ¥2,500,\n"
	.string "is that okidokii~?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_9:
# 51 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Sowwy... We can't serve you if you can't\n"
	.string "pay for it... ):$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_10:
# 63 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Fantastic! Please take a seat over\n"
	.string "there, and your Café Cutie will be right\l"
	.string "with you, heehee.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_11:
# 75 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Hehe, so you like them a little tart,\n"
	.string "hmm~? It'll be ¥2,500, okidokii~?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_12:
# 109 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Yum-yum! I love confetti cake! It'll be\n"
	.string "¥2,500, okidokiiii~?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_13:
# 152 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Awwh. Let me know if you change your\n"
	.string "mind! {COLOR GREEN}(='w'=)$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_0:
# 194 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Haiyoooo~! My name is Marcie, and I'll be\n"
	.string "your Café Cuuuutie for today~!\p"
	.string "Bet'cha didn't expect me to be serving\n"
	.string "as well, ehe.\p"
	.string "First, let's start you off with a fizzy\n"
	.string "bottle of Lumi-Cola, made with lots of\l"
	.string "love from yours truly~!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_1:
# 200 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
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
# 213 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
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
# 224 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "A splendid show!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_4:
# 232 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Yay! What a wonderful performance! The\n"
	.string "Café gods shine upon us, trainer!\p"
	.string "And with that... ta-da! Our ritual is\n"
	.string "complete! Bon appétit~! Hee-hee.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_5:
# 240 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "{COLOR GREEN}> You dig into the stack of pancakes,\n"
	.string "expecting an explosion of flavor!\p"
	.string "> But to your disappointment, they\n"
	.string "taste no different than the same kind\l"
	.string "you buy at the frozen food aisle.\p"
	.string "> Still, you thought the café\n"
	.string "experience was fun.\p"
	.string "> You decided to save one for the road.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_6:
# 268 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Thank you for your patronage, trainer!\n"
	.string "It was nice meeting you. Our battle was\l"
	.string "quite fun, heehee~.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_7:
# 273 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Ooh, and please take this as well! It's a\n"
	.string "souvenir, to commemorate our exciting\l"
	.string "battle!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_8:
# 279 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Please come visit us again! {COLOR GREEN}(=>w<=)$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_0:
# 318 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Haiyooo... My name is Mami, and I'll, uh...\p"
	.string "-ahem-...\p"
	.string "be your Café Cutie for today...\p"
	.string "Anyways, let's start you off with this\n"
	.string "fresh can of tasty Lumi-nade.\p"
	.string "I made it with...{PAUSE 30} lots of love, so uh,\n"
	.string "please enjoy it or something...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_1:
# 326 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "And now for the main course.\p"
	.string "A stack of...{PAUSE 60} fruitastic Applin\n"
	.string "Cinna-Mon hotcakes...\p"
	.string "But before I can serve them, I'll need\n"
	.string "to enchant it with our super special\l"
	.string "secret ingredient.\p"
	.string "I'll need your help to do it, so come up\n"
	.string "to the stage with me.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_2:
# 338 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "To infuse your hotcakes with maximum\n"
	.string "flavor, I'll need to call upon the Café\l"
	.string "gods to grant us their power.\p"
	.string "But they'll only grant it to us if we\n"
	.string "entertain them with a battle.\p"
	.string "So we're going to have a battle.{PAUSE 30} Let's do\n"
	.string "our best, I guess.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_3:
# 350 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Awesome...\p"
	.string "I-I mean! W-Whatever, it was alright...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_4:
# 357 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "A-Anyways! The Café gods were really\n"
	.string "happy with our battle, and now your\l"
	.string "hotcakes will taste a lot better!\p"
	.string "P-Please enjoy them! Let me know if you\n"
	.string "need anything else!\p"
	.string "Okay bye!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_5:
# 372 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "{COLOR GREEN}> You dig into the stack of pancakes.\n"
	.string "They're the perfect blend of sweet and\l"
	.string "tart.\p"
	.string "> You decided to save one for the road.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_6:
# 398 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Thank you for your patronage, trainer!\n"
	.string "Mami said she a lot of fun with you, but\l"
	.string "don't let her know I told you, ehe.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_7:
# 403 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Ooh, and please take this souvenir as\n"
	.string "well, to commemorate the exciting\l"
	.string "battle between you two!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_0:
# 454 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "S-Sorry for the wait! {COLOR GREEN}(=>m<=)\p"
	.string "{COLOR DARK_GRAY}Let's start you off with a warm glass of\n"
	.string "soothing Moomoo Milk!\p"
	.string "W-Wait, I mean!{PAUSE 30} Haiyoooo!{PAUSE 30} My name is\n"
	.string "Misu, and I'll be your Cafe Cutie for\l"
	.string "today!\p"
	.string "L-Let's start you off with a warm glass\n"
	.string "of...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_1:
# 466 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "O-Oh no! I'm so sorry! I didn't mean to\n"
	.string "do that! H-Here, let me get go get you a\l"
	.string "new one real quick!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_2:
# 475 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Ooowie...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_3:
# 480 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "{COLOR GREEN}> You got up and helped Misu off the\n"
	.string "floor.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_4:
# 490 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "S-Sorry for the delay. Here is your warm\n"
	.string "glass of soothing Moomoo Milk, made\l"
	.string "with extra extra love to make up for my\l"
	.string "mistake...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_5:
# 494 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "And now, for the main course...\p"
	.string "A-A stack of super-sweet funfetti\n"
	.string "hotcakes!\p"
	.string "But before I can serve them, I'll have\n"
	.string "to enchant it with our super special\l"
	.string "secret ingredient...\p"
	.string "I-I'll need your help as well, so please\n"
	.string "come onto the stage with me!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_6:
# 507 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "To infuse your hotcakes with maximum\n"
	.string "flavor, we'll need to call upon the Café\l"
	.string "gods for them to grant us their power...\p"
	.string "But they'll only lend us their power... if\n"
	.string "we entertain them with a battle...\p"
	.string "So l-let's do our best, trainer!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_7:
# 519 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Amazing...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_8:
# 526 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
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
# 537 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "{COLOR GREEN}> You dig into the stack of pancakes.\n"
	.string "They bring back memories of childhood\l"
	.string "nostalgia of when your mother made you\l"
	.string "a birthday cake.\p"
	.string "> You decided to save one for the road.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_10:
# 563 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Thank you for your patronage, trainer!\n"
	.string "Please forgive Misu for any mishaps she\l"
	.string "may have committed during your service.\l"
	.string "She's still new and trying her very best,\l"
	.string "ehe.$"
