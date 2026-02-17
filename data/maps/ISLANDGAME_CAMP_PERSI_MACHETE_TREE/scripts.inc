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


ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop::
# 15 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	goto_if_set FLAG_ANOMALY01_DEFEATED, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_1
# 19 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Text_1
	checkitem ITEM_ISLANDGAME_STRANGE_DISC
# 0 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_4
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_1:
# 16 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Text_0, MSGBOX_AUTOCLOSE
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_4:
# 25 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Text_2, MSGBOX_YESNO
# 27 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_6
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_6:
# 28 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	closemessage
# 29 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	special Script_FadeOutMapMusic
# 30 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitstate
# 32 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Text_3, MSGBOX_AUTOCLOSE
# 39 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Movement_0
# 40 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setvar VAR_RESULT, 0
# 41 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	playse SE_ORB
# 42 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	special DoOrbEffect
# 43 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 300
# 44 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	special FadeOutOrbEffect
# 45 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, spookySpin
# 46 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 47 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	warp MAP_ISLANDGAME_ANOMALY01_1F, 8, 15
	return


ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_TV::
# 54 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_TV_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll::
# 61 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_CAMP_PERSI_STATE, CAMP_PERSI_SEARCHING_FOR_CARD
	goto_if_ne ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_1
# 65 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_1, MSGBOX_AUTOCLOSE
# 70 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setflag FLAG_FOLLOWERS_DISABLED
# 71 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	hidefollower
# 72 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 10
# 73 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	playse SE_EXIT
# 74 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	addobject LOCALID_TREE_CARD_LOSER
# 75 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setobjectxy LOCALID_TREE_CARD_LOSER, 4, 4
# 76 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 30
# 77 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement LOCALID_TREE_CARD_LOSER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_0
# 78 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 79 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_1
# 80 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 81 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 82 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_2, MSGBOX_AUTOCLOSE
# 83 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 84 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	playse SE_PIN
# 85 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement LOCALID_TREE_CARD_LOSER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_2
# 86 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 87 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 88 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_3, MSGBOX_AUTOCLOSE
# 89 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_3
# 90 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 91 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 93 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_4, MSGBOX_AUTOCLOSE
# 102 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_3
# 103 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 104 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 105 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement LOCALID_TREE_CARD_LOSER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_0
# 106 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 108 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_5, MSGBOX_AUTOCLOSE
# 114 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement LOCALID_TREE_CARD_LOSER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_4
# 115 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 116 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 30
# 117 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	trainerbattle_no_intro TRAINER_CAMP_PERSI_THIEF, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_6
# 118 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement LOCALID_TREE_CARD_LOSER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_5
# 119 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 120 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 122 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_7, MSGBOX_AUTOCLOSE
# 127 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_3
# 128 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 129 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 131 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_8, MSGBOX_AUTOCLOSE
# 138 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 139 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_6
# 140 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 142 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_9, MSGBOX_AUTOCLOSE
# 148 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement LOCALID_TREE_CARD_LOSER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_7
# 149 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 150 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	playse SE_EXIT
# 151 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitse
# 152 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setobjecthidden LOCALID_TREE_CARD_LOSER
# 153 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setvar VAR_CAMP_PERSI_STATE, CAMP_PERSI_DEFEATED_LOSER
# 154 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_8
# 155 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 156 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	giveitem ITEM_ISLANDGAME_TRADING_CARD
# 157 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	clearflag FLAG_FOLLOWERS_DISABLED
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_1:
# 62 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell::
# 162 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	setvar VAR_TEMP_0, 1
# 163 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_Text_0
	checkitem ITEM_ISLANDGAME_STRANGE_DISC
# 0 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_2
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_1:
# 166 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_Movement_0
# 167 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 168 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay 60
# 169 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_0
# 170 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	waitmovement
# 172 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_Text_1, MSGBOX_AUTOCLOSE
# 179 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	removeitem ITEM_ISLANDGAME_STRANGE_DISC
	return

ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_2:
# 165 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	goto_if_set FLAG_ANOMALY01_DEFEATED, ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_1
	return


# 39 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Movement_0:
# 39 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	emote_exclamation_mark
	step_end

# 77 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_0:
# 77 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	emote_question_mark
	step_end

# 79 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_1:
# 79 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	face_down
	step_end

# 85 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_2:
# 85 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	emote_exclamation_mark
# 85 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	walk_in_place_faster_up
	step_end

# 89 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_3:
# 89 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	walk_in_place_down
	step_end

# 114 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_4:
# 114 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	walk_up
	step_end

# 118 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_5:
# 118 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	face_up
# 118 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	lock_facing_direction
# 118 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	walk_fast_down
	step_end

# 139 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_6:
# 139 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	face_up
# 139 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 139 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 139 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 139 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 139 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	face_down
# 139 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	walk_in_place_down
	step_end

# 148 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_7:
# 148 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	face_down
# 148 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	unlock_facing_direction
# 148 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	walk_down
	step_end

# 154 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Movement_8:
# 154 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	face_up
# 154 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 154 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 154 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 154 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 154 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	walk_in_place_faster_up
# 154 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 154 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 154 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
# 154 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	delay_16
	step_end

# 166 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_Movement_0:
# 166 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	face_up
	step_end

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Text_0:
# 16 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "> You try to open “LostSilver.exe”, but\n"
	.string "it just results in an error.$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Text_1:
# 20 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "It's a dusty old laptop. It looks like\n"
	.string "it's been here for years.\p"
	.string "There seems to still be some power in it.\n"
	.string "You could probably still use it.$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Text_2:
# 25 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "Insert the strange disc into the\n"
	.string "laptop?$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_Laptop_Text_3:
# 33 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "> You booted up the laptop and inserted\n"
	.string "the disc.\p"
	.string "“LostSilver.exe” is automatically\n"
	.string "installed and opened.\p"
	.string "It's loading...{PAUSE 60} loading...{PAUSE 60} loading...{PAUSE 60}\p"
	.string "{COLOR RED}(Huh? It seems like the laptop froze\n"
	.string "while attempting to run the game.)$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_TV_Text_0:
# 55 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "It's a really old television set riddled\n"
	.string "with cobwebs.\p"
	.string "You tried to turn it on, but nothing\n"
	.string "happened.$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_0:
# 62 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "{COLOR RED}(It's just a regular old Gulpin doll.)$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_1:
# 66 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "{COLOR RED}(It's just a regular old Gulpin doll.)\p"
	.string "(Oh? There seems to be something\n"
	.string "stashed inside it...)$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_2:
# 82 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "Huh? What are you doing here?$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_3:
# 88 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "H-Hey! You were snooping around in my\n"
	.string "secret base, weren't you!?$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_4:
# 94 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
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
# 109 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "H-Huh? You'll let me go... if I just beat\n"
	.string "you in a Pokémon battle?\p"
	.string "Heh... I guess have no choice but to\n"
	.string "oblige.\p"
	.string "I'll show you the power of my bug\n"
	.string "Pokémon!$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_6:
# 117 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "T-This isn't right! I should've won!$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_7:
# 123 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "I don't get it... My Pokémon should've\n"
	.string "won! They're much stronger then yours!\p"
	.string "Is...{PAUSE 30} power not all there is to battling?\n"
	.string "Can weaker Pokémon still beat stronger\l"
	.string "Pokémon with the right strategy?$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_8:
# 132 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "I... I see. That's what you were trying\n"
	.string "to teach me with that battle, wasn't it?\p"
	.string "To show me how dumb it was of me to get\n"
	.string "so worked up over a trading card...\p"
	.string "Heh... I sure feel like a real big stupid\n"
	.string "jerk now.\p"
	.string "Well, I guess it's time for me pay for my\n"
	.string "crimes...$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_Interact_GulpinDoll_Text_9:
# 143 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "Huh? You won't tell on me? B-But, I\n"
	.string "lost...\p"
	.string "...\p"
	.string "O-Okay. Thank you so much! I won't\n"
	.string "forget your kindness, trainer! I\l"
	.string "promise to never ever steal again!$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_Text_0:
# 163 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "hi$"

ISLANDGAME_CAMP_PERSI_TREEHOUSE_ReturnFromHell_Text_1:
# 173 "data/maps/ISLANDGAME_CAMP_PERSI_MACHETE_TREE/scripts.pory"
	.string "...\p"
	.string "{COLOR RED}(Augh... my head...)\p"
	.string "(What in the world was all of that? Was\n"
	.string "it all just a dream?)\p"
	.string "(Seems like the program's deleted itself\n"
	.string "as well...)$"
