ISLANDGAME_MAPLEGROVE_HOUSE2_MapScripts::
# 4 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_MAPLEGROVE_HOUSE2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_MAPLEGROVE_HOUSE2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	quest_emote_on_warp LOCALID_LOVER, QUEST_MAPLEGROVE_LOVERS
	return


ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Doll::
# 12 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Doll_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Lover::
# 16 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	returnqueststate QUEST_MAPLEGROVE_LOVERS
# 0 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	switch VAR_RESULT
# 18 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	case QUEST_INACTIVE, ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Lover_2
# 21 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	case QUEST_ACTIVE, ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Lover_3
# 29 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	case QUEST_REWARD, ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Lover_4
# 32 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	case QUEST_COMPLETED, ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Lover_5
	return

ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Lover_2:
# 19 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	goto ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp
	return

ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Lover_3:
	checkitem ITEM_ISLANDGAME_JULIES_LETTER
# 0 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Lover_6
# 26 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Lover_Text_0, MSGBOX_NPC
	return

ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Lover_4:
# 30 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	goto ISLANDGAME_MAPLEGROVE_HOUSE1_TryGiveReward
	return

ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Lover_5:
# 33 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Lover_Text_1, MSGBOX_NPC
	return

ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Lover_6:
# 23 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	goto ISLANDGAME_MAPLEGROVE_HOUSE1_QuestCompleted
	return


ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp::
# 38 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	goto_if_unset FLAG_TEMP_1, ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp_2
ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp_1:
# 65 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	faceplayer
# 67 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp_Text_1, MSGBOX_YESNO
# 72 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp_4
# 78 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp_Text_3, MSGBOX_AUTOCLOSE
	return

ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp_2:
# 39 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	setobjectmovementtype LOCALID_LOVER, MOVEMENT_TYPE_FACE_LEFT
# 40 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	removeobject LOCALID_LOVER
# 41 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	addobject LOCALID_LOVER
# 43 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp_Text_0, MSGBOX_AUTOCLOSE
# 58 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	faceplayer
# 59 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	playse SE_PIN
# 60 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	applymovement LOCALID_LOVER, ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp_Movement_0
# 61 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	waitmovement
# 62 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	setflag FLAG_TEMP_1
	goto ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp_1

ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp_4:
# 73 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp_Text_2, MSGBOX_AUTOCLOSE
# 74 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	giveitem ITEM_ISLANDGAME_ROMANS_LETTER
# 75 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	startquest QUEST_MAPLEGROVE_LOVERS
	return


ISLANDGAME_MAPLEGROVE_HOUSE1_QuestCompleted::
# 83 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	faceplayer
# 84 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	removeitem ITEM_ISLANDGAME_JULIES_LETTER
# 86 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_QuestCompleted_Text_0, MSGBOX_AUTOCLOSE
# 96 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	goto ISLANDGAME_MAPLEGROVE_HOUSE1_TryGiveReward
	return


ISLANDGAME_MAPLEGROVE_HOUSE1_TryGiveReward::
	checkitemspace ITEM_DESTINY_KNOT
# 0 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_MAPLEGROVE_HOUSE1_TryGiveReward_1
# 114 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	questmenu QUEST_MENU_SET_REWARD, QUEST_MAPLEGROVE_LOVERS
# 115 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	applymovement LOCALID_LOVER, ISLANDGAME_MAPLEGROVE_HOUSE1_TryGiveReward_Movement_0
# 117 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_TryGiveReward_Text_1, MSGBOX_AUTOCLOSE
	return

ISLANDGAME_MAPLEGROVE_HOUSE1_TryGiveReward_1:
# 101 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	giveitem ITEM_DESTINY_KNOT
# 103 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	msgbox ISLANDGAME_MAPLEGROVE_HOUSE1_TryGiveReward_Text_0, MSGBOX_AUTOCLOSE
# 111 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	completequest QUEST_MAPLEGROVE_LOVERS
	return


# 60 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp_Movement_0:
# 60 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	emote_exclamation_mark
# 60 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	delay_8
# 60 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	delay_8
# 60 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	delay_8
# 60 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	delay_8
# 60 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	delay_8
# 60 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	delay_8
	step_end

# 115 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
ISLANDGAME_MAPLEGROVE_HOUSE1_TryGiveReward_Movement_0:
# 115 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	emote_exclamation_mark
	step_end

ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Doll_Text_0:
# 12 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "{COLOR RED}(It's a Jigglypuff plush. It's very\n"
	.string "jiggly.)$"

ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Lover_Text_0:
# 26 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "My love is somewhere in Applevine.\n"
	.string "Please tell me what she says!$"

ISLANDGAME_MAPLEGROVE_HOUSE2_Interact_Lover_Text_1:
# 33 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "I guess I was being a little dramatic\n"
	.string "earlier.$"

ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp_Text_0:
# 44 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "Oh Julie, my dear Julie! Why has fate\n"
	.string "whisked you away from me?\p"
	.string "Tis been but only a month since you\n"
	.string "departed from Oranna...\p"
	.string "But it feels as if a millennium has come\n"
	.string "and gone!\p"
	.string "Oh! If only I had mustered the courage\n"
	.string "to confess my feelings sooner!\p"
	.string "If only I had not wasted our last week\n"
	.string "together before you moved to Lumine...\p"
	.string "Then, maybe then, the power of our\n"
	.string "newfound love would have bound us\l"
	.string "together on this island forever!\p"
	.string "But alas, the great Maryan Sea now\n"
	.string "separates us for eternity...\p"
	.string "Oh great winged guardian of the sea!\n"
	.string "Hear my lowly plea!\p"
	.string "Bestow upon me a messenger of love! One\n"
	.string "that may deliver my confession to my\l"
	.string "one true soulmate in this world!\p"
	.string "Perhaps... a traveling Pokémon trainer\n"
	.string "of sorts!\p"
	.string "Preferably, one that will happen to\n"
	.string "pass by the town of Applevine!\p"
	.string "...{PAUSE 60}Eh?$"

ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp_Text_1:
# 68 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "O-Oh! You must be the messenger of love\n"
	.string "that Lugia has blessed me with!\p"
	.string "Please! Deliver this letter to my\n"
	.string "beloved! It is all I ask for in my life!$"

ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp_Text_2:
# 73 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "Splendid! My love is somewhere in\n"
	.string "Applevine. Please tell me what she says!$"

ISLANDGAME_MAPLEGROVE_HOUSE1_AskForHelp_Text_3:
# 78 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "Oh... My apologies. I mistook you for a\n"
	.string "heavenly messenger sent by Lugia.$"

ISLANDGAME_MAPLEGROVE_HOUSE1_QuestCompleted_Text_0:
# 87 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "Ah! You've returned! What did she say?\p"
	.string "{COLOR RED}(You hand Julie's letter to Roman.)\p"
	.string "{COLOR DARK_GRAY}...{PAUSE 60}Oh...{PAUSE 60}I see...{PAUSE 60}What a fool I truly was...{PAUSE 60}\p"
	.string "...It appears I've misinterpreted her\n"
	.string "leaving to be permanent.\p"
	.string "Turns out she's only staying there for\n"
	.string "the summer to help her relatives with\l"
	.string "their family business.\p"
	.string "Come to think of it... it did seem\n"
	.string "strange that her parents were still\l"
	.string "living here...\p"
	.string "My apologies, trainer. Please take this\n"
	.string "as penance for my blunder.$"

ISLANDGAME_MAPLEGROVE_HOUSE1_TryGiveReward_Text_0:
# 104 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "Hm? You wish to know her response to my\n"
	.string "confession?\p"
	.string "I suppose I do owe it to you to at least\n"
	.string "tell you what she said...\p"
	.string "She told me to meet her at the\n"
	.string "Silverwing Festival for her answer!\p"
	.string "Argh... the anticipation is killing me...{PAUSE 30}\n"
	.string "but I am at least glad to know I'll still\l"
	.string "be able to see her, regardless of her\l"
	.string "answer.\p"
	.string "It just gives us more time to form a\n"
	.string "bond together!$"

ISLANDGAME_MAPLEGROVE_HOUSE1_TryGiveReward_Text_1:
# 118 "data/maps/ISLANDGAME_MAPLEGROVE_HOUSE2/scripts.pory"
	.string "Oh, you don't have room in your bag for\n"
	.string "my Destiny Knot...\p"
	.string "But don't worry. Come back when you\n"
	.string "have room and it'll be yours!$"
