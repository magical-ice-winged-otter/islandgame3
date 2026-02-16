ISLANDGAME_MINTY_MEADOWS_MapScripts::
# 2 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_RESUME
# 6 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_RESUME:
# 3 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	call Common_TryRemoveTemporaryObject
	return

ISLANDGAME_MINTY_MEADOWS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setobjectaswildencounter LOCALID_OVERWORLD_MON_LOWER, ENCOUNTER_LAND
# 8 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setobjectaswildencounter LOCALID_OVERWORLD_MON_UPPER, ENCOUNTER_LAND
	return


ISLANDGAME_MINTY_MEADOWS_Interact_FlabebeRed::
# 15 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setwildbattle SPECIES_FLABEBE_RED, 8
# 16 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBattle
	return


ISLANDGAME_MINTY_MEADOWS_Interact_FlabebeOrange::
# 20 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setwildbattle SPECIES_FLABEBE_ORANGE, 8
# 21 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBattle
	return


ISLANDGAME_MINTY_MEADOWS_Interact_FlabebeYellow::
# 25 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setwildbattle SPECIES_FLABEBE_YELLOW, 8
# 26 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBattle
	return


ISLANDGAME_MINTY_MEADOWS_Interact_FlabebeBlue::
# 30 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setwildbattle SPECIES_FLABEBE_BLUE, 8
# 31 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBattle
	return


ISLANDGAME_MINTY_MEADOWS_Interact_FlabebeWhite::
# 35 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setwildbattle SPECIES_FLABEBE_WHITE, 8
# 36 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	goto ISLANDGAME_MINTY_MEADOWS_FlabebeBattle
	return


ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers::
# 42 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_double TRAINER_MINTY_MEADOWS_1, ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers_Text_1, ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers_Text_2
# 43 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers_Text_3, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer_LowerJogger::
# 47 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_3, ISLANDGAME_MINTY_MEADOWS_Trainer_LowerJogger_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer_LowerJogger_Text_1
# 48 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer_LowerJogger_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleFlowerWoman::
# 52 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_4, ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleFlowerWoman_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleFlowerWoman_Text_1
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleFlowerWoman_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleBugNerd::
# 57 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_6, ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleBugNerd_Text_0, ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleBugNerd_Text_1
# 58 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleBugNerd_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_UpperDoubleCamper::
# 62 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_7, ISLANDGAME_MINTY_MEADOWS_UpperDoubleCamper_Text_0, ISLANDGAME_MINTY_MEADOWS_UpperDoubleCamper_Text_1
# 63 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_UpperDoubleCamper_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_UpperDoublePicnicker::
# 67 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	trainerbattle_single TRAINER_MINTY_MEADOWS_8, ISLANDGAME_MINTY_MEADOWS_UpperDoublePicnicker_Text_0, ISLANDGAME_MINTY_MEADOWS_UpperDoublePicnicker_Text_1
# 68 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_UpperDoublePicnicker_Text_2, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MINTY_MEADOWS_FlabebeBattle::
# 74 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	lock
# 75 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	faceplayer
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	playmoncry SPECIES_FLABEBE, CRY_MODE_ENCOUNTER
# 77 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	waitmoncry
# 78 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 79 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 80 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	dowildbattle
# 81 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 82 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 83 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	release
	return


ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers_Text_0:
# 42 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Oi! You're ruining our romantic\n"
	.string "excursion!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers_Text_1:
# 42 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Lizzy: Ugh! Worst date ever!\p"
	.string "Owen: W-Wait! Don't leave!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers_Text_2:
# 42 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Go away! We're having a touching\n"
	.string "moment!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_LowerDoubleLovers_Text_3:
# 43 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Ugh, now we have to take our Pokémon to\n"
	.string "Nurse Joy.\p"
	.string "Thanks a lot.$"

ISLANDGAME_MINTY_MEADOWS_Trainer_LowerJogger_Text_0:
# 47 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Hey! Get out of my way! I'm trying to\n"
	.string "keep up my pace here!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_LowerJogger_Text_1:
# 47 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I couldn't keep up the momentum...$"

ISLANDGAME_MINTY_MEADOWS_Trainer_LowerJogger_Text_2:
# 48 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I need to get stronger... Fight, Jack...\n"
	.string "Fight! TATAKAE!!!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleFlowerWoman_Text_0:
# 52 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Let our Pokémon bloom in the meadow's\n"
	.string "embrace!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleFlowerWoman_Text_1:
# 52 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Your Pokémon flourished beautifully!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleFlowerWoman_Text_2:
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I suppose it is still too early for me to\n"
	.string "bloom.$"

ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleBugNerd_Text_0:
# 57 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "I will find you my queen... I'll stop at\n"
	.string "nothing to see your beauty!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleBugNerd_Text_1:
# 57 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "How dare you come between me and Her\n"
	.string "Majesty!$"

ISLANDGAME_MINTY_MEADOWS_Trainer_MiddleBugNerd_Text_2:
# 58 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "You'll pay for this... Delaying my search\n"
	.string "for my lovely Vespiquen!$"

ISLANDGAME_MINTY_MEADOWS_UpperDoubleCamper_Text_0:
# 62 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Go Go Go! My awesome Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_UpperDoubleCamper_Text_1:
# 62 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "No No No! My awesome Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_UpperDoubleCamper_Text_2:
# 63 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "My Pokémon are awesome, so yours must\n"
	.string "be awesomer!$"

ISLANDGAME_MINTY_MEADOWS_UpperDoublePicnicker_Text_0:
# 67 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "This was the worst place for a picnic...\n"
	.string "I'm allergic to the flowers here.$"

ISLANDGAME_MINTY_MEADOWS_UpperDoublePicnicker_Text_1:
# 67 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "It's hard to concentrate in battle when\n"
	.string "you're sneezing constantly!$"

ISLANDGAME_MINTY_MEADOWS_UpperDoublePicnicker_Text_2:
# 68 "data/maps/ISLANDGAME_MINTY_MEADOWS/scripts.pory"
	.string "Do you have any tissues? I'm not sure\n"
	.string "how much more of this I can take.$"
