ISLANDGAME_MAPLEGROVE_HOUSE1_MapScripts::
	.byte 0


ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor::
# 6 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	lock
# 7 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	faceplayer
# 9 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_Text_0
# 15 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	showmoneybox 0, 0
# 16 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_Text_1, MSGBOX_YESNO
# 17 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	hidemoneybox
# 19 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_2
	checkmoney 1500
# 0 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_3
# 43 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_Text_5
ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_1:
# 46 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	release
	return

ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_2:
# 20 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_Text_2
	goto ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_1

ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_3:
# 23 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_Text_3
# 24 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	setvar VAR_0x8005, MOVE_HIDDEN_POWER
# 25 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	special ChooseMonForMoveTutor
# 26 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	waitstate
# 28 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_7
# 39 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_Text_2
	goto ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_1

ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_7:
# 29 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	showmoneybox 0, 0
# 30 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_Text_4
# 31 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	closemessage
# 32 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	removemoney 1500
# 33 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	updatemoneybox
# 34 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	playse SE_SHOP
# 35 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	waitse
# 36 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	hidemoneybox
	goto ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_1


ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_Togepi::
# 50 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	playmoncry SPECIES_TOGEPI, CRY_MODE_NORMAL
# 52 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_Togepi_Text_0, MSGBOX_NPC
	return


ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_TogepiMan::
# 60 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_TogepiMan_Text_0, MSGBOX_NPC
	return


ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_Text_0:
# 10 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	.string "Hmm... Your Pokémon possess a dormant\n"
	.string "power within them...\p"
	.string "Hidden potential just waiting to be\n"
	.string "unlocked...\p"
	.string "I can help them obtain this hidden\n"
	.string "power... provided you have the funds...$"

ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_Text_1:
# 16 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	.string "I will teach your Pokémon its hidden\n"
	.string "power for ¥1500... How's that sound?$"

ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_Text_2:
# 20 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	.string "What a shame... All that hidden\n"
	.string "potential gone to waste.$"

ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_Text_3:
# 23 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	.string "Excellent... Whose hidden power do you\n"
	.string "want unlocked...?$"

ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_Text_4:
# 30 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	.string "Your Pokémon's hidden power has been\n"
	.string "unlocked... I will take my payment now.$"

ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_HPTutor_Text_5:
# 43 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	.string "My services do not come cheap... Come\n"
	.string "back when you have sufficient funds.$"

ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_Togepi_Text_0:
# 53 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	.string "Togepi! {COLOR BLUE}(Hello hooman!)\p"
	.string "{COLOR DARK_GRAY}Togi-togi! {COLOR BLUE}(Wow! You can understand me?\n"
	.string "That's amazing!)\p"
	.string "{COLOR DARK_GRAY}Pi-pi. {COLOR BLUE}(You must be really special.)$"

ISLANDGAME_MAPLEGROVE_HOUSE1_Interact_TogepiMan_Text_0:
# 60 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE1/scripts.pory"
	.string "My Togepi is very talkative. I wish I\n"
	.string "could understand what he was saying...$"
