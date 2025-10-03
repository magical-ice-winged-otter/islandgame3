ISLANDGAME_ORANNA_SSRAIN_Hallway_MapScripts::
# 5 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ORANNA_SSRAIN_Hallway_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_ORANNA_SSRAIN_Hallway_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	goto_if_set FLAG_ORANNA_TIDALCOVE_RUKA_DEFEATED, ISLANDGAME_ORANNA_SSRAIN_Hallway_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_ORANNA_SSRAIN_Hallway_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	setobjectxyperm 1, 25, 8
# 8 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	addobject 1
	return


ISLANDGAME_ORANNA_SSRAIN_Hallway_NPC::
# 15 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	lock
# 16 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	faceplayer
# 17 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Hallway_NPC_Text_0
# 20 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	closemessage
# 21 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician::
# 25 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	lock
# 26 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	faceplayer
# 27 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	goto_if_set FLAG_ORANNA_TIDALCOVE_RUKA_DEFEATED, ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician_2
ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician_1:
# 35 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician_Text_1
# 40 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	closemessage
# 41 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	release
	return

ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician_2:
# 28 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	msgbox ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician_Text_0
	goto ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician_1


ISLANDGAME_ORANNA_SSRAIN_Hallway_NPC_Text_0:
# 18 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	.string "It's too hot outside. I'm staying in\n"
	.string "here until it's cooler.$"

ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician_Text_0:
# 29 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	.string "Oh hey, you're back!\p"
	.string "Unfortunately, we still haven't figured\n"
	.string "out what's going on with the lights...\p"
	.string "We're on our break right now, so you can\n"
	.string "check it out for yourself if you want.\p"
	.string "Just watch your step though... It's\n"
	.string "pretty dark.$"

ISLANDGAME_ORANNA_SSRAIN_Hallway_Electrician_Text_1:
# 36 "data/maps/ISLANDGAME_ORANNA_SSRAIN_Hallway/scripts.pory"
	.string "We're currently doing some maintenance,\n"
	.string "so I can't let you downstairs for now.\p"
	.string "For some reason, the lights just keep\n"
	.string "turning on and off by themselves.\p"
	.string "It's almost like they're being\n"
	.string "possessed by a {COLOR LIGHT_BLUE}ghost {COLOR DARK_GRAY}or something...$"
