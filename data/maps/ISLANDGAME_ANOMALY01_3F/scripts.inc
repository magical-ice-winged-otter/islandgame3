ISLANDGAME_ANOMALY01_3F_MapScripts::
	.byte 0


ISLANDGAME_ANOMALY01_3F_Interact_Doll::
# 6 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	msgbox ISLANDGAME_ANOMALY01_3F_Interact_Doll_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	playmoncry SPECIES_UNOWN, CRY_MODE_ENCOUNTER
# 12 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	waitmoncry
# 14 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_ANOMALY_01, 25, ITEM_FIRIUM_Z, ITEM_POKE_BALL, NUM_NATURES, 0, MON_GENDERLESS, 252, 252, 252, 252, 252, 252, 31, 31, 31, 31, 31, 31, MOVE_INFERNAL_PARADE, MOVE_CONFUSE_RAY, MOVE_PAIN_SPLIT, MOVE_FIRE_SPIN
# 20 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 21 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	setflag FLAG_NO_CATCHING
# 22 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	setflag FLAG_NO_RUNNING
# 23 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	setwilddoubleflag
# 24 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	dowildbattle
# 25 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 26 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	clearflag FLAG_NO_CATCHING
# 27 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	clearflag FLAG_NO_RUNNING
# 29 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 31 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_ne ISLANDGAME_ANOMALY01_3F_Interact_Doll_2
	return

ISLANDGAME_ANOMALY01_3F_Interact_Doll_1:
# 32 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 33 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	setflag FLAG_ANOMALY01_DEFEATED
	return

ISLANDGAME_ANOMALY01_3F_Interact_Doll_2:
# 31 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
	goto_if_ne ISLANDGAME_ANOMALY01_3F_Interact_Doll_1
	return


ISLANDGAME_ANOMALY01_3F_Interact_Grave::
# 38 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	msgbox ISLANDGAME_ANOMALY01_3F_Interact_Grave_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_ANOMALY01_3F_Interact_Laptop::
# 42 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	lock
# 43 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ISLANDGAME_ANOMALY01_3F_Interact_Laptop_Movement_0
# 44 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	setvar VAR_RESULT, 0
# 45 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	playse SE_ORB
# 46 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	special DoOrbEffect
# 48 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	givemon SPECIES_CELEBI, 1, ITEM_LUM_BERRY, ITEM_STRANGE_BALL, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_PERISH_SONG, MOVE_NONE, MOVE_NONE, MOVE_NONE, TRUE
# 55 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	delay 300
# 56 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	special FadeOutOrbEffect
# 57 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, spookySpin
# 58 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	waitmovement
# 59 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	warp MAP_ISLANDGAME_CAMP_PERSI_MACHETE_TREE, 1, 3
# 60 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	release
	return


# 43 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
ISLANDGAME_ANOMALY01_3F_Interact_Laptop_Movement_0:
# 43 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	emote_exclamation_mark
	step_end

ISLANDGAME_ANOMALY01_3F_Interact_Doll_Text_0:
# 7 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	.string "He died...{PAUSE 60}\p"
	.string "...but you'll soon be joining him...{PAUSE 60}$"

ISLANDGAME_ANOMALY01_3F_Interact_Grave_Text_0:
# 38 "data/maps/ISLANDGAME_ANOMALY01_3F/scripts.pory"
	.string "R.I.P\n"
	.string "...$"
