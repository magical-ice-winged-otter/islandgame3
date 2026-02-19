ISLANDGAME_SIERRA_DESERT_MapScripts::
# 7 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ISLANDGAME_SIERRA_DESERT_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

ISLANDGAME_SIERRA_DESERT_MapScripts_MAP_SCRIPT_ON_LOAD:
# 8 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	mapgen_begin
# 9 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	mapgen_set_seed VAR_MAPGEN_SEED
# 10 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	mapgen_set_prefab 0, 4, 19, 6, 22
# 11 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	mapgen_set_prefab 1, 16, 21, 18, 22
# 12 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	mapgen_set_prefab 2, 1, 19, 2, 20
# 13 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	mapgen_set_prefab 3, 1, 22, 1, 22
# 14 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	mapgen_space 1, 1, 18, 12
# 15 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	mapgen_spawn_single 15, 18, 17, 20
# 16 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	mapgen_spawn_single 8, 18, 12, 22
# 17 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	mapgen_spawn 0, 2
# 18 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	mapgen_spawn 1, 3
# 19 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	mapgen_spawn 2, 4
# 20 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	mapgen_spawn 3, 5
# 21 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	mapgen_end
	return


ISLANDGAME_SIERRA_DESERT_Interact_Sign_UpdateSeed::
# 26 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	msgbox ISLANDGAME_SIERRA_DESERT_Interact_Sign_UpdateSeed_Text_0, MSGBOX_YESNO
# 28 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_SIERRA_DESERT_Interact_Sign_UpdateSeed_2
ISLANDGAME_SIERRA_DESERT_Interact_Sign_UpdateSeed_1:
# 33 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	closemessage
	return

ISLANDGAME_SIERRA_DESERT_Interact_Sign_UpdateSeed_2:
# 29 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	random 100
# 30 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	copyvar VAR_MAPGEN_SEED, VAR_RESULT
	goto ISLANDGAME_SIERRA_DESERT_Interact_Sign_UpdateSeed_1


ISLANDGAME_SIERRA_DESERT_Interact_Sign_UpdateSeed_Text_0:
# 26 "data/maps/ISLANDGAME_SIERRA_DESERT/scripts.pory"
	.string "Would you like to update the seed?$"
