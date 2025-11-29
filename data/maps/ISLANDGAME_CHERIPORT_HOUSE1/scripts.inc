ISLANDGAME_CHERIPORT_HOUSE1_MapScripts::
	.byte 0


ISLANDGAME_CHERIPORT_TOWN1_EventScript_NPC1Talk::
# 4 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	lock
# 5 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	faceplayer
# 6 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	msgbox NPC1_Text
# 7 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_TOWN1_EventScript_NPC2Talk::
# 19 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	lock
# 20 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	faceplayer
# 21 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	msgbox NPC2_Text
# 22 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	release
	return


NPC1_Text::
# 10 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	.string "Oranna is home to one of Marya's\n"
	.string "legendary Isle Guardians.\p"
	.string "The mythical Wings of Frost: Articuno!\p"
	.string "With a single flap of its wings, it can\n"
	.string "chill the moisture in the air around it,\l"
	.string "creating snow even in the sweltering\l"
	.string "tropics of Marya!$"

NPC2_Text::
# 25 "data/maps/ISLANDGAME_CHERIPORT_HOUSE1/scripts.pory"
	.string "Marya has really become a hot tourist\n"
	.string "destination in recent years!\p"
	.string "It's interesting seeing so many people\n"
	.string "from different regions visiting here!$"
