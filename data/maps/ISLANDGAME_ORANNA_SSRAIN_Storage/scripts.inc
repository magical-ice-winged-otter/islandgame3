ISLANDGAME_ORANNA_SSRAIN_Storage_MapScripts::
	.byte 0


ISLANDGAME_ORANNA_SSRAIN_Storage_Rotom::
# 4 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	setflag FLAG_SMART_WILD_AI
# 7 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	createmon B_SIDE_OPPONENT, B_FLANK_LEFT, SPECIES_ROTOM, 25, 0, NUM_NATURES, 0, MON_GENDERLESS, 0, 0, 0, 0, 0, 0, 0
# 8 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
# 9 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	waitmoncry
# 10 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 11 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	dowildbattle
# 12 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	clearflag FLAG_SMART_WILD_AI
# 13 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 15 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	case B_OUTCOME_LOST, ISLANDGAME_ORANNA_SSRAIN_Storage_Rotom_3
# 18 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	case B_OUTCOME_RAN, ISLANDGAME_ORANNA_SSRAIN_Storage_Rotom_4
# 20 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	case B_OUTCOME_WON, ISLANDGAME_ORANNA_SSRAIN_Storage_Rotom_5
# 22 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	case B_OUTCOME_CAUGHT, ISLANDGAME_ORANNA_SSRAIN_Storage_Rotom_6
# 26 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	setflag FLAG_ORANNA_SSRAIN_ROTOM_DEFEATED
# 27 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
ISLANDGAME_ORANNA_SSRAIN_Storage_Rotom_1:
# 29 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	release
	return

ISLANDGAME_ORANNA_SSRAIN_Storage_Rotom_3:
	goto ISLANDGAME_ORANNA_SSRAIN_Storage_Rotom_1

ISLANDGAME_ORANNA_SSRAIN_Storage_Rotom_4:
	goto ISLANDGAME_ORANNA_SSRAIN_Storage_Rotom_1

ISLANDGAME_ORANNA_SSRAIN_Storage_Rotom_5:
# 21 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_ORANNA_SSRAIN_Storage_Rotom_1

ISLANDGAME_ORANNA_SSRAIN_Storage_Rotom_6:
# 23 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	setflag FLAG_ORANNA_SSRAIN_ROTOM_DEFEATED
# 24 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Storage/scripts.pory"
	goto Common_EventScript_RemoveStaticPokemon
	goto ISLANDGAME_ORANNA_SSRAIN_Storage_Rotom_1

