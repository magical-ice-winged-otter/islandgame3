ISLANDGAME_MINTY_MEADOWS_HOUSE_MapScripts::
	.byte 0


ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops::
# 6 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	lock
# 7 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	faceplayer
# 8 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	goto_if_set FLAG_MINTY_MEADOWS_FREE_MINT, RepeatCustomer
# 10 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_0, MSGBOX_YESNO
# 15 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_2
# 20 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_2, MSGBOX_AUTOCLOSE
# 21 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	goto End
ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_1:
# 24 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
RepeatCustomer:
# 25 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_3
# 26 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	showmoneybox 18, 0
# 27 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_4, MSGBOX_YESNO
# 29 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_6
# 41 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	hidemoneybox
# 42 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_2, MSGBOX_AUTOCLOSE
# 43 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	goto End
ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_5:
# 46 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
Shop:
# 47 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_6, 0
# 48 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_7, ITEM_LONELY_MINT
# 49 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_8, ITEM_ADAMANT_MINT
# 50 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_9, ITEM_NAUGHTY_MINT
# 51 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_10, ITEM_BRAVE_MINT
# 52 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_11, ITEM_BOLD_MINT
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_12, ITEM_IMPISH_MINT
# 54 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_13, ITEM_LAX_MINT
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_14, ITEM_RELAXED_MINT
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_15, ITEM_MODEST_MINT
# 57 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_16, ITEM_MILD_MINT
# 58 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_17, ITEM_RASH_MINT
# 59 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_18, ITEM_QUIET_MINT
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_19, ITEM_CALM_MINT
# 61 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_20, ITEM_GENTLE_MINT
# 62 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_21, ITEM_CAREFUL_MINT
# 63 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_22, ITEM_SASSY_MINT
# 64 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_23, ITEM_TIMID_MINT
# 65 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_24, ITEM_HASTY_MINT
# 66 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_25, ITEM_JOLLY_MINT
# 67 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_26, ITEM_NAIVE_MINT
# 68 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultipush ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_27, ITEM_SERIOUS_MINT
# 69 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	dynmultistack 0, 0, TRUE, 5, FALSE, 0, DYN_MULTICHOICE_CB_SHOW_ITEM
# 71 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_10
# 89 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_30, MSGBOX_AUTOCLOSE
ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_9:
# 92 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
End:
# 93 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	release
	return

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_2:
# 16 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_1, MSGBOX_AUTOCLOSE
# 17 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	goto Shop
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_1

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_6:
	checkmoney 1000
# 0 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_13
# 35 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_5
# 36 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	hidemoneybox
# 37 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	goto End
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_10:
# 72 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	giveitem VAR_RESULT
# 74 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	goto_if_set FLAG_MINTY_MEADOWS_FREE_MINT, ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_16
# 84 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	setflag FLAG_MINTY_MEADOWS_FREE_MINT
# 85 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_29, MSGBOX_AUTOCLOSE
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_9

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_13:
# 31 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	hidemoneybox
# 32 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	goto Shop
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_5

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_16:
# 75 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	showmoneybox 18, 0
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_28, MSGBOX_AUTOCLOSE
# 77 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	removemoney 1000
# 78 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	updatemoneybox
# 79 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	playse SE_SHOP
# 80 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	waitse
# 81 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	hidemoneybox
	goto ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_9


ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Mordecai::
# 97 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	playmoncry SPECIES_STARLY, CRY_MODE_NORMAL
# 98 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Mordecai_Text_0, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Rigby::
# 102 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 103 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Rigby_Text_0, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Benson::
# 107 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	playmoncry SPECIES_DRIFBLIM, CRY_MODE_NORMAL
# 109 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	msgbox ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Benson_Text_0, MSGBOX_NPC
	return


ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_0:
# 11 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Salutations! My name is Pops. Would you\n"
	.string "like to try one of our Meadow Mints?\p"
	.string "They can be used to change the nature\n"
	.string "of your Pokémon!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_1:
# 16 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Good show! Which scent would you like?\n"
	.string "The first one you get is free!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_2:
# 20 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Oh... bad show...$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_3:
# 25 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Welcome back, trainer! Here to try\n"
	.string "another of our fresh mints?$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_4:
# 27 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "For the price of ¥1000, I will happily\n"
	.string "sell you one of them!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_5:
# 35 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Oh dear... I'm afraid I can't give you a\n"
	.string "mint if you don't have enough money.$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_6:
# 47 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "I'll decide later!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_7:
# 48 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Lonely Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_8:
# 49 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Adamant Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_9:
# 50 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Naughty Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_10:
# 51 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Brave Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_11:
# 52 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Bold Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_12:
# 53 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Impish Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_13:
# 54 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Lax Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_14:
# 55 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Relaxed Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_15:
# 56 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Modest Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_16:
# 57 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Mild Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_17:
# 58 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Rash Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_18:
# 59 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Quiet Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_19:
# 60 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Calm Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_20:
# 61 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Gentle Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_21:
# 62 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Careful Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_22:
# 63 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Sassy Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_23:
# 64 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Timid Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_24:
# 65 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Hasty Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_25:
# 66 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Jolly Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_26:
# 67 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Naive Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_27:
# 68 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Serious Mint$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_28:
# 76 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Jolly good show! Thank you for your\n"
	.string "patronage!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_29:
# 85 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Jolly good show! I hope your Pokémon\n"
	.string "likes it!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Pops_Text_30:
# 89 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "Alright. Come back when you've made a\n"
	.string "decision!$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Mordecai_Text_0:
# 98 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "hueheuhuehuehue melk$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Rigby_Text_0:
# 103 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "hueheuhuehuehue cereal$"

ISLANDGAME_MINTY_MEADOWS_HOUSE_Interact_Benson_Text_0:
# 110 "data/maps/ISLANDGAME_MINTY_MEADOWS_HOUSE/scripts.pory"
	.string "MORDECAI AND RIGBY GO AND GET US SOME\n"
	.string "FRESH MINTS OR YOU'RE BOTH FIRED!!!\p"
	.string "Huh? Oh, sorry. I didn't mean to startle\n"
	.string "you.\p"
	.string "I'm Benson, the manager of Minty\n"
	.string "Meadows. Please enjoy your stay!$"
