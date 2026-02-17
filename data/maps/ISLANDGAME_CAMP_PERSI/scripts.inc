ISLANDGAME_CAMP_PERSI_MapScripts::
# 2 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setobjectaswildencounter LOCALID_OVERWORLD_MON_1, ENCOUNTER_LAND
# 4 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setobjectaswildencounter LOCALID_OVERWORLD_MON_2, ENCOUNTER_LAND
# 6 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	quest_emote_on_warp LOCALID_CARD_KID, QUEST_PERSI_FAVORITE_CARD
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 0 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, QUEST_COMPLETED
	goto_if_eq ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_CAMP_PERSI_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 9 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setobjecthidden LOCALID_CARD_KID
	return


ISLANDGAME_CAMP_PERSI_Interact_CookieGirl::
# 17 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_set FLAG_DAILY_PERSI_COOKIE_GIRL_SALE, ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_2
# 23 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 24 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	showmoneybox 0, 0
# 26 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Text_1, MSGBOX_YESNO
# 31 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_5
	checkmoney 250
# 0 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_6
	checkitemspace ITEM_LAVA_COOKIE
# 0 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_7
# 44 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_DAILY_PERSI_COOKIE_GIRL_SALE
# 45 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removemoney 250
# 46 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	updatemoneybox
# 47 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Text_5
# 48 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 49 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_LAVA_COOKIE
ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_4:
# 52 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement VAR_LAST_TALKED, ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Movement_0
# 53 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
	return

ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_2:
# 18 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Text_0, MSGBOX_NPC
# 19 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement VAR_LAST_TALKED, ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Movement_0
	end

ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_5:
# 32 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 33 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Text_2
	goto ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_4

ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_6:
# 36 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Text_3
# 37 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
	goto ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_4

ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_7:
# 40 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 41 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Text_4
	goto ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_4


ISLANDGAME_CAMP_PERSI_Interact_CandyBoy::
# 57 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_set FLAG_DAILY_PERSI_CANDY_BOY_SALE, ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_2
# 63 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 64 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	showmoneybox 0, 0
# 66 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_Text_1, MSGBOX_YESNO
# 71 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_5
	checkmoney 250
# 0 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_6
	checkitemspace ITEM_RAGE_CANDY_BAR
# 0 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_7
# 84 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_DAILY_PERSI_CANDY_BOY_SALE
# 85 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removemoney 250
# 86 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	updatemoneybox
# 87 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_Text_5
# 88 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 89 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_RAGE_CANDY_BAR
ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_4:
# 92 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement VAR_LAST_TALKED, ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Movement_0
# 93 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
	return

ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_2:
# 58 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_Text_0, MSGBOX_NPC
# 59 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement VAR_LAST_TALKED, ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Movement_0
	end

ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_5:
# 72 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 73 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_Text_2
	goto ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_4

ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_6:
# 76 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_Text_3
# 77 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
	goto ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_4

ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_7:
# 80 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	hidemoneybox
# 81 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_Text_4
	goto ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_4


ISLANDGAME_CAMP_PERSI_Interact_CardKid::
# 97 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 98 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 100 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 0 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	switch VAR_RESULT
# 101 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_INACTIVE, ISLANDGAME_CAMP_PERSI_Interact_CardKid_3
# 117 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_ACTIVE, ISLANDGAME_CAMP_PERSI_Interact_CardKid_4
# 134 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_REWARD, ISLANDGAME_CAMP_PERSI_Interact_CardKid_5
# 137 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_Interact_CardKid_6
ISLANDGAME_CAMP_PERSI_Interact_CardKid_1:
# 141 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_Interact_CardKid_3:
# 102 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CardKid_Text_0, MSGBOX_YESNO
# 109 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CAMP_PERSI_Interact_CardKid_7
# 114 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CardKid_Text_2
	goto ISLANDGAME_CAMP_PERSI_Interact_CardKid_1

ISLANDGAME_CAMP_PERSI_Interact_CardKid_4:
	checkitem ITEM_ISLANDGAME_TRADING_CARD
# 0 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_Interact_CardKid_10
# 131 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CardKid_Text_4
	goto ISLANDGAME_CAMP_PERSI_Interact_CardKid_1

ISLANDGAME_CAMP_PERSI_Interact_CardKid_5:
# 135 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto ISLANDGAME_CAMP_PERSI_TryGiveTradingCardReward
	goto ISLANDGAME_CAMP_PERSI_Interact_CardKid_1

ISLANDGAME_CAMP_PERSI_Interact_CardKid_6:
# 138 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CardKid_Text_5
	goto ISLANDGAME_CAMP_PERSI_Interact_CardKid_1

ISLANDGAME_CAMP_PERSI_Interact_CardKid_7:
# 110 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CardKid_Text_1
# 111 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	startquest QUEST_PERSI_FAVORITE_CARD
	goto ISLANDGAME_CAMP_PERSI_Interact_CardKid_1

ISLANDGAME_CAMP_PERSI_Interact_CardKid_10:
# 119 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removeitem ITEM_ISLANDGAME_TRADING_CARD
# 121 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_CardKid_Text_3
# 128 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto ISLANDGAME_CAMP_PERSI_TryGiveTradingCardReward
	goto ISLANDGAME_CAMP_PERSI_Interact_CardKid_1


ISLANDGAME_CAMP_PERSI_Interact_WaterGirl::
# 145 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	lock
# 146 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	faceplayer
# 148 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, ISLANDGAME_CAMP_PERSI_Interact_WaterGirl_2
# 161 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_WaterGirl_Text_3
ISLANDGAME_CAMP_PERSI_Interact_WaterGirl_1:
# 164 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_Interact_WaterGirl_2:
# 149 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_WaterGirl_Text_0, MSGBOX_YESNO
# 151 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CAMP_PERSI_Interact_WaterGirl_5
# 157 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_WaterGirl_Text_2
	goto ISLANDGAME_CAMP_PERSI_Interact_WaterGirl_1

ISLANDGAME_CAMP_PERSI_Interact_WaterGirl_5:
# 152 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_WaterGirl_Text_1
# 153 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 154 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
	goto ISLANDGAME_CAMP_PERSI_Interact_WaterGirl_1


ISLANDGAME_CAMP_PERSI_Interact_Middle_CounselorBoy::
# 168 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Middle_CounselorBoy_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_Interact_Middle_CounselorGirl::
# 176 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Middle_CounselorGirl_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_Interact_Middle_CamperBoy::
# 180 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Middle_CamperBoy_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_Interact_Middle_CamperGirl::
# 189 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Middle_CamperGirl_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_Interact_Middle_Hiker::
# 193 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Middle_Hiker_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_Interact_Middle_Gamer::
# 200 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Middle_Gamer_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_Interact_Upper_CounselorBoy::
# 204 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Upper_CounselorBoy_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_Interact_Upper_CounselorGirl::
# 208 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Upper_CounselorGirl_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_Interact_Upper_CamperBoy::
# 215 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Upper_CamperBoy_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_Interact_Upper_CamperGirl::
# 219 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Upper_CamperGirl_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_Interact_Upper_PeeingGuy::
# 226 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Upper_PeeingGuy_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_Interact_ZigzagoonGirl::
# 230 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_ZigzagoonGirl_Text_0, MSGBOX_NPC
# 231 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement VAR_LAST_TALKED, ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Movement_0
	return


ISLANDGAME_CAMP_PERSI_Interact_Zigzagoon::
# 235 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 236 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Zigzagoon_Text_0, MSGBOX_NPC
# 237 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement VAR_LAST_TALKED, ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Movement_0
	return


ISLANDGAME_CAMP_PERSI_Interact_Lower_CamperBoy::
# 241 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Lower_CamperBoy_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_Interact_Radio::
# 245 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Radio_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CAMP_PERSI_Interact_MacheteTreeEntrance::
# 249 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_MacheteTreeEntrance_Text_0, MSGBOX_YESNO
# 251 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CAMP_PERSI_Interact_MacheteTreeEntrance_1
	return

ISLANDGAME_CAMP_PERSI_Interact_MacheteTreeEntrance_1:
# 252 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	warp MAP_ISLANDGAME_CAMP_PERSI_MACHETE_TREE, 0
	return


ISLANDGAME_CAMP_PERSI_Interact_Sign_NuzlockeWarning::
# 257 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Sign_NuzlockeWarning_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CAMP_PERSI_Interact_Sign_Welcome::
# 266 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Sign_Welcome_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CAMP_PERSI_Interact_Sign_WildSide::
# 273 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Sign_WildSide_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CAMP_PERSI_Interact_Sign_Lake::
# 280 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Sign_Lake_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CAMP_PERSI_Interact_Sign_BerryShop::
# 284 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Sign_BerryShop_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_CAMP_PERSI_Interact_Sign_Directions::
# 291 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Interact_Sign_Directions_Text_0, MSGBOX_SIGN
	return


# 296 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_JonasSideOutro:
# 297 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 297 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 297 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 297 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 297 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 297 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

ISLANDGAME_CAMP_PERSI_Trigger_Jonas_Left::
# 301 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_unset FLAG_CAMP_PERSI_JONAS_DEFEATED, ISLANDGAME_CAMP_PERSI_Trigger_Jonas_Left_1
	return

ISLANDGAME_CAMP_PERSI_Trigger_Jonas_Left_1:
# 302 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_JonasStart
# 303 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_JONAS, ISLANDGAME_CAMP_PERSI_JonasLeftIntro
# 304 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_SNORUNT, ISLANDGAME_CAMP_PERSI_JonasLeftIntro
# 305 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement
# 306 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_Trigger_Jonas_Left_Movement_0
# 307 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_JonasMain
# 308 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_JONAS, ISLANDGAME_CAMP_PERSI_JonasSideOutro
# 309 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_SNORUNT, ISLANDGAME_CAMP_PERSI_JonasSideOutro
# 310 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_JonasEnd
	return


# 314 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_JonasLeftIntro:
# 315 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 315 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 315 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 315 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 315 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 315 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 316 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_left
	step_end

ISLANDGAME_CAMP_PERSI_Trigger_Jonas_FarLeft::
# 320 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_unset FLAG_CAMP_PERSI_JONAS_DEFEATED, ISLANDGAME_CAMP_PERSI_Trigger_Jonas_FarLeft_1
	return

ISLANDGAME_CAMP_PERSI_Trigger_Jonas_FarLeft_1:
# 321 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_JonasStart
# 322 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_JONAS, ISLANDGAME_CAMP_PERSI_JonasFarLeftIntro
# 323 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_SNORUNT, ISLANDGAME_CAMP_PERSI_JonasFarLeftIntro
# 324 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement
# 325 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_Trigger_Jonas_Left_Movement_0
# 326 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_JonasMain
# 327 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_JONAS, ISLANDGAME_CAMP_PERSI_JonasSideOutro
# 328 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_SNORUNT, ISLANDGAME_CAMP_PERSI_JonasSideOutro
# 329 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_JonasEnd
	return


# 333 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_JonasFarLeftIntro:
# 334 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 334 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 334 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 334 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 334 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 334 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 335 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_left
	step_end

ISLANDGAME_CAMP_PERSI_Trigger_Jonas_Right::
# 339 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_unset FLAG_CAMP_PERSI_JONAS_DEFEATED, ISLANDGAME_CAMP_PERSI_Trigger_Jonas_Right_1
	return

ISLANDGAME_CAMP_PERSI_Trigger_Jonas_Right_1:
# 340 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_JonasStart
# 341 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_JONAS, ISLANDGAME_CAMP_PERSI_JonasRightIntro
# 342 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_SNORUNT, ISLANDGAME_CAMP_PERSI_JonasRightIntro
# 343 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement
# 344 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_Trigger_Jonas_Right_Movement_0
# 345 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_JonasMain
# 346 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_JONAS, ISLANDGAME_CAMP_PERSI_JonasSideOutro
# 347 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_SNORUNT, ISLANDGAME_CAMP_PERSI_JonasSideOutro
# 348 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement
# 349 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_JonasEnd
	return


# 353 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_JonasRightIntro:
# 354 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 354 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 354 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 354 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 354 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 354 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 355 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_right
	step_end

ISLANDGAME_CAMP_PERSI_Trigger_Jonas_FarRight::
# 359 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_unset FLAG_CAMP_PERSI_JONAS_DEFEATED, ISLANDGAME_CAMP_PERSI_Trigger_Jonas_FarRight_1
	return

ISLANDGAME_CAMP_PERSI_Trigger_Jonas_FarRight_1:
# 360 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_JonasStart
# 361 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_JONAS, ISLANDGAME_CAMP_PERSI_JonasFarRightIntro
# 362 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_SNORUNT, ISLANDGAME_CAMP_PERSI_JonasFarRightIntro
# 363 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement
# 364 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_Trigger_Jonas_Right_Movement_0
# 365 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_JonasMain
# 366 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_JONAS, ISLANDGAME_CAMP_PERSI_JonasSideOutro
# 367 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_SNORUNT, ISLANDGAME_CAMP_PERSI_JonasSideOutro
# 368 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_JonasEnd
	return


# 372 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_JonasFarRightIntro:
# 373 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 373 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 373 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 373 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 373 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 373 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 374 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_right
	step_end

ISLANDGAME_CAMP_PERSI_Trigger_Jonas_Middle::
# 378 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	goto_if_unset FLAG_CAMP_PERSI_JONAS_DEFEATED, ISLANDGAME_CAMP_PERSI_Trigger_Jonas_Middle_1
	return

ISLANDGAME_CAMP_PERSI_Trigger_Jonas_Middle_1:
# 379 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_JonasStart
# 380 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_JONAS, ISLANDGAME_CAMP_PERSI_JonasMiddleIntro
# 381 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_SNORUNT, ISLANDGAME_CAMP_PERSI_JonasMiddleIntro
# 382 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_JonasMain
# 383 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_JONAS, ISLANDGAME_CAMP_PERSI_JonasMiddleOutro
# 384 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement LOCALID_SNORUNT, ISLANDGAME_CAMP_PERSI_JonasMiddleOutro
# 385 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	call ISLANDGAME_CAMP_PERSI_JonasEnd
	return


# 389 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_JonasMiddleIntro:
# 390 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 390 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 390 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 390 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 390 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

# 393 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_JonasMiddleOutro:
# 394 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_left
# 395 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 395 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 395 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 395 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 395 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 395 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
# 395 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	walk_down
	step_end

ISLANDGAME_CAMP_PERSI_Trainer_Hanzo::
# 401 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_1, ISLANDGAME_CAMP_PERSI_Trainer_Hanzo_Text, ISLANDGAME_CAMP_PERSI_Trainer_Hanzo_Text_0, ISLANDGAME_CAMP_PERSI_DefeatedHanzoGivesMachete
# 402 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Trainer_Hanzo_Text_1, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_Trainer_Lake_Edward::
# 413 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_2, ISLANDGAME_CAMP_PERSI_Trainer_Lake_Edward_Text, ISLANDGAME_CAMP_PERSI_Trainer_Lake_Edward_Text_0
# 414 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Trainer_Lake_Edward_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_Trainer_Lake_Lazlo::
# 425 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_3, ISLANDGAME_CAMP_PERSI_Trainer_Lake_Lazlo_Text, ISLANDGAME_CAMP_PERSI_Trainer_Lake_Lazlo_Text_0
# 426 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Trainer_Lake_Lazlo_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_Trainer_Lake_Patsy::
# 437 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_4, ISLANDGAME_CAMP_PERSI_Trainer_Lake_Patsy_Text, ISLANDGAME_CAMP_PERSI_Trainer_Lake_Patsy_Text_0
# 439 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Trainer_Lake_Patsy_Text_1, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_Trainer_Lake_Nina::
# 453 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_single TRAINER_CAMP_PERSI_TRAINER_5, ISLANDGAME_CAMP_PERSI_Trainer_Lake_Nina_Text, ISLANDGAME_CAMP_PERSI_Trainer_Lake_Nina_Text_0
# 455 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_Trainer_Lake_Nina_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_DefeatedHanzoGivesMachete::
# 471 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_DefeatedHanzoGivesMachete_Text_0, MSGBOX_AUTOCLOSE
	checkitem ITEM_ISLANDGAME_MACHETE
# 0 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_DefeatedHanzoGivesMachete_1
	return

ISLANDGAME_CAMP_PERSI_DefeatedHanzoGivesMachete_1:
# 478 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_ISLANDGAME_MACHETE
# 479 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	closemessage
	return


ISLANDGAME_CAMP_PERSI_TryGiveTradingCardReward::
# 484 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TryGiveTradingCardReward_Text_0
	checkitemspace ITEM_SOOTHE_BELL
# 0 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_TryGiveTradingCardReward_2
# 491 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TryGiveTradingCardReward_Text_1
# 492 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	questmenu QUEST_PERSI_FAVORITE_CARD, QUEST_REWARD
ISLANDGAME_CAMP_PERSI_TryGiveTradingCardReward_1:
# 495 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_TryGiveTradingCardReward_2:
# 487 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 488 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	completequest QUEST_PERSI_FAVORITE_CARD
	goto ISLANDGAME_CAMP_PERSI_TryGiveTradingCardReward_1


ISLANDGAME_CAMP_PERSI_JonasStart::
# 499 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_JonasStart_Text_0, MSGBOX_AUTOCLOSE
# 500 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_SAILOR, TRUE
	return


ISLANDGAME_CAMP_PERSI_JonasMain::
# 505 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_JonasMain_Text_0
# 517 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 519 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	trainerbattle_no_intro TRAINER_CAMP_PERSI_JONAS, ISLANDGAME_CAMP_PERSI_JonasMain_Text_1
# 525 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ISLANDGAME_CAMP_PERSI_JonasMain_2
# 538 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_JonasMain_Text_3, MSGBOX_AUTOCLOSE
# 543 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playfanfare MUS_HEAL
# 544 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitfanfare
# 545 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	special HealPlayerParty
# 547 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_JonasMain_Text_4
# 548 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	giveitem ITEM_ENERGY_POWDER
ISLANDGAME_CAMP_PERSI_JonasMain_1:
# 551 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_JonasMain_Text_5, MSGBOX_AUTOCLOSE
# 561 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	setflag FLAG_CAMP_PERSI_JONAS_DEFEATED
# 562 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_JonasMain_Movement_0
	return

ISLANDGAME_CAMP_PERSI_JonasMain_2:
# 528 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_JonasMain_Text_2, MSGBOX_AUTOCLOSE
# 533 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	playfanfare MUS_HEAL
# 534 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitfanfare
# 535 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	special HealPlayerParty
	goto ISLANDGAME_CAMP_PERSI_JonasMain_1


ISLANDGAME_CAMP_PERSI_JonasEnd::
# 567 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	waitmovement
# 568 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	savebgm MUS_DUMMY
# 569 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	fadedefaultbgm
# 570 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removeobject LOCALID_JONAS
# 571 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	removeobject LOCALID_SNORUNT
# 572 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	delay 32
# 573 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	releaseall
	return


# 19 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Movement_0:
# 19 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_original_direction
	step_end

# 306 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_Trigger_Jonas_Left_Movement_0:
# 306 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_right
	step_end

# 344 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_Trigger_Jonas_Right_Movement_0:
# 344 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_left
	step_end

# 562 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
ISLANDGAME_CAMP_PERSI_JonasMain_Movement_0:
# 562 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	delay_16
# 562 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	delay_16
# 562 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	face_down
	step_end

ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Text_0:
# 18 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "We can only sell one cookie per day!\p"
	.string "We don't have many cookies left...$"

ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Text_1:
# 27 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Hi there! I'm selling delicious Girl\n"
	.string "Scout Cookies to support Troop 115.\p"
	.string "Would you like to buy one for ¥250?$"

ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Text_2:
# 33 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Eeeh? But I said they were delicious...$"

ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Text_3:
# 36 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Eeeh? You don't have enough money?\n"
	.string "Phooey...$"

ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Text_4:
# 41 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Eeeh? You don't have enough room for\n"
	.string "this cookie?$"

ISLANDGAME_CAMP_PERSI_Interact_CookieGirl_Text_5:
# 47 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Yay! Thank you for your support!$"

ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_Text_0:
# 58 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Sorry, we're running low on candy bars,\n"
	.string "so we can only give one per person.\p"
	.string "Come again tomorrow!$"

ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_Text_1:
# 67 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Hi there! I'm selling tasty Boy Scout\n"
	.string "Candy Bars to support Troop 117.\p"
	.string "Would you like to buy one for ¥250?$"

ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_Text_2:
# 73 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Drats. I need more sales for that\n"
	.string "skateboard...$"

ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_Text_3:
# 76 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Huh? You don't have enough money?$"

ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_Text_4:
# 81 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Huh? You don't have room for this candy\n"
	.string "bar?$"

ISLANDGAME_CAMP_PERSI_Interact_CandyBoy_Text_5:
# 87 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Woohoo! Thanks for your support!$"

ISLANDGAME_CAMP_PERSI_Interact_CardKid_Text_0:
# 103 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "WAAAAAAH!\p"
	.string "I lost my super rare Charizard trading\n"
	.string "card!\p"
	.string "It was in my deck this morning, but now\n"
	.string "it's gone!\p"
	.string "I've looked everywhere for it, but I\n"
	.string "can't find it anywhere! Please help me!$"

ISLANDGAME_CAMP_PERSI_Interact_CardKid_Text_1:
# 110 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "My deck won't work without that\n"
	.string "Charizard card!$"

ISLANDGAME_CAMP_PERSI_Interact_CardKid_Text_2:
# 114 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "PLZZZZZZZZZ$"

ISLANDGAME_CAMP_PERSI_Interact_CardKid_Text_3:
# 122 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Yaaaay! You found it! Where was it?\p"
	.string "...\p"
	.string "Huh? It was just under my bed? But I\n"
	.string "checked under there a million times...\p"
	.string "Oh well. All that matters is I have my\n"
	.string "card back!$"

ISLANDGAME_CAMP_PERSI_Interact_CardKid_Text_4:
# 131 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Have you found it yet?$"

ISLANDGAME_CAMP_PERSI_Interact_CardKid_Text_5:
# 138 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Now I'm ready for my duel! Do you like\n"
	.string "playing the trading card game too?$"

ISLANDGAME_CAMP_PERSI_Interact_WaterGirl_Text_0:
# 149 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I really like gardening. Do you like\n"
	.string "gardening too?$"

ISLANDGAME_CAMP_PERSI_Interact_WaterGirl_Text_1:
# 152 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Hooray! Here, take one of these and we\n"
	.string "can become gardening buddies!$"

ISLANDGAME_CAMP_PERSI_Interact_WaterGirl_Text_2:
# 157 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Aww. That's a shame. I was going to\n"
	.string "share this Squirt Bottle with you.$"

ISLANDGAME_CAMP_PERSI_Interact_WaterGirl_Text_3:
# 161 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "It's important to give your plants\n"
	.string "water! Remember to take care of them!$"

ISLANDGAME_CAMP_PERSI_Interact_Middle_CounselorBoy_Text_0:
# 169 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I'm one of the counselors here at Camp\n"
	.string "Persi. I tell you man, it is NOT easy.\p"
	.string "Coming up with new spooky stories to\n"
	.string "tell during campfire time is tough work.\p"
	.string "Maybe for tonight's campfire we'll just\n"
	.string "sing a song.$"

ISLANDGAME_CAMP_PERSI_Interact_Middle_CounselorGirl_Text_0:
# 176 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I'm taking the campers on a nature hike\n"
	.string "later today.$"

ISLANDGAME_CAMP_PERSI_Interact_Middle_CamperBoy_Text_0:
# 181 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Our campout last week was a complete\n"
	.string "disaster.\p"
	.string "I got stuck in a group with Hanzo, and\n"
	.string "he didn't help us at all!\p"
	.string "To make things worse, it was just\n"
	.string "raining all day too, so we were soaked.\p"
	.string "I don't even know why he's here. All he\n"
	.string "does is goof off in the forest.$"

ISLANDGAME_CAMP_PERSI_Interact_Middle_CamperGirl_Text_0:
# 189 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "That Hanzo dweeb gives me the creeps.\n"
	.string "He thinks he's an anime protagonist.$"

ISLANDGAME_CAMP_PERSI_Interact_Middle_Hiker_Text_0:
# 194 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "When kindling a flame, it's important to\n"
	.string "use the right materials.\p"
	.string "One poor kid found out the hard way\n"
	.string "when he threw poison ivy in his fire.$"

ISLANDGAME_CAMP_PERSI_Interact_Middle_Gamer_Text_0:
# 200 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "My mom made me come here. I just want to\n"
	.string "stay inside and play video games...$"

ISLANDGAME_CAMP_PERSI_Interact_Upper_CounselorBoy_Text_0:
# 204 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Remember kids! Don't feed the wildlife!$"

ISLANDGAME_CAMP_PERSI_Interact_Upper_CounselorGirl_Text_0:
# 209 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Hanzo! Hanzo! Ugh... where could that\n"
	.string "troublemaker have gone?\p"
	.string "I swear, we need to put a leash on that\n"
	.string "boy...$"

ISLANDGAME_CAMP_PERSI_Interact_Upper_CamperBoy_Text_0:
# 215 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I'm too scared to go deeper... Pokémon\n"
	.string "are scary.$"

ISLANDGAME_CAMP_PERSI_Interact_Upper_CamperGirl_Text_0:
# 220 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I'm in time-out for throwing a pancake\n"
	.string "at a counselor.\p"
	.string "It was just a prank though... I thought\n"
	.string "camp was about having fun.$"

ISLANDGAME_CAMP_PERSI_Interact_Upper_PeeingGuy_Text_0:
# 226 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Um... do you mind? I'm tryna do my\n"
	.string "business here...$"

ISLANDGAME_CAMP_PERSI_Interact_ZigzagoonGirl_Text_0:
# 230 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "When I'm a Pokémon Trainer, I'm gonna\n"
	.string "catch a Zigazagoon here! They're cute!$"

ISLANDGAME_CAMP_PERSI_Interact_Zigzagoon_Text_0:
# 236 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR RED}It's just staring at me... menacingly?$"

ISLANDGAME_CAMP_PERSI_Interact_Lower_CamperBoy_Text_0:
# 241 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "The older boys are so cool... They know\n"
	.string "how to build a tent with just sticks!$"

ISLANDGAME_CAMP_PERSI_Interact_Radio_Text_0:
# 245 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR RED}(What is this music? It sounds like\n"
	.string "dududududududuDUDUDUDUDU...)$"

ISLANDGAME_CAMP_PERSI_Interact_MacheteTreeEntrance_Text_0:
# 249 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "There's a slight opening in the tree!\n"
	.string "Want to climb inside?$"

ISLANDGAME_CAMP_PERSI_Interact_Sign_NuzlockeWarning_Text_0:
# 258 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Hi! I'm a sentient sign. I'm here to warn\n"
	.string "you about the dangers of Nuzlocke.\p"
	.string "I uh, I just wouldn't try it. Trust me,\n"
	.string "it's not going to end well...\p"
	.string "...but if you think you've got what it\n"
	.string "takes hotshot, prove me wrong...\p"
	.string "- Billy The Board$"

ISLANDGAME_CAMP_PERSI_Interact_Sign_Welcome_Text_0:
# 267 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "CAMP PERSI\n"
	.string "The greatest summer camp in Marya!$"

ISLANDGAME_CAMP_PERSI_Interact_Sign_WildSide_Text_0:
# 274 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "THE WILD SIDE\n"
	.string "! SUPERVISION REQUIRED !$"

ISLANDGAME_CAMP_PERSI_Interact_Sign_Lake_Text_0:
# 280 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "PERSI LAKE\n"
	.string "NO SWIMMING WITHOUT A COUNSELOR!!$"

ISLANDGAME_CAMP_PERSI_Interact_Sign_BerryShop_Text_0:
# 285 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "THE BERRY GOOD BERRY SHOP\n"
	.string "Contribute to our garden! (Please)$"

ISLANDGAME_CAMP_PERSI_Interact_Sign_Directions_Text_0:
# 291 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "CHERIPORT{LEFT_ARROW}\nCAMP PERSI{UP_ARROW}$"

ISLANDGAME_CAMP_PERSI_Trainer_Hanzo_Text_0:
# 401 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Bakana... I lost!?$"

ISLANDGAME_CAMP_PERSI_Trainer_Hanzo_Text_1:
# 402 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I may not be worthy of my blade now, but\n"
	.string "I will be back for it later! Believe it!$"

ISLANDGAME_CAMP_PERSI_Trainer_Lake_Edward_Text_0:
# 413 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "If only I had another Pokémon...$"

ISLANDGAME_CAMP_PERSI_Trainer_Lake_Edward_Text_1:
# 414 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Go bug someone else! Camp's already\n"
	.string "miserable enough with Hanzo!$"

ISLANDGAME_CAMP_PERSI_Trainer_Lake_Lazlo_Text_0:
# 425 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Hoo boy, your Pokémon are hot!$"

ISLANDGAME_CAMP_PERSI_Trainer_Lake_Lazlo_Text_1:
# 426 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I really like Pokémon battles. It's a\n"
	.string "great chance to bond with your buds!$"

ISLANDGAME_CAMP_PERSI_Trainer_Lake_Patsy_Text_0:
# 437 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Was I fiery enough?$"

ISLANDGAME_CAMP_PERSI_Trainer_Lake_Patsy_Text_1:
# 440 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Pokémon battles aren't really my thing,\n"
	.string "to be frank. Maybe there's something\l"
	.string "else I can catch Lazlo's eye with...$"

ISLANDGAME_CAMP_PERSI_Trainer_Lake_Nina_Text_0:
# 453 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I learned a lot from our battle!$"

ISLANDGAME_CAMP_PERSI_Trainer_Lake_Nina_Text_1:
# 456 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Pokémon can hold items like berries to\n"
	.string "give them an edge in battle.\p"
	.string "But they can't hold items like potions\n"
	.string "for some reason. Why is that?$"

ISLANDGAME_CAMP_PERSI_DefeatedHanzoGivesMachete_Text_0:
# 472 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Naruhodo... It appears I still have a lot\n"
	.string "to learn...\p"
	.string "{PLAYER}-san! As my first battle and\n"
	.string "only loss, please take my ka-ta-na.\p"
	.string "It will serve you well in your journey, I\n"
	.string "know of it!$"

ISLANDGAME_CAMP_PERSI_TryGiveTradingCardReward_Text_0:
# 484 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Here, take this. I made it during arts\n"
	.string "and crafts!$"

ISLANDGAME_CAMP_PERSI_TryGiveTradingCardReward_Text_1:
# 491 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Ummm...{PAUSE 30}\n"
	.string "Your bag is totally full...$"

ISLANDGAME_CAMP_PERSI_JonasStart_Text_0:
# 499 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}???: {COLOR DARK_GRAY}Ah, you there!$"

ISLANDGAME_CAMP_PERSI_JonasMain_Text_0:
# 506 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "You don't look like you're from around\n"
	.string "here. Are you a tourist by chance?\p"
	.string "...\p"
	.string "Oh? You've come to aid Professor Palm in\n"
	.string "his research and become a Pokémon\l"
	.string "trainer?\p"
	.string "Well, pardon my assumption, then!\n"
	.string "Welcome to the Maryan Isles,\l"
	.string "{PLAYER}!\p"
	.string "My name is {COLOR GREEN}Jonas{COLOR DARK_GRAY}. I'm a traveling\n"
	.string "merchant of The Silverwing Order.\p"
	.string "The Silverwing Order is in charge of\n"
	.string "governing the isles. It's our job to\l"
	.string "make sure everyone here is comfortable\l"
	.string "and safe!\p"
	.string "My role in particular is traveling\n"
	.string "around to provide goods and inform\l"
	.string "visitors of the Marya region!\p"
	.string "But that's enough about me. You said\n"
	.string "you were a Pokémon trainer, right?\p"
	.string "In that case...{PAUSE 60} mind if I trouble you for\n"
	.string "a little battle?$"

ISLANDGAME_CAMP_PERSI_JonasMain_Text_1:
# 520 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Ah...\p"
	.string "Your aptitude for battle is...{PAUSE 60}\n"
	.string "quite remarkable.{PAUSE 30}$"

ISLANDGAME_CAMP_PERSI_JonasMain_Text_2:
# 529 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}Jonas: {COLOR DARK_GRAY}Thank you for the exciting\n"
	.string "battle, {PLAYER}. You possess\l"
	.string "exceptional talent for a beginner!\p"
	.string "Here, allow me to heal our Pokémon.$"

ISLANDGAME_CAMP_PERSI_JonasMain_Text_3:
# 539 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}Jonas: {COLOR DARK_GRAY}Thank you for the battle,\n"
	.string "{PLAYER}. Your Pokémon fought as\l"
	.string "hard as they could!\p"
	.string "Here, allow me to heal our Pokémon.$"

ISLANDGAME_CAMP_PERSI_JonasMain_Text_4:
# 547 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "{COLOR GREEN}Jonas: {COLOR DARK_GRAY}I'd also like to give you this.\n"
	.string "It'll be of great use to you as a\l"
	.string "beginner!$"

ISLANDGAME_CAMP_PERSI_JonasMain_Text_5:
# 552 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Unfortunately, this is where our\n"
	.string "conversation must end. I've got a long\l"
	.string "day ahead of me, a-ha.\p"
	.string "But before I depart, I thought I'd let\n"
	.string "you know about our upcoming Silverwing\l"
	.string "Festival!\p"
	.string "It is a grand celebration we host\n"
	.string "annually to honor our lord and savior,\l"
	.string "Lugia, who rescued Marya from\l"
	.string "destruction thousands of years ago!\p"
	.string "It's not for another month, but I\n"
	.string "implore you to stick around for it!\p"
	.string "Ah, I must get going now, lest I fall\n"
	.string "even further behind schedule.\p"
	.string "It was a pleasure meeting you,\n"
	.string "{PLAYER}.\p"
	.string "By Lugia, may our paths cross again.$"

ISLANDGAME_CAMP_PERSI_Trainer_Hanzo_Text::
# 405 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "Nani!? You've got sharp senses to find\n"
	.string "a grandmaster ninja like me...\p"
	.string "But how will you fare in battle against\n"
	.string "me and my nakama?$"

ISLANDGAME_CAMP_PERSI_Trainer_Lake_Edward_Text::
# 417 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "What the heck! I almost caught a\n"
	.string "Pokémon and you messed me up!$"

ISLANDGAME_CAMP_PERSI_Trainer_Lake_Lazlo_Text::
# 429 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "There's only one thing better than the\n"
	.string "outdoors: A fiery Pokémon battle!$"

ISLANDGAME_CAMP_PERSI_Trainer_Lake_Patsy_Text::
# 445 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "If I want Lazlo to notice me, I'll have\n"
	.string "to become a fiery Pokémon trainer!\p"
	.string "So um, get your game on, I guess!$"

ISLANDGAME_CAMP_PERSI_Trainer_Lake_Nina_Text::
# 461 "data/maps/ISLANDGAME_CAMP_PERSI/scripts.pory"
	.string "I'm studying Pokémon, and apparently\n"
	.string "one of the best ways to study them is\l"
	.string "to analyze them in battle.\p"
	.string "Please, help me with my research!$"
