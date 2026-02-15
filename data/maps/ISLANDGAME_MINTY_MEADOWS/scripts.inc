ISLANDGAME_MINTY_MEADOWS_MapScripts::
# 5 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_RESUME
# 14 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_RESUME:
# 6 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 8 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_RESUME_2
	return

ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 9 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	removeobject VAR_LAST_TALKED
# 10 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setobjectxy VAR_LAST_TALKED, 51, 35
# 11 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	copyobjectxytoperm VAR_LAST_TALKED
	return

ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_RESUME_2:
# 8 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_RESUME_1
# 8 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 15 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setobjectaswildencounter LOCALID_OVERWORLD_MON_LOWER, ENCOUNTER_LAND
# 16 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setobjectaswildencounter LOCALID_OVERWORLD_MON_UPPER, ENCOUNTER_LAND
	return


ISLANDGAME_MINTY_MEADOWS_Interact_FlabebeRed::
# 23 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setwildbattle SPECIES_FLABEBE_RED, 8
# 24 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBattle
	return


ISLANDGAME_MINTY_MEADOWS_Interact_FlabebeOrange::
# 28 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setwildbattle SPECIES_FLABEBE_ORANGE, 8
# 29 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBattle
	return


ISLANDGAME_MINTY_MEADOWS_Interact_FlabebeYellow::
# 33 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setwildbattle SPECIES_FLABEBE_YELLOW, 8
# 34 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBattle
	return


ISLANDGAME_MINTY_MEADOWS_Interact_FlabebeBlue::
# 38 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setwildbattle SPECIES_FLABEBE_BLUE, 8
# 39 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBattle
	return


ISLANDGAME_MINTY_MEADOWS_Interact_FlabebeWhite::
# 43 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setwildbattle SPECIES_FLABEBE_WHITE, 8
# 44 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBattle
	return


ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers::
# 50 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_double TRAINER_MINTY_MEADOWS_1, ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers_Text_1, ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers_Text_2
# 51 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers_Text_3, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer_LowerJogger::
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_3, ISLANDGAME_MINTY_MEADOWS_Trainer_LowerJogger_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer_LowerJogger_Text_1
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer_LowerJogger_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleFlowerWoman::
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_4, ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleFlowerWoman_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleFlowerWoman_Text_1
# 61 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleFlowerWoman_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleBugNerd::
# 65 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_6, ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleBugNerd_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleBugNerd_Text_1
# 66 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleBugNerd_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_UpperDoubleCamper::
# 70 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_7, ISLANDGAME_MINTY_MEADOWS_UpperDoubleCamper_Text_0, ISLANDGAME_MINTY_MEADOWS_UpperDoubleCamper_Text_1
# 71 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_UpperDoubleCamper_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_UpperDoublePicnicker::
# 75 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_8, ISLANDGAME_MINTY_MEADOWS_UpperDoublePicnicker_Text_0, ISLANDGAME_MINTY_MEADOWS_UpperDoublePicnicker_Text_1
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_UpperDoublePicnicker_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_FlabebeBattle::
# 82 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 83 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 84 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE, CRY_MODE_ENCOUNTER
# 85 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 86 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 87 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 88 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 89 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 90 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 91 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers_Text_0:
# 50 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Oi! You're ruining our romantic\n"
	.string "excursion!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers_Text_1:
# 50 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Lizzy: Ugh! Worst date ever!\p"
	.string "Owen: W-Wait! Don't leave!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers_Text_2:
# 50 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Go away! We're having a touching\n"
	.string "moment!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers_Text_3:
# 51 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Ugh, now we have to take our Pokémon to\n"
	.string "Nurse Joy.\p"
	.string "Thanks a lot.$"

ISLANDGAME_MINTY_MEADOWS_Trainer_LowerJogger_Text_0:
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Hey! Get out of my way! I'm trying to\n"
	.string "keep up my pace here!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_LowerJogger_Text_1:
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I couldn't keep up the momentum...$"

ISLANDGAME_MINTY_MEADOWS_Trainer_LowerJogger_Text_2:
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I need to get stronger... Fight, Jack...\n"
	.string "Fight! TATAKAE!!!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleFlowerWoman_Text_0:
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Let our Pokémon bloom in the meadow's\n"
	.string "embrace!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleFlowerWoman_Text_1:
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Your Pokémon flourished beautifully!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleFlowerWoman_Text_2:
# 61 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I suppose it is still too early for me to\n"
	.string "bloom.$"

ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleBugNerd_Text_0:
# 65 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I will find you my queen... I'll stop at\n"
	.string "nothing to see your beauty!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleBugNerd_Text_1:
# 65 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "How dare you come between me and Her\n"
	.string "Majesty!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleBugNerd_Text_2:
# 66 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "You'll pay for this... Delaying my search\n"
	.string "for my lovely Vespiquen!$"

ISLANDGAME_MINTY_MEADOWS_UpperDoubleCamper_Text_0:
# 70 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Go Go Go! My awesome Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_UpperDoubleCamper_Text_1:
# 70 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "No No No! My awesome Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_UpperDoubleCamper_Text_2:
# 71 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "My Pokémon are awesome, so yours must\n"
	.string "be awesomer!$"

ISLANDGAME_MINTY_MEADOWS_UpperDoublePicnicker_Text_0:
# 75 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "This was the worst place for a picnic...\n"
	.string "I'm allergic to the flowers here.$"

ISLANDGAME_MINTY_MEADOWS_UpperDoublePicnicker_Text_1:
# 75 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "It's hard to concentrate in battle when\n"
	.string "you're sneezing constantly!$"

ISLANDGAME_MINTY_MEADOWS_UpperDoublePicnicker_Text_2:
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Do you have any tissues? I'm not sure\n"
	.string "how much more of this I can take.$"
