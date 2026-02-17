ISLANDGAME_ANOMALY01_1F_MapScripts::
	.byte 0


ISLANDGAME_ANOMALY01_1F_Interact1::
# 6 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	lock
# 7 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	msgbox ISLANDGAME_ANOMALY01_1F_Interact1_Text_0
# 8 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	playmoncry SPECIES_UNOWN, CRY_MODE_NORMAL
# 9 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	warp MAP_ISLANDGAME_ANOMALY02_2F, 4, 5
# 10 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	release
	return


ISLANDGAME_ANOMALY01_1F_Interact2::
# 14 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	lock
# 15 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	msgbox ISLANDGAME_ANOMALY01_1F_Interact2_Text_0
# 16 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	playmoncry SPECIES_UNOWN, CRY_MODE_NORMAL
# 17 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	warp MAP_ISLANDGAME_ANOMALY02_2F, 0, 7
# 18 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	release
	return


ISLANDGAME_ANOMALY01_1F_Interact1_Text_0:
# 7 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	.string "Hurry...{PAUSE 60}\n"
	.string "Leave...{PAUSE 60}$"

ISLANDGAME_ANOMALY01_1F_Interact2_Text_0:
# 15 "data/maps/ISLANDGAME_ANOMALY01_1F/scripts.pory"
	.string "Dying... {PAUSE 60}Dying... {PAUSE 60}Dying...{PAUSE 60}$"
