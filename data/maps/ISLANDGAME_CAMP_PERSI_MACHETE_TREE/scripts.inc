ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts::
# 2 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	return

ISLANDGAME_CAMP_PERSI_MACHETE_TREE_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell
	.2byte 0


ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell::
# 15 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setvar VAR_TEMP_0, 1
# 16 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_Text_0
	checkitem ITEM_ISLANDGAME_STRANGE_DISC
# 0 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_2
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_1:
# 19 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_Movement_0
# 20 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 21 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 22 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_Movement_1
# 23 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 25 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_Text_1, MSGBOX_AUTOCLOSE
# 32 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	removeitem ITEM_ISLANDGAME_STRANGE_DISC
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_2:
# 18 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	goto_if_set FLAG_ANOMALY01_DEFEATED, ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_1
	return


ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop::
# 39 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	goto_if_set FLAG_ANOMALY01_DEFEATED, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_1
# 43 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Text_1, MSGBOX_AUTOCLOSE
	checkitem ITEM_ISLANDGAME_STRANGE_DISC
# 0 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_4
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_1:
# 40 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Text_0, MSGBOX_AUTOCLOSE
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_4:
# 49 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Text_2, MSGBOX_YESNO
# 51 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_6
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_6:
# 52 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	closemessage
# 53 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	special Script_FadeOutMapMusic
# 54 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitstate
# 56 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Text_3, MSGBOX_AUTOCLOSE
# 63 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Movement_0
# 64 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setvar VAR_RESULT, 0
# 65 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	playse SE_ORB
# 66 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	special DoOrbEffect
# 67 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 300
# 68 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	special FadeOutOrbEffect
# 69 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, spookySpin
# 70 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 71 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	warp MAP_ISLANDGAME_ANOMALY01_1F, 8, 15
	return


ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_TV::
# 78 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_TV_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll::
# 85 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_CAMP_PERSI_STATE, CAMP_PERSI_SEARCHING_FOR_CARD
	goto_if_ne ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_1
# 89 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_1, MSGBOX_AUTOCLOSE
# 94 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setflag FLAG_FOLLOWERS_DISABLED
# 95 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	hidefollower
# 96 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 10
# 97 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	playse SE_EXIT
# 98 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	addobject LOCALID_TREE_CARD_LOSER
# 99 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setobjectxy LOCALID_TREE_CARD_LOSER, 4, 4
# 100 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 30
# 101 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement LOCALID_TREE_CARD_LOSER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_Movement_1
# 102 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 103 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_0
# 104 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 105 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 106 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_2, MSGBOX_AUTOCLOSE
# 107 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 108 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	playse SE_PIN
# 109 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement LOCALID_TREE_CARD_LOSER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_1
# 110 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 111 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 112 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_3, MSGBOX_AUTOCLOSE
# 113 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_2
# 114 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 115 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 117 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_4, MSGBOX_AUTOCLOSE
# 126 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_2
# 127 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 128 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 129 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement LOCALID_TREE_CARD_LOSER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_Movement_1
# 130 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 132 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_5, MSGBOX_AUTOCLOSE
# 138 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement LOCALID_TREE_CARD_LOSER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_3
# 139 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 140 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 30
# 141 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	trainerbattle_no_intro TRAINER_CAMP_PERSI_THIEF, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_6
# 142 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement LOCALID_TREE_CARD_LOSER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_4
# 143 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 144 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 146 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_7, MSGBOX_AUTOCLOSE
# 151 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_2
# 152 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 153 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 155 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_8, MSGBOX_AUTOCLOSE
# 162 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 163 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_5
# 164 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 166 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_9, MSGBOX_AUTOCLOSE
# 172 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement LOCALID_TREE_CARD_LOSER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_6
# 173 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 174 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	playse SE_EXIT
# 175 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitse
# 176 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setobjecthidden LOCALID_TREE_CARD_LOSER
# 177 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setvar VAR_CAMP_PERSI_STATE, CAMP_PERSI_DEFEATED_LOSER
# 178 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_7
# 179 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 180 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	giveitem ITEM_ISLANDGAME_TRADING_CARD
# 181 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
# 182 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	closemessage
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_1:
# 86 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_0, MSGBOX_AUTOCLOSE
	return


# 19 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_Movement_0:
# 19 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	face_up
	step_end

# 22 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_Movement_1:
# 22 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	emote_question_mark
	step_end

# 63 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Movement_0:
# 63 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	emote_exclamation_mark
	step_end

# 103 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_0:
# 103 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	face_down
	step_end

# 109 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_1:
# 109 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	emote_exclamation_mark
# 109 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	walk_in_place_faster_up
	step_end

# 113 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_2:
# 113 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	walk_in_place_down
	step_end

# 138 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_3:
# 138 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	walk_up
	step_end

# 142 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_4:
# 142 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	face_up
# 142 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	lock_facing_direction
# 142 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	walk_fast_down
	step_end

# 163 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_5:
# 163 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	face_up
# 163 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 163 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 163 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 163 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 163 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	face_down
# 163 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	walk_in_place_down
	step_end

# 172 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_6:
# 172 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	face_down
# 172 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	unlock_facing_direction
# 172 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	walk_down
	step_end

# 178 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_7:
# 178 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	face_up
# 178 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 178 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 178 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 178 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 178 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	walk_in_place_faster_up
# 178 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 178 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 178 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 178 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
	step_end

ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_Text_0:
# 16 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "hi$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_Text_1:
# 26 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "...\p"
	.string "{COLOR RED}(Augh... my head...)\p"
	.string "(What in the world was all of that? Was\n"
	.string "it all just a dream?)\p"
	.string "(Seems like the program's deleted itself\n"
	.string "as well...)$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Text_0:
# 40 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "> You try to open “LostSilver.exe”, but\n"
	.string "it just results in an error.$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Text_1:
# 44 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "It's a dusty old laptop. It looks like\n"
	.string "it's been here for years.\p"
	.string "There seems to still be some power in it.\n"
	.string "You could probably still use it.$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Text_2:
# 49 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "Insert the strange disc into the\n"
	.string "laptop?$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Text_3:
# 57 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "> You booted up the laptop and inserted\n"
	.string "the disc.\p"
	.string "“LostSilver.exe” is automatically\n"
	.string "installed and opened.\p"
	.string "It's loading...{PAUSE 60} loading...{PAUSE 60} loading...{PAUSE 60}\p"
	.string "{COLOR RED}(Huh? It seems like the laptop froze\n"
	.string "while attempting to run the game.)$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_TV_Text_0:
# 79 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "It's a really old television set riddled\n"
	.string "with cobwebs.\p"
	.string "You tried to turn it on, but nothing\n"
	.string "happened.$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_0:
# 86 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "{COLOR RED}(It's just a regular old Gulpin doll.)$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_1:
# 90 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "{COLOR RED}(It's just a regular old Gulpin doll.)\p"
	.string "(Oh? There seems to be something\n"
	.string "stashed inside it...)$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_2:
# 106 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "Huh? What are you doing here?$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_3:
# 112 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "H-Hey! You were snooping around in my\n"
	.string "secret base, weren't you!?$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_4:
# 118 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "Mrgrgr... {PAUSE 30}Fine! You got me! I stole it! I'm\n"
	.string "the one who took that camper's card!\p"
	.string "It's not fair! I've been using up my\n"
	.string "allowance for WEEKS trying to get one,\l"
	.string "and he pulls it from his FIRST pack?\p"
	.string "A card with THAT much power shouldn't\n"
	.string "be allowed! There's no reason a newbie\l"
	.string "should be able to beat me so easily!\p"
	.string "I'm just leveling the playing field, is\n"
	.string "all! You understand, right!?\p"
	.string "...\p"
	.string "...Now that you know the truth, you're\n"
	.string "gonna tattle on me, aren't you?$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_5:
# 133 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "H-Huh? You'll let me go... if I just beat\n"
	.string "you in a Pokémon battle?\p"
	.string "Heh... I guess have no choice but to\n"
	.string "oblige.\p"
	.string "I'll show you the power of my bug\n"
	.string "Pokémon!$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_6:
# 141 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "T-This isn't right! I should've won!$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_7:
# 147 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "I don't get it... My Pokémon should've\n"
	.string "won! They're much stronger then yours!\p"
	.string "Is...{PAUSE 30} power not all there is to battling?\n"
	.string "Can weaker Pokémon still beat stronger\l"
	.string "Pokémon with the right strategy?$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_8:
# 156 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "I... I see. That's what you were trying\n"
	.string "to teach me with that battle, wasn't it?\p"
	.string "To show me how dumb it was of me to get\n"
	.string "so worked up over a trading card...\p"
	.string "Heh... I sure feel like a real big stupid\n"
	.string "jerk now.\p"
	.string "Well, I guess it's time for me pay for my\n"
	.string "crimes...$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_9:
# 167 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "Huh? You won't tell on me? B-But, I\n"
	.string "lost...\p"
	.string "...\p"
	.string "O-Okay. Thank you so much! I won't\n"
	.string "forget your kindness, trainer! I\l"
	.string "promise to never ever steal again!$"
