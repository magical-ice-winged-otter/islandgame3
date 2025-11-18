ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts::
# 6 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	gettime
# 8 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_TEMP_5
# 10 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 10 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 16 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_TEMP_2
# 17 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 18 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	switch VAR_RESULT
# 19 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 21 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_TEMP_4
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_TEMP_3
# 12 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setflag FLAG_TEMP_4
# 13 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster::
# 28 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 29 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	faceplayer
# 30 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	goto_if_set FLAG_TEMP_2, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster_2
# 40 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster_Text_1
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster_1:
# 45 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster_2:
# 31 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster_Text_0
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster_1


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC1::
# 50 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 51 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC1_Text_0
# 54 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC2::
# 58 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 59 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC2_Text_0
# 62 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC3::
# 66 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 67 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC3_Text_0
# 70 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Beginning::
# 74 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	playse SE_PIN
# 75 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 76 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 77 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
# 78 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement 2, Common_Movement_Delay48
# 79 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
# 80 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Beginning_Text_0
# 83 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	closemessage
# 84 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 85 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
# 86 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 87 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	waitmovement 0
# 88 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	return
# 89 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC4::
# 93 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 94 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC4_Text_0
# 97 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC5::
# 101 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock
# 102 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC5_Text_0
# 105 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	release
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonCutscene::
	return


# 162 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_Movement_PorygonAppear:
# 163 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lock_facing_direction
# 164 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	walk_down
# 165 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	unlock_facing_direction
	step_end

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonTrigger::
# 170 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	lockall
# 171 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	goto_if_set FLAG_CAMP_PERSI_PORYGON_DEFEATED, ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonTrigger_1
# 175 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonCutscene
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_PorygonTrigger_1:
# 172 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu::
# 181 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_0
# 184 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dynmultipush ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_1, OPTIONS_BATTLE_SCENE_1X
# 186 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dynmultipush ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_2, OPTIONS_BATTLE_SCENE_2X
# 187 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dynmultipush ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_3, OPTIONS_BATTLE_SCENE_3X
# 188 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dynmultipush ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_4, OPTIONS_BATTLE_SCENE_4X
# 189 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dynmultipush ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_5, OPTIONS_BATTLE_SCENE_DISABLED
# 190 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	dynmultistack 0, 0, FALSE, 5, FALSE, NO, DYN_MULTICHOICE_CB_NONE
# 191 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	compare VAR_BATTLE_SPEED, VAR_RESULT
	goto_if_ne ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_2
# 199 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_7
ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_1:
# 203 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	closemessage
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_2:
# 192 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	copyvar VAR_BATTLE_SPEED, VAR_RESULT
# 193 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	playmoncry SPECIES_MAGNEZONE, CRY_MODE_HIGH_PITCH
# 194 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_6
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_1


ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster_Text_0:
# 33 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "Where did that rapscallion Hanzo run\n"
	.string "off to now!?\p"
	.string "He better not be horsing around with\n"
	.string "that machete of his again. I don't care\l"
	.string "if it's an “agricultural tool”, there's\l"
	.string "no reason a CHILD should have one!!\l"
	.string "-sigh- I'm starting to think I was\l"
	.string "better off in the slammer than here...$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_Scoutmaster_Text_1:
# 41 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "I wish parents would stop dropping\n"
	.string "their brats here like it's a daycare.\p"
	.string "This is a CAMP for Lugia's sake!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC1_Text_0:
# 52 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}Give me the controller! The scoutmaster\n"
	.string "said it's MY turn now!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC2_Text_0:
# 60 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}Quit bothering me! I'm in an intense\n"
	.string "game right now!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC3_Text_0:
# 68 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "{COLOR DARK_GRAY}Dude stop spamming that move!!! -.-$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BlockingTV_Beginning_Text_0:
# 81 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "MOVE YOUR BIG FAT HEAD OUT OF THE\n"
	.string "FREAKING WAY!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC4_Text_0:
# 95 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "Charizard! Use Fire Spin!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_NPC5_Text_0:
# 103 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "Ugh, if I only had one more turn! I would\n"
	.string "have won!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_0:
# 182 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "> CHANGE BATTLE SCENE SPEED$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_1:
# 184 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "x1 (Default)$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_2:
# 186 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "x2$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_3:
# 187 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "x3$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_4:
# 188 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "x4$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_5:
# 189 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "Disable$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_6:
# 195 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "> SPEED SET!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_1F_EventScript_BattleSpeed_Menu_Text_7:
# 200 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1/scripts.pory"
	.string "> SPEED IS ALREADY SET TO THIS!$"
