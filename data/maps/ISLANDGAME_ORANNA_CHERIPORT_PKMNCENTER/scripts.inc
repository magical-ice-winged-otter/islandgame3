ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER_MapScripts::
# 5 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER_SetHealLocation
# 6 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER_SetHealLocation::
# 10 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	setrespawn HEAL_LOCATION_ISLANDGAME_ORANNA_CHERIPORT
	return


ISLANDGAME_COMMON_PKMNCENTER_Nurse::
# 17 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	goto_if_unset FLAG_ORANNA_CHERIPORT_GOT_EEVEE, ISLANDGAME_COMMON_PKMNCENTER_Nurse_1
# 27 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	setvar VAR_0x800B, 1
# 28 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 29 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	waitmessage
# 30 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	waitbuttonpress
# 31 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	release
	return

ISLANDGAME_COMMON_PKMNCENTER_Nurse_1:
# 18 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	lock
# 19 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_COMMON_PKMNCENTER_Nurse_Text_0
# 23 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	closemessage
# 24 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER_NPC1::
# 37 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	lock
# 38 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	faceplayer
# 39 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER_NPC1_Text_0
# 47 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	closemessage
# 48 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC2::
# 53 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	lock
# 54 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	faceplayer
# 55 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC2_Text_0
# 60 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	closemessage
# 61 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC3::
# 66 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	lock
# 67 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	faceplayer
# 68 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC3_Text_0
# 73 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	closemessage
# 74 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	release
	return


ISLANDGAME_COMMON_PKMNCENTER_Nurse_Text_0:
# 20 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	.string "Welcome to the Maryan isles, trainer!\n"
	.string "This is a Pokémon Center.\p"
	.string "It seems like you don't have any\n"
	.string "Pokémon right now, but when you do, you\l"
	.string "can take them here to heal them!$"

ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER_NPC1_Text_0:
# 40 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
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
# 56 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	.string "The Pokémon Centers in Marya are top\n"
	.string "notch!\p"
	.string "They've got rooms upstairs where you\n"
	.string "can rest in and pass time for FREE!\p"
	.string "The hospitality here is amazing. If only\n"
	.string "Unova was like this...$"

ISLANDGAME_CHERIPORT_PKMNCENTER_EventScript_NPC3_Text_0:
# 69 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_PKMNCENTER/scripts.pory"
	.string "In the path between Cheriport and Camp\n"
	.string "Persi is a small cave where a scary\l"
	.string "black Pokémon lives.\p"
	.string "It's always sitting atop the rocky hills\n"
	.string "watching people walk by...\p"
	.string "...it's not going to eat us, right?\n"
	.string "Pokémon don't eat people, right...?$"
