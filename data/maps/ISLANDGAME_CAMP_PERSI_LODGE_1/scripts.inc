ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts::
# 2 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_RESUME
# 6 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	call Common_TryRemoveTemporaryObject
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setobjecthidden LOCALID_LODGE_PORYGON
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 0 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_RESULT, QUEST_COMPLETED
	goto_if_ne ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 10 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_CAMP_PERSI_STATE, CAMP_PERSI_CLAIMED_LOSER_REWARD
	goto_if_ne ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	gettimeofday
# 0 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	gettimeofday
# 0 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 11 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setobjecthidden LOCALID_LODGE_CARD_KID
# 12 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setobjecthidden LOCALID_LODGE_CARD_LOSER
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 16 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setobjecthidden LOCALID_LODGE_GAMER_RIGHT
# 17 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setobjecthidden LOCALID_LODGE_GAMER_MIDDLE
# 18 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setobjecthidden LOCALID_LODGE_GAMER_LEFT
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu::
# 26 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	message ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_Text_0
# 27 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmessage
# 28 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dynmultipush ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_Text_1, OPTIONS_BATTLE_SCENE_1X
# 29 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dynmultipush ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_Text_2, OPTIONS_BATTLE_SCENE_2X
# 30 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dynmultipush ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_Text_3, OPTIONS_BATTLE_SCENE_3X
# 31 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dynmultipush ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_Text_4, OPTIONS_BATTLE_SCENE_4X
# 32 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dynmultistack 0, 0, FALSE, 4, FALSE, NO, DYN_MULTICHOICE_CB_NONE
# 34 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_RESULT, VAR_BATTLE_SPEED
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_1
# 37 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_ne ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_2
# 43 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	closemessage
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_1:
# 35 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_Text_5, MSGBOX_AUTOCLOSE
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_2:
# 38 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	copyvar VAR_BATTLE_SPEED, VAR_RESULT
# 39 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	playmoncry SPECIES_MAGNEZONE, CRY_MODE_HIGH_PITCH
# 40 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_Text_6, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_Scoutmaster::
	gettimeofday
# 0 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_Scoutmaster_1
# 57 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_Scoutmaster_Text_1, MSGBOX_NPC
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_Scoutmaster_1:
# 51 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_Scoutmaster_Text_0, MSGBOX_NPC
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_GamerRight::
# 66 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_GamerRight_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_GamerMiddle::
# 70 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_GamerMiddle_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_GamerLeft::
# 74 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_GamerLeft_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_CardPlayerLeft::
# 78 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_CardPlayerLeft_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_CardPlayerRight::
# 82 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_CardPlayerRight_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_TV::
# 86 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	goto_if_set FLAG_CAMP_PERSI_PORYGON_DEFEATED, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu
# 87 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_TV_Text_0, MSGBOX_AUTOCLOSE
# 88 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	delay 30
# 89 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	playse SE_THUNDER
# 90 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	fadescreen FADE_TO_WHITE
# 90 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	delay 15
# 91 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 91 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	delay 15
# 92 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 92 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	delay 15
# 93 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 93 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	delay 15
# 94 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setobjectvisible LOCALID_LODGE_PORYGON
# 95 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_TV_Movement_0
# 96 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement
# 97 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	playse SE_PIN
# 98 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_TV_Movement_1
# 99 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement
# 100 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER
# 101 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmoncry
# 102 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_TV_Movement_2
# 103 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement
# 104 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 105 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_NO_CATCHING
# 106 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_NO_RUNNING
# 107 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 108 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setvar VAR_BATTLE_SPEED, OPTIONS_BATTLE_SCENE_4X
# 109 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_LODGE_PORYGON
# 111 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_PORYGON, 10, ITEM_BERRY_JUICE, ITEM_POKE_BALL, NUM_NATURES, 1, MON_GENDERLESS, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_RECYCLE, MOVE_CONVERSION_2, MOVE_TACKLE, MOVE_THUNDER_SHOCK
# 117 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dowildbattle
# 118 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setvar VAR_BATTLE_SPEED, OPTIONS_BATTLE_SCENE_1X
# 119 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 120 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 121 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 122 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
# 0 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_TV_1
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_TV_1:
# 125 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_CAMP_PERSI_PORYGON_DEFEATED
# 126 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Trigger_BlockingTV::
	gettimeofday
# 0 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_ne ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Trigger_BlockingTV_1
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Trigger_BlockingTV_1:
# 134 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	playse SE_PIN
# 135 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement LOCALID_LODGE_GAMER_LEFT, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_TV_Movement_1
# 136 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement LOCALID_LODGE_GAMER_MIDDLE, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_TV_Movement_1
# 137 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement
# 138 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	delay 48
# 139 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Trigger_BlockingTV_Text_0, MSGBOX_AUTOCLOSE
# 140 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Trigger_BlockingTV_Movement_0
# 141 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement
	return


# 95 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_TV_Movement_0:
# 95 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock_facing_direction
# 95 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	walk_down
# 95 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	unlock_facing_direction
	step_end

# 98 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_TV_Movement_1:
# 98 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	emote_exclamation_mark
	step_end

# 102 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_TV_Movement_2:
# 102 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	face_up
	step_end

# 140 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Trigger_BlockingTV_Movement_0:
# 140 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	walk_right
# 140 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	face_left
	step_end

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_Text_0:
# 26 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "> CHANGE BATTLE SCENE SPEED$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_Text_1:
# 28 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "x1 (Default)$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_Text_2:
# 29 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "x2$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_Text_3:
# 30 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "x3$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_Text_4:
# 31 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "x4$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_Text_5:
# 35 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "> SPEED IS ALREADY SET TO THIS!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_BattleSpeedMenu_Text_6:
# 40 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "> SPEED SET!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_Scoutmaster_Text_0:
# 52 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "I wish parents would stop dropping\n"
	.string "their brats here like it's a daycare.\p"
	.string "This is a CAMP for Lugia's sake!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_Scoutmaster_Text_1:
# 58 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "Where did that rapscallion Hanzo run\n"
	.string "off to now!?\p"
	.string "He better not be horsing around with\n"
	.string "that machete of his again. I don't care\l"
	.string "if it's an “agricultural tool”, there's\l"
	.string "no reason a CHILD should have one!!\p"
	.string "-sigh- I'm starting to think I was\n"
	.string "better off in the slammer than here...$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_GamerRight_Text_0:
# 66 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "Give me the controller! The scoutmaster\n"
	.string "said it's MY turn now!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_GamerMiddle_Text_0:
# 70 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "Quit bothering me! I'm in an intense\n"
	.string "game right now!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_GamerLeft_Text_0:
# 74 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "Dude stop spamming that move!!! -.-$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_CardPlayerLeft_Text_0:
# 78 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "Charizard! Use Fire Spin!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_CardPlayerRight_Text_0:
# 82 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "Ugh, if I only had one more turn! I would\n"
	.string "have won!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Interact_TV_Text_0:
# 87 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR RED}(...Huh?)$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Trigger_BlockingTV_Text_0:
# 139 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "MOVE YOUR BIG FAT HEAD OUT OF THE\n"
	.string "FREAKING WAY!$"
