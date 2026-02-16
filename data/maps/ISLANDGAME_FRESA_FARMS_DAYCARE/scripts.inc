ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts::
# 2 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	quest_emote_on_warp LOCALID_TORCHIC_BREEDER, QUEST_FRESA_FARMS_TORCHIC_EGG
# 6 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	compare VAR_MINTY_MEADOWS_STATE, MINTY_MEADOWS_SAVED_MAREEP
	goto_if_ne ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_FRESA_FARMS_DAYCARE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 7 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	setobjecthidden LOCALID_TORCHIC_BREEDER
	return


ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder::
# 15 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	lock
# 16 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	faceplayer
	specialvar VAR_RESULT, GetDaycareState
# 0 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	compare VAR_RESULT, DAYCARE_EGG_WAITING
	goto_if_eq ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_2
ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_1:
# 22 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	returnqueststate QUEST_FRESA_FARMS_TORCHIC_EGG
# 0 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	switch VAR_RESULT
# 23 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	case QUEST_INACTIVE, ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_6
# 40 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	case QUEST_ACTIVE, ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_7
# 76 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_8
ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_4:
# 80 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_2:
# 19 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	goto Route117_EventScript_DaycareEggWaiting
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_1

ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_6:
# 24 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_0, MSGBOX_YESNO
# 31 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	switch VAR_RESULT
# 32 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	case TRUE, ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_10
# 36 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	case FALSE, ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_11
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_4

ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_7:
	checkpartymon SPECIES_BLAZIKEN
# 0 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_12
	checkpartymon SPECIES_COMBUSKEN
# 0 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_13
	checkpartymon SPECIES_TORCHIC
# 0 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_14
# 73 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_7
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_4

ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_8:
# 77 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_8
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_4

ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_10:
# 33 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_1
# 34 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	giveegg SPECIES_TORCHIC, NUM_NATURES, 2, 18, 18, 18, 18, 18, 18
# 35 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	startquest QUEST_FRESA_FARMS_TORCHIC_EGG
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_4

ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_11:
# 37 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_2
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_4

ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_12:
# 42 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_3
# 48 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	giveitem ITEM_BLAZIKENITE
# 50 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_4
# 56 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	completequest QUEST_FRESA_FARMS_TORCHIC_EGG
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_4

ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_13:
# 59 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_5
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_4

ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_14:
# 65 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_6
	goto ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_4


ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_0:
# 25 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "{COLOR GREEN}Paulie: {COLOR DARK_GRAY}Ah, young trainer! It's good to\n"
	.string "see you again!\p"
	.string "I actually have another favor I wish to\n"
	.string "ask of you. Fret not, it is a relatively\l"
	.string "simple and easy one!\p"
	.string "I have a very special egg that I'd like\n"
	.string "you to take along on your journey!\p"
	.string "All I ask is for you to help me hatch and\n"
	.string "show it to me later. Is that alright?$"

ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_1:
# 33 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "Excellent! The Pokémon will be yours to\n"
	.string "keep, of course!$"

ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_2:
# 37 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "Ah, I understand. If you ever change\n"
	.string "your mind though, I'll always be here!$"

ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_3:
# 43 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "{COLOR GREEN}Paulie: {COLOR DARK_GRAY}Young trainer! It's been quite a\n"
	.string "while! Since you're here, I assume your\l"
	.string "Torchic has matured into a\l"
	.string "fully-fledged Blaziken now, hm?\p"
	.string "Wow... Magnificent. Simply magnificent.\n"
	.string "Quite the majestic Pokémon, isn't it?\p"
	.string "Well, a promise is a promise! Here is\n"
	.string "something I've been holding onto for a\l"
	.string "few years, just waiting for the right\l"
	.string "trainer to give it to, and I see no\l"
	.string "better recipient than you!$"

ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_4:
# 51 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "{COLOR GREEN}Paulie: {COLOR DARK_GRAY}You certainly are something\n"
	.string "special, young trainer. It hadn't even\l"
	.string "occurred to me that I never even\l"
	.string "learned your name.\p"
	.string "Ah... {PLAYER} is it? Well, you have my\n"
	.string "sincerest of gratitudes, {PLAYER}.\p"
	.string "I wish you the best of luck on the rest\n"
	.string "of your adventure. If you ever need a\l"
	.string "place to stay, our gate is always open.$"

ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_5:
# 60 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "{COLOR GREEN}Paulie: {COLOR DARK_GRAY}Waha, that little Torchic has\n"
	.string "grown up into a Combusken already?\p"
	.string "Childhood really just zooms right by,\n"
	.string "doesn't it? I'm looking forward to\l"
	.string "seeing it fully evolved!$"

ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_6:
# 66 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "{COLOR GREEN}Paulie: {COLOR DARK_GRAY}Oh! It finally hatched? Let me\n"
	.string "take a closer look at it...\p"
	.string "Ah, so it hatched into a Torchic?\n"
	.string "Welcome to parenthood, young trainer!\p"
	.string "That Torchic you have is no ordinary\n"
	.string "one either. It has a hidden ability!\p"
	.string "Take good care of Torchic! If you come\n"
	.string "back to me when it's fully evolved, I'll\l"
	.string "give you a little something special!$"

ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_7:
# 73 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "{COLOR GREEN}Paulie: {COLOR DARK_GRAY}Let me know what the egg\n"
	.string "hatches into later, young trainer!$"

ISLANDGAME_FRESA_FARMS_DAYCARE_Interact_TorchicBreeder_Text_8:
# 77 "data/maps/ISLANDGAME_FRESA_FARMS_DAYCARE/scripts.pory"
	.string "{COLOR GREEN}Paulie: {COLOR DARK_GRAY}I wish you the best of luck on\n"
	.string "the rest of your adventure. If you ever\l"
	.string "need a place to stay, our gate is always\l"
	.string "open.$"
