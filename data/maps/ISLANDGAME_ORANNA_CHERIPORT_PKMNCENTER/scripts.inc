ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER_MapScripts::
# 2 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER_SetHealLocation
# 3 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER_SetHealLocation::
# 7 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	setrespawn HEAL_LOCATION_ISLANDGAME_ORANNA_CHERIPORT
	return


ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER_NPC1::
# 13 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	lock
# 14 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	faceplayer
# 15 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER_NPC1_Text_0
# 23 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	closemessage
# 24 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC2::
# 29 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	lock
# 30 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	faceplayer
# 31 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC2_Text_0
# 36 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	closemessage
# 37 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC3::
# 42 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	lock
# 43 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	faceplayer
# 44 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC3_Text_0
# 49 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	closemessage
# 50 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER_NPC1_Text_0:
# 16 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	.string "It's dangerous to wander outside\n"
	.string "Cheriport without a Pokémon.\p"
	.string "Even if you don't have one though,\n"
	.string "there's still lots to do in Cheriport!\p"
	.string "One of my favorite things to do is take\n"
	.string "long walks on the beach.\p"
	.string "Candle-lit dinners aren't half bad\n"
	.string "either.\p"
	.string "Perhaps you'd like to take me to one?\p"
	.string "Aha, I am just kidding.$"

ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC2_Text_0:
# 32 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	.string "The Pokémon Centers in Marya are top\n"
	.string "notch!\p"
	.string "They've got rooms upstairs where you\n"
	.string "can rest in and pass time for FREE!\p"
	.string "The hospitality here is amazing. If only\n"
	.string "Unova was like this...$"

ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC3_Text_0:
# 45 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	.string "In the path between Cheriport and Camp\n"
	.string "Persi is a small cave where a scary\l"
	.string "black Pokémon lives.\p"
	.string "It's always sitting atop the rocky hills\n"
	.string "watching people walk by...\p"
	.string "...it's not going to eat us, right?\n"
	.string "Pokémon don't eat people, right...?$"
