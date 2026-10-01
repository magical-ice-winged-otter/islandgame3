ISLANDGAME_AETHERIA_MUSEUM_2F_2_MapScripts::
	.byte 0


ISLANDGAME_AETHERIA_MUSEUM_2F_2_RecoveredArtifacts::
# 17 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_RecoveredArtifacts_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_BlightedRock::
# 22 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_BlightedRock_Text_0, MSGBOX_SIGN
# 28 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	setvar VAR_AETHERIA_STATE, 6
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Fossil::
# 32 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Fossil_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_SilverFeather::
# 40 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_SilverFeather_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Lugia::
# 48 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Lugia_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Curator::
# 62 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock
# 63 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	faceplayer
# 64 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Curator_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Edea::
# 73 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock
# 74 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Edea_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Pokefan::
# 81 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock
# 82 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	faceplayer
# 83 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Pokefan_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Melissa::
# 90 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock
# 91 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	faceplayer
# 92 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Melissa_Text_0
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Scientist::
# 101 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock
# 102 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	faceplayer
# 103 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Scientist_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Woman::
# 110 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock
# 111 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	faceplayer
# 112 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Woman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Beauty::
# 120 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock
# 121 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Beauty_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_Socialite::
# 127 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	lock
# 128 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	faceplayer
# 129 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_MUSEUM_2F_2_Socialite_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_MUSEUM_2F_2_RecoveredArtifacts_Text_0:
# 18 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "{COLOR GREEN}> Inside the display are the charred\n"
	.string "remnants of various artifacts.\p"
	.string "$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_BlightedRock_Text_0:
# 23 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "Primordial Stone\p"
	.string "A fragment of volcanic rock unearthed\n"
	.string "from the beaches of Mount Kaballa.\p"
	.string "Geological dating suggests that the\n"
	.string "rock originated from the Great\l"
	.string "Volcano's eruption.\p"
	.string "{COLOR GREEN}> A strange aura seems to emanate from\n"
	.string "the stone...$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Fossil_Text_0:
# 33 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "Fossilized Remains\p"
	.string "The fossilized remains of an Absol's\n"
	.string "broken horn. It is strangely misshapen.\p"
	.string "According to the village elder, a wild\n"
	.string "Absol had approached her before the\l"
	.string "storm, as if to warn her of the\l"
	.string "encroaching disaster.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_SilverFeather_Text_0:
# 41 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "Silver Feather\p"
	.string "A sparkling silver feather that was\n"
	.string "shed from Lugia during its battle with\l"
	.string "the wicked beast.\p"
	.string "It is said that the feather emits a\n"
	.string "faint blue glow when Lugia is nearby.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Lugia_Text_0:
# 49 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "The Glorious Savior\p"
	.string "An ancient statue of Lugia that was\n"
	.string "uncovered during an archaeological\l"
	.string "excavation.\p"
	.string "The statue depicts Lugia with slightly\n"
	.string "different colors, possibly due to age.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Curator_Text_0:
# 65 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "Hope you are enjoying the exhibit,\n"
	.string "young trainer!\p"
	.string "It warms my heart to see that the new\n"
	.string "generation still has interest in our\l"
	.string "historical ventures.\p"
	.string "Several of these artifacts we have\n"
	.string "kept preserved for many years.\p"
	.string "Our newest finding however is that rock\n"
	.string "over to the left. Please take a look!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Edea_Text_0:
# 75 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "...That's it? It looks just like any\n"
	.string "other rock in the region.\p"
	.string "Well, if they insist. I'm not gonna argue\n"
	.string "with it.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Pokefan_Text_0:
# 84 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "They say that the sound of Mount\n"
	.string "Kaballa's eruption could be heard as far\l"
	.string "as thousands of miles.\p"
	.string "That means someone all the way in the\n"
	.string "Hoenn region would've heard it!$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Melissa_Text_0:
# 93 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "Wow... that feather's really huge! It's\n"
	.string "so much bigger than mine!\p"
	.string "In Marya, Lugia's silver feather is a\n"
	.string "symbol of luck and protection.\p"
	.string "It's why I keep this feather charm with\n"
	.string "me at all times!\p"
	.string "Nothing'll beat the real deal though,\n"
	.string "huh? Imagine having to carry THAT\l"
	.string "everywhere you go.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Scientist_Text_0:
# 104 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "I've never seen an Absol horn look so...\n"
	.string "menacing.\p"
	.string "Could this be the result of prolonged\n"
	.string "exposure to the corrupted rainfall?$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Woman_Text_0:
# 113 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "What a harrowing night that must've\n"
	.string "been.\p"
	.string "If not for Lugia, the world as we know it\n"
	.string "today may not have remained.\p"
	.string "We are forever indebted to him.$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Beauty_Text_0:
# 122 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "This Lugia... is it the same one that\n"
	.string "dwelled in the Whirl Islands of Johto?$"

ISLANDGAME_AETHERIA_MUSEUM_2F_2_Socialite_Text_0:
# 130 "data/maps/ISLANDGAME_AETHERIA_MUSEUM_2F_2/scripts.pory"
	.string "Every year, the Silverwing Order makes a\n"
	.string "perilous journey across the Maryan sea\l"
	.string "to the Northern Islands, where our lord\l"
	.string "and savior resides.\p"
	.string "At the shrine, the order performs a\n"
	.string "sacred ritual, offering fervent prayers\l"
	.string "and bountiful tribute for Lugia in\l"
	.string "exchange for his continued protection.$"
