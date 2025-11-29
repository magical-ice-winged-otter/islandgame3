SS_RAIN_Hallway_MapScripts::
# 4 "data/maps/SS_RAIN_Hallway/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SS_RAIN_Hallway_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SS_RAIN_Hallway_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/SS_RAIN_Hallway/scripts.pory"
	goto_if_set FLAG_TIDALCOVE_RUKA_DEFEATED, SS_RAIN_Hallway_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SS_RAIN_Hallway_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 6 "data/maps/SS_RAIN_Hallway/scripts.pory"
	setobjectxyperm 1, 25, 8
# 7 "data/maps/SS_RAIN_Hallway/scripts.pory"
	addobject 1
	return


ISLANDGAME_ORANNA_SSRAIN_Hallway_NPC::
# 15 "data/maps/SS_RAIN_Hallway/scripts.pory"
	lock
# 16 "data/maps/SS_RAIN_Hallway/scripts.pory"
	faceplayer
# 17 "data/maps/SS_RAIN_Hallway/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Hallway_NPC_Text_0
# 20 "data/maps/SS_RAIN_Hallway/scripts.pory"
	closemessage
# 21 "data/maps/SS_RAIN_Hallway/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician::
# 25 "data/maps/SS_RAIN_Hallway/scripts.pory"
	lock
# 26 "data/maps/SS_RAIN_Hallway/scripts.pory"
	faceplayer
# 27 "data/maps/SS_RAIN_Hallway/scripts.pory"
	goto_if_set FLAG_TIDALCOVE_RUKA_DEFEATED, ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician_2
ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician_1:
# 35 "data/maps/SS_RAIN_Hallway/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician_Text_1
# 40 "data/maps/SS_RAIN_Hallway/scripts.pory"
	closemessage
# 41 "data/maps/SS_RAIN_Hallway/scripts.pory"
	release
	return

ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician_2:
# 28 "data/maps/SS_RAIN_Hallway/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician_Text_0
	goto ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician_1


ISLANDGAME_ORANNA_SSRAIN_Hallway_NPC_Text_0:
# 18 "data/maps/SS_RAIN_Hallway/scripts.pory"
	.string "Uggggg. It's sooooo hot outside. I'm\n"
	.string "staying in here until it's cooler.$"

ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician_Text_0:
# 29 "data/maps/SS_RAIN_Hallway/scripts.pory"
	.string "Oh hey, you're back!\p"
	.string "Unfortunately, I still haven't figured\n"
	.string "out what's going on with the lights...\p"
	.string "I'm on my lunch break right now, so you\n"
	.string "can check it out for yourself if you\l"
	.string "want.\p"
	.string "Just watch your step though... It's\n"
	.string "pretty dark.$"

ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician_Text_1:
# 36 "data/maps/SS_RAIN_Hallway/scripts.pory"
	.string "I'm currently doing some maintenance,\n"
	.string "so I can't let you downstairs for now.\p"
	.string "For some reason, the lights just keep\n"
	.string "turning on and off by themselves.\p"
	.string "It's almost like they're being\n"
	.string "possessed by a {COLOR LIGHT_BLUE}ghost {COLOR DARK_GRAY}or something...$"
