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
	waitmovement 0
# 16 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Mami_Text_0, MSGBOX_AUTOCLOSE
# 19 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_BATTLE_CAFE_Misu::
# 23 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	lock
# 24 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Misu_Text_0, MSGBOX_AUTOCLOSE
# 27 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron1::
# 31 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	lock
# 32 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	faceplayer
# 33 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron1_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron2::
# 39 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	lock
# 40 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	faceplayer
# 41 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron2_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron3::
# 47 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	lock
# 48 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron3_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_BATTLE_CAFE_WaitingMother::
# 54 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	lock
# 55 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_WaitingMother_Text_0, MSGBOX_AUTOCLOSE
# 59 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_BATTLE_CAFE_WaitingChild::
# 63 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	lock
# 64 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_WaitingChild_Text_0, MSGBOX_AUTOCLOSE
# 67 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista::
# 77 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	lock
# 78 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	faceplayer
# 79 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto_if_set FLAG_TEMP_1E, ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_2
# 85 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_1, MSGBOX_YESNO
ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_1:
# 90 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_6
# 212 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_Decline
ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5:
# 215 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
AetheriaBattleCafeBarista_Decline:
# 216 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_12
# 219 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
# 221 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
AetheriaBattleCafeBarista_End:
# 222 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 223 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_2:
# 80 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_0, MSGBOX_YESNO
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_1

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_6:
# 91 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_2
# 94 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_3, 4
# 95 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_4, 0
# 96 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_5, 1
# 97 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_6, 2
# 101 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	dynmultistack 0, 0, TRUE, 5, FALSE, 4, DYN_MULTICHOICE_CB_NONE
# 102 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	switch VAR_RESULT
# 103 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	case 0, ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_10
# 137 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	case 1, ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_11
# 171 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	case 2, ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_12
# 206 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_Decline
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_10:
# 104 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	showmoneybox 18, 0
# 105 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_7, MSGBOX_YESNO
# 108 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_14
# 113 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checkmoney 2500
# 114 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_23
# 122 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removemoney 2500
# 123 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	updatemoneybox
# 124 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SHOP
# 125 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 126 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 127 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_9
# 130 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 131 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_FOLLOWERS_DISABLED
# 132 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidefollower
# 133 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	call ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo
# 134 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_11:
# 138 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	showmoneybox 18, 0
# 139 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_10, MSGBOX_YESNO
# 142 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_17
# 147 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checkmoney 2500
# 148 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_26
# 156 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removemoney 2500
# 157 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	updatemoneybox
# 158 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SHOP
# 159 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 160 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 161 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_9
# 164 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 165 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_FOLLOWERS_DISABLED
# 166 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidefollower
# 167 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	call ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo
# 168 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_12:
# 172 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	showmoneybox 18, 0
# 173 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_11, MSGBOX_YESNO
# 176 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_20
# 181 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checkmoney 2500
# 182 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_29
# 190 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removemoney 2500
# 191 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	updatemoneybox
# 192 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SHOP
# 193 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 194 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 195 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_9
# 198 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 199 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_FOLLOWERS_DISABLED
# 200 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidefollower
# 201 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	call ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo
# 202 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_14:
# 109 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 110 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_Decline
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_17:
# 143 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 144 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_Decline
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_20:
# 177 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 178 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_Decline
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_23:
# 115 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_8
# 118 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 119 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_26:
# 149 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_8
# 152 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 153 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_29:
# 183 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_8
# 186 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	hidemoneybox
# 187 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	goto AetheriaBattleCafeBarista_End
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_5


ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo::
# 232 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SLIDING_DOOR
# 233 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 235 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1F
# 236 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_1
# 237 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 0, -2
# 238 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_2
# 239 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 0, -2
# 241 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 13
# 242 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 7
# 243 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 244 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 245 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 13, 7
# 246 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_WAITRESS
# 247 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 11, 9
# 249 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_0
# 252 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 253 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SHINY
# 254 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_1
# 255 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 256 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2
# 257 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 258 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_0
# 263 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_SODA_POP
# 264 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_1
# 271 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_3
# 273 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_4
# 274 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 275 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_5
# 276 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 277 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_2
# 282 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 0
# 284 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checktrainerflag TRAINER_BATTLE_CAFE_MARCIE
	goto_if 1, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_2
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_1:
# 287 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 289 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	trainerbattle_no_intro TRAINER_BATTLE_CAFE_MARCIE, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_3
# 291 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 293 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_APPLAUSE
# 294 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_Mami_Movement_0
# 295 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 296 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_4
# 300 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 302 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 304 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_5
# 310 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_ISLANDGAME_PANCAKE_MARCIE
# 311 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 313 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_TEMP_1F
# 314 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_1
# 315 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 12, 7
# 316 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_2
# 317 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 17, 6
# 319 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 4
# 320 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 6
# 321 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 322 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 323 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 4, 6
# 325 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_WAITRESS
# 326 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 0, -2
# 328 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 329 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_BARISTA, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_6
# 330 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 332 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_6
# 336 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_TEMP_F, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_5
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_4:
# 343 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_8
# 346 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1E
# 347 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
	return

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_2:
# 285 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 1
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_1

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_5:
# 337 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_7
# 340 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_CUSTAP_BERRY
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_4


ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo::
# 357 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SLIDING_DOOR
# 358 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 360 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1F
# 361 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_1
# 362 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 0, -2
# 363 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_2
# 364 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 0, -2
# 366 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 13
# 367 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 7
# 368 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 369 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 370 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 13, 7
# 371 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_WAITRESS
# 372 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 11, 9
# 374 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 376 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_0
# 377 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 378 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_M_SWAGGER
# 379 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 380 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2
# 381 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 382 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_0
# 389 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_LEMONADE
# 390 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_1
# 396 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 397 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_3
# 398 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_4
# 399 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 400 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_0
# 401 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 402 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_2
# 408 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 0
# 410 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checktrainerflag TRAINER_BATTLE_CAFE_MAMI
	goto_if 1, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_2
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_1:
# 413 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 415 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	trainerbattle_no_intro TRAINER_BATTLE_CAFE_MAMI, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_3
# 417 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 419 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_APPLAUSE
# 420 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_1
# 421 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_4
# 426 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 428 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_2
# 429 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay 30
# 430 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_3
# 431 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay 30
# 432 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_4
# 434 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 436 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_5
# 440 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_ISLANDGAME_PANCAKE_MAMI
# 441 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 443 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_TEMP_1F
# 444 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_1
# 445 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 12, 7
# 446 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_2
# 447 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 17, 6
# 449 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 4
# 450 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 6
# 451 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 452 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 453 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 4, 6
# 455 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_WAITRESS
# 456 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 0, -2
# 458 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 459 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_BARISTA, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_6
# 460 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 462 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_6
# 466 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_TEMP_F, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_5
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_4:
# 473 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_8
# 476 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1E
# 477 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
	return

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_2:
# 411 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 1
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_1

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_5:
# 467 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_7
# 470 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_LIECHI_BERRY
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_4


ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo::
# 486 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_SLIDING_DOOR
# 487 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 489 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1F
# 490 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_1
# 491 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 0, -2
# 492 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_NPC_2
# 493 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 0, -2
# 495 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 13
# 496 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 7
# 497 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 498 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 499 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 13, 7
# 500 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_WAITRESS
# 501 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 11, 9
# 503 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 505 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_0
# 506 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 507 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_PATRON, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_1
# 508 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 509 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_PIN
# 510 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 511 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_2
# 512 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 513 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_3
# 514 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 516 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2
# 517 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 518 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_0
# 524 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 525 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2
# 526 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_ICE_BREAK
# 527 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 528 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_2
# 529 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 530 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_1
# 533 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 534 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_4
# 535 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_3
# 536 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_WALL_HIT
# 537 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitse
# 538 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay 30
# 539 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_2
# 543 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 544 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_3
# 547 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 548 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 15, 7
# 549 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 550 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, Common_Movement_FaceLeft
# 551 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 553 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2
# 554 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 555 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_4
# 558 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_MOOMOO_MILK
# 559 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_5
# 566 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 567 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_3
# 568 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_4
# 569 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 570 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_0
# 571 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 572 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_6
# 578 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 0
# 580 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	checktrainerflag TRAINER_BATTLE_CAFE_MISU
	goto_if 1, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_2
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_1:
# 583 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 585 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	trainerbattle_no_intro TRAINER_BATTLE_CAFE_MISU, ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_7
# 587 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 589 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	playse SE_APPLAUSE
# 590 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_WAITRESS, ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_0
# 591 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_8
# 598 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 600 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_TO_BLACK
# 602 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_9
# 606 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	giveitem ITEM_ISLANDGAME_PANCAKE_MISU
# 607 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	closemessage
# 609 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_TEMP_1F
# 610 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_1
# 611 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_1, 12, 7
# 612 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	addobject LOCALID_NPC_2
# 613 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_NPC_2, 17, 6
# 615 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8000, 4
# 616 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_0x8001, 6
# 617 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	callnative TeleportCamera
# 618 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 619 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 4, 6
# 621 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	removeobject LOCALID_WAITRESS
# 622 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setobjectxy LOCALID_WAITRESS, 0, -2
# 624 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 625 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	applymovement LOCALID_BARISTA, ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_6
# 626 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	waitmovement 0
# 628 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_10
# 632 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	compare VAR_TEMP_F, 0
	goto_if_eq ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_5
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_4:
# 639 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_8
# 642 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setflag FLAG_TEMP_1E
# 643 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
	return

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_2:
# 581 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	setvar VAR_TEMP_F, 1
	goto ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_1

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_5:
# 633 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_7
# 636 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
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

# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_0:
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_up
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_right
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_down
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
# 251 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
	step_end

# 254 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_1:
# 254 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	emote_heart
	step_end

# 256 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_2:
# 256 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_left
	step_end

# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_3:
# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 272 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
	step_end

# 273 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_4:
# 273 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_down
# 273 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_down
# 273 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 273 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 273 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 273 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 273 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_right
	step_end

# 275 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_5:
# 275 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 275 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 275 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	jump_in_place_left
# 275 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	jump_in_place_left
# 275 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 275 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 329 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Movement_6:
# 329 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 329 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 329 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_down
# 329 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
	step_end

# 400 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_0:
# 400 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 400 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 400 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_left
# 400 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_left
# 400 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 400 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 420 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_1:
# 420 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 420 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 420 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_faster_left
# 420 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_faster_left
# 420 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 420 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 428 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_2:
# 428 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 428 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 428 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 428 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 428 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 428 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 428 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 428 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 428 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 428 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 428 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
# 428 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_left
	step_end

# 430 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_3:
# 430 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_down
	step_end

# 432 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Movement_4:
# 432 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
	step_end

# 505 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_0:
# 505 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_right
# 505 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 505 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_up
# 505 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
# 505 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 505 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_up
# 505 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 505 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_right
# 505 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 505 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_down
# 505 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
# 505 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
# 505 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_8
	step_end

# 507 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_1:
# 507 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	emote_question_mark
# 507 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 507 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 507 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 507 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_in_place_right
# 507 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 511 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_2:
# 511 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	emote_exclamation_mark
# 511 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 511 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 513 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_3:
# 513 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 513 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 513 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_right
# 513 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_right
# 513 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_right
# 513 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_up
# 513 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_up
# 513 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	face_left
# 513 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
# 513 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	delay_16
	step_end

# 534 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Movement_4:
# 534 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 534 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
# 534 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	walk_fast_down
	step_end

ISLANDGAME_AETHERIA_BATTLE_CAFE_Mami_Text_0:
# 17 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Ugh, I can't believe I'm doing\n"
	.string "this...{COLOR GREEN}(=>->=)$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Misu_Text_0:
# 25 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Kyaaa!{PAUSE 30} I-I'm so sorry! I didn't mean to\n"
	.string "spill your drink!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron1_Text_0:
# 34 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Mami's my favorite.\p"
	.string "Some might be turned off by her cold\n"
	.string "indifference, but I think it makes her\l"
	.string "much cooler!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron2_Text_0:
# 42 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Marcie's joy and energy is infectious.\p"
	.string "She never fails to cheer me up after a\n"
	.string "bad day!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Patron3_Text_0:
# 49 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Oh, don't worry about it...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_WaitingMother_Text_0:
# 56 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "I don't think this type of café would be\n"
	.string "appropriate for you, dearie...\p"
	.string "You still don't have your own Pokémon\n"
	.string "yet...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_WaitingChild_Text_0:
# 65 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "But I want flapjacks... -sniff-$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_0:
# 81 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Oooh, already back for more?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_1:
# 86 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Haiyo! Welcome to Café Lumi! Home of\n"
	.string "the STARLIGHT Cinnamon Swirl herself,\l"
	.string "Serafina!\p"
	.string "Have you come to try our famous\n"
	.string "hotcakes?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_2:
# 92 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Wonderful! Which hotcake combo would\n"
	.string "you like? {COLOR GREEN}(='u'=)$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_3:
# 94 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Nevermind :($"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_4:
# 95 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Classy$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_5:
# 96 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Appl-in Cinna-mon...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_6:
# 97 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Funfetti!!!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_7:
# 106 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Oooh, good choice! It'll just be ¥2,500,\n"
	.string "is that okidokii?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_8:
# 116 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Sowwy... We can't serve you if you can't\n"
	.string "pay for it... ):$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_9:
# 128 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Fantastic! Please take a seat over\n"
	.string "there, and your Café Cutie will be right\l"
	.string "with you, heehee.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_10:
# 140 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Hehe, so you like them a little tart,\n"
	.string "hmm? It'll be ¥2,500, okidokii?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_11:
# 174 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Yum-yum! I love confetti cake! It'll be\n"
	.string "¥2,500, okidokiiii?$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_Barista_Text_12:
# 217 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Awwh. Let me know if you change your\n"
	.string "mind! {COLOR GREEN}(='w'=)$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_0:
# 259 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Haiyoooo! My name is Marcie, and I'll be\n"
	.string "your Café Cuuuutie for today!\p"
	.string "Bet'cha didn't expect me to be serving\n"
	.string "as well, ehe.\p"
	.string "First, let's start you off with a fizzy\n"
	.string "bottle of Lumi-Cola, made with lots of\l"
	.string "love from yours truly!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_1:
# 265 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "And now... for the main course!\p"
	.string "A stack of our famous buttermilk\n"
	.string "hotcakes!\p"
	.string "But before I can serve them to you... we\n"
	.string "have to bless it with our super special\l"
	.string "secret ingredient!\p"
	.string "In order to bless your hotcakes, I'll\n"
	.string "need your help, ehe.\p"
	.string "Come on up to the stage with me!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_2:
# 278 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
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
# 289 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "A splendid show!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_4:
# 297 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Yay! What a wonderful performance! The\n"
	.string "Café gods shine upon us, trainer!\p"
	.string "And with that... ta-da! Our ritual is\n"
	.string "complete! Bon appétit! Hee-hee.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_5:
# 305 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "{COLOR GREEN}> You dig into the stack of pancakes,\n"
	.string "expecting an explosion of flavor!\p"
	.string "> But to your disappointment, they\n"
	.string "taste no different than the same kind\l"
	.string "you buy at the frozen food aisle.\p"
	.string "> Still, you thought the café\n"
	.string "experience was fun.\p"
	.string "> You decided to save one for the road.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_6:
# 333 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Thank you for your patronage, trainer!\n"
	.string "It was nice meeting you. Our battle was\l"
	.string "quite fun, heehee.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_7:
# 338 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Ooh, and please take this as well! It's a\n"
	.string "souvenir, to commemorate our exciting\l"
	.string "battle!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_ClassyCombo_Text_8:
# 344 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Please come visit us again! {COLOR GREEN}(=>w<=)$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_0:
# 383 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Haiyooo... My name is Mami, and I'll, uh...\p"
	.string "-ahem-...\p"
	.string "be your Café Cutie for today...\p"
	.string "Anyways, let's start you off with this\n"
	.string "fresh can of tasty Lumi-nade.\p"
	.string "I made it with...{PAUSE 30} lots of love, so uh,\n"
	.string "please enjoy it or something...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_1:
# 391 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "And now for the main course.\p"
	.string "A stack of...{PAUSE 60} fruitastic Applin\n"
	.string "Cinna-Mon hotcakes...\p"
	.string "But before I can serve them, I'll need\n"
	.string "to enchant it with our super special\l"
	.string "secret ingredient.\p"
	.string "I'll need your help to do it, so come up\n"
	.string "to the stage with me.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_2:
# 403 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "To infuse your hotcakes with maximum\n"
	.string "flavor, I'll need to call upon the Café\l"
	.string "gods to grant us their power.\p"
	.string "But they'll only grant it to us if we\n"
	.string "entertain them with a battle.\p"
	.string "So we're going to have a battle.{PAUSE 30} Let's do\n"
	.string "our best, I guess.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_3:
# 415 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Awesome...\p"
	.string "I-I mean! W-Whatever, it was alright...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_4:
# 422 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "A-Anyways! The Café gods were really\n"
	.string "happy with our battle, and now your\l"
	.string "hotcakes will taste a lot better!\p"
	.string "P-Please enjoy them! Let me know if you\n"
	.string "need anything else!\p"
	.string "Okay bye!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_5:
# 437 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "{COLOR GREEN}> You dig into the stack of pancakes.\p"
	.string "They're the perfect blend of sweet and\n"
	.string "tart.\p"
	.string "> You decided to save one for the road.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_6:
# 463 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Thank you for your patronage, trainer!\n"
	.string "Mami said she a lot of fun with you, but\l"
	.string "don't let her know I told you, ehe.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_AppleCombo_Text_7:
# 468 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Ooh, and please take this souvenir as\n"
	.string "well, to commemorate the exciting\l"
	.string "battle between you two!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_0:
# 519 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "S-Sorry for the wait! {COLOR GREEN}(=>m<=)\p"
	.string "{COLOR DARK_GRAY}Let's start you off with a warm glass of\n"
	.string "soothing Moomoo Milk!\p"
	.string "W-Wait, I mean!{PAUSE 30} Haiyoooo!{PAUSE 30} My name is\n"
	.string "Misu, and I'll be your Cafe Cutie for\l"
	.string "today!\p"
	.string "L-Let's start you off with a warm glass\n"
	.string "of...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_1:
# 531 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "O-Oh no! I'm so sorry! I didn't mean to\n"
	.string "do that! H-Here, let me get go get you a\l"
	.string "new one real quick!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_2:
# 540 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Ooowie...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_3:
# 545 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "{COLOR GREEN}> You got up and helped Misu off the\n"
	.string "floor.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_4:
# 556 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "S-Sorry for the delay. Here is your warm\n"
	.string "glass of soothing Moomoo Milk, made\l"
	.string "with extra extra love to make up for my\l"
	.string "mistake...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_5:
# 560 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "And now, for the main course...\p"
	.string "A-A stack of super-sweet funfetti\n"
	.string "hotcakes!\p"
	.string "But before I can serve them, I'll have\n"
	.string "to enchant it with our super special\l"
	.string "secret ingredient...\p"
	.string "I-I'll need your help as well, so please\n"
	.string "come onto the stage with me!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_6:
# 573 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "To infuse your hotcakes with maximum\n"
	.string "flavor, we'll need to call upon the Café\l"
	.string "gods for them to grant us their power...\p"
	.string "But they'll only lend us their power... if\n"
	.string "we entertain them with a battle...\p"
	.string "So l-let's do our best, trainer!$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_7:
# 585 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Amazing...$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_8:
# 592 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
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
# 603 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "{COLOR GREEN}> You dig into the stack of pancakes.\p"
	.string "They bring back memories of childhood\n"
	.string "nostalgia of when your mother made you\l"
	.string "a birthday cake.\p"
	.string "> You decided to save one for the road.$"

ISLANDGAME_AETHERIA_BATTLE_CAFE_FunfettiCombo_Text_10:
# 629 "data/maps/ISLANDGAME_AETHERIA_BATTLE_CAFE/scripts.pory"
	.string "Thank you for your patronage, trainer!\n"
	.string "Please forgive Misu for any mishaps she\l"
	.string "may have committed during your service.\l"
	.string "She's still new and trying her very best,\l"
	.string "ehe.$"
