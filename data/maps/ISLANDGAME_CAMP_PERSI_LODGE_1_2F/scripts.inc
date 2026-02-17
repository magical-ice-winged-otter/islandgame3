ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts::
# 2 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 0 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	compare VAR_RESULT, QUEST_INACTIVE
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 8 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	compare VAR_CAMP_PERSI_STATE, CAMP_PERSI_CLAIMED_LOSER_REWARD
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 0 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	compare VAR_RESULT, QUEST_COMPLETED
	goto_if_ne ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 17 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	compare VAR_CAMP_PERSI_STATE, CAMP_PERSI_CLAIMED_LOSER_REWARD
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_12
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setobjecthidden LOCALID_LODGE_2F_CARD_LOSER
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 9 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setobjecthidden LOCALID_LODGE_2F_CARD_LOSER
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
	gettimeofday
# 0 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_ne ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
	returnqueststate QUEST_PERSI_FAVORITE_CARD
# 0 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	compare VAR_RESULT, QUEST_COMPLETED
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	goto ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 14 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setobjecthidden LOCALID_LODGE_2F_CARD_KID
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 18 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setobjecthidden LOCALID_LODGE_2F_CARD_KID
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_12:
	gettimeofday
# 0 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_ne ISLANDGAME_CAMP_PERSI_LODGE_1_2F_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser::
# 26 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	switch VAR_CAMP_PERSI_STATE
# 27 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	case CAMP_PERSI_SEARCHING_FOR_CLUES, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_2
# 46 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	case CAMP_PERSI_SEARCHING_FOR_CARD, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_3
# 54 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	case CAMP_PERSI_DEFEATED_LOSER, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_4
# 70 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	case CAMP_PERSI_CLAIMED_LOSER_REWARD, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_5
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_2:
# 28 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	playse SE_PIN
# 30 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	applymovement LOCALID_LODGE_2F_CARD_LOSER, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Movement_0
# 31 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	delay 60
# 32 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Text_1, MSGBOX_AUTOCLOSE
# 33 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	applymovement LOCALID_LODGE_2F_CARD_LOSER, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Movement_1
# 34 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	waitmovement
# 35 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	delay 60
# 37 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Text_2, MSGBOX_AUTOCLOSE
# 42 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	applymovement LOCALID_LODGE_2F_CARD_LOSER, ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Movement_2
# 43 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	waitmovement
# 44 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setvar VAR_CAMP_PERSI_STATE, CAMP_PERSI_SEARCHING_FOR_CARD
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_3:
# 47 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Text_3, MSGBOX_NPC
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_4:
# 55 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Text_4, MSGBOX_NPC
	checkitemspace ITEM_TM53
# 0 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_6
# 65 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Text_6, MSGBOX_AUTOCLOSE
# 66 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	giveitem ITEM_TM53
# 67 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	setvar VAR_CAMP_PERSI_STATE, CAMP_PERSI_CLAIMED_LOSER_REWARD
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_5:
# 71 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Text_7, MSGBOX_NPC
	return

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_6:
# 62 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Text_5, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardKid::
# 76 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	msgbox ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardKid_Text_0, MSGBOX_NPC
	return


# 30 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Movement_0:
# 30 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	emote_exclamation_mark
# 30 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	face_player
	step_end

# 33 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Movement_1:
# 33 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	emote_question_mark
	step_end

# 42 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Movement_2:
# 42 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	face_right
	step_end

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Text_0:
# 28 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "That was just too easy! It was literally\n"
	.string "like stealing candy from a baby!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Text_1:
# 32 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "Aiiiiiie!{PAUSE 30} Where did you come from!? Don't\n"
	.string "you know it's rude to eavesdrop on\l"
	.string "people!?$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Text_2:
# 38 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "E-Eh? A stolen card? W-Why would I know\n"
	.string "anything about that?\p"
	.string "H-He probably just lost it somewhere in\n"
	.string "the tall grass or something...$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Text_3:
# 48 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "L-Leave me alone! I already told you, I\n"
	.string "don't know anything about his missing\l"
	.string "Charizard!\p"
	.string "...\p"
	.string "{COLOR RED}(I never mentioned anything about the\n"
	.string "card being a Charizard...)\p"
	.string "(Maybe I should do a little looking\n"
	.string "around camp...)$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Text_4:
# 56 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "Ever since our battle, I've really\n"
	.string "learned a lot.\p"
	.string "I now realize that winning takes more\n"
	.string "than just the stronger Pokémon to win.\p"
	.string "Thank you for teaching that to me, and\n"
	.string "also keeping the whole thing a secret\l"
	.string "between us...$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Text_5:
# 62 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "I have a Technical Machine that I'd like\n"
	.string "to give you as a reward, but it seems\l"
	.string "you don't have room for it.$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Text_6:
# 65 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "Here, take this Technical Machine as\n"
	.string "thanks. It's my favorite move, and I\l"
	.string "know a trainer like you will make good\l"
	.string "use of it.$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardLoser_Text_7:
# 71 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "I'll figure out a way to beat that kid's\n"
	.string "Charizard fair and square!$"

ISLANDGAME_CAMP_PERSI_LODGE_1_2F_Interact_CardKid_Text_0:
# 76 "data/maps/ISLANDGAME_CAMP_PERSI_LODGE_1_2F/scripts.pory"
	.string "I'm not good at remembering type\n"
	.string "match-ups, so the card game helps me\l"
	.string "learn them a lot better!$"
