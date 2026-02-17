ISLANDGAME_ANOMALY02_2F_MapScripts::
	.byte 0


ISLANDGAME_ANOMALY02_2F_Interact1::
# 6 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	lock
# 7 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	msgbox ISLANDGAME_ANOMALY02_2F_Interact1_Text_0
# 8 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	playmoncry SPECIES_UNOWN, CRY_MODE_NORMAL
# 9 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	warp MAP_ISLANDGAME_ANOMALY01_1F, 15, 4
# 10 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	release
	return


ISLANDGAME_ANOMALY02_2F_Interact2::
# 14 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	lock
# 15 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	msgbox ISLANDGAME_ANOMALY02_2F_Interact2_Text_0
# 16 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	playmoncry SPECIES_UNOWN, CRY_MODE_WEAK
# 17 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	warp MAP_ISLANDGAME_ANOMALY01_3F, 8, 14
# 18 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	release
	return


ISLANDGAME_ANOMALY02_2F_Interact1_Text_0:
# 7 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	.string "Turn back now...{PAUSE 60}$"

ISLANDGAME_ANOMALY02_2F_Interact2_Text_0:
# 15 "data/maps/ISLANDGAME_ANOMALY02_2F/scripts.pory"
	.string "No more...{PAUSE 60}$"
