ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_MapScripts::
	.byte 0


ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_Interact_MelissaFather::
# 6 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_Interact_MelissaFather_Text_0, MSGBOX_NPC
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_Interact_MelissaMother::
# 16 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_Interact_MelissaMother_1
# 26 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_Interact_MelissaMother_Text_1, MSGBOX_NPC
	return

ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_Interact_MelissaMother_1:
# 17 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_Interact_MelissaMother_Text_0, MSGBOX_NPC
	return


ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_Interact_MelissaFather_Text_0:
# 7 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	.string "Feels like just yesterday, I was taking\n"
	.string "Melissa to her first day of trainer\l"
	.string "school.\p"
	.string "Now she's exploring the Maryan wilds all\n"
	.string "on her own, same as her older brother.\p"
	.string "Heh... Kids grow up so fast, don't they?\n"
	.string "Blink and you'll miss it.\p"
	.string "That's why it's important to cherish\n"
	.string "every little moment with them.\p"
	.string "You never know when the next time\n"
	.string "you'll be able to see them again.$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_Interact_MelissaMother_Text_0:
# 18 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	.string "Hello dearie! You must be {PLAYER},\n"
	.string "right? My daughter told me about you.\p"
	.string "She was very excited to get a colleague\n"
	.string "from beyond the great blue seas!\p"
	.string "I hope you two get along well. She can\n"
	.string "be a little ditzy and stubborn at times,\l"
	.string "but she's a warm and honest young lady.\p"
	.string "Oh, where is she right now? She should\n"
	.string "be in the Minty Meadows doing research.\p"
	.string "I'm sure she'd be more than happy to\n"
	.string "show you around Oranna.$"

ISLANDGAME_MAPLEGROVE_AudreysHouse_1F_Interact_MelissaMother_Text_1:
# 27 "data/maps/ISLANDGAME_MAPLEGROVE_AudreysHouse_1F/scripts.pory"
	.string "It's good to see you again, dearie!\n"
	.string "Melissa just stopped by earlier.\p"
	.string "She told me all about how you two helped\n"
	.string "Mr. Fresa find his missing Mareep!\p"
	.string "You were both very kind and brave to\n"
	.string "stand up to that wild Mightyena.\p"
	.string "Thank you for being with my daughter.\n"
	.string "She gets ahead of herself a lot, so I'm\l"
	.string "glad neither of you were hurt.$"
