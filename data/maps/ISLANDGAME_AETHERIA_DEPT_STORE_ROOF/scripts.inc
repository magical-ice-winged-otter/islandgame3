ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_MapScripts::
	.byte 0


ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Woman::
# 6 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	lock
# 7 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	faceplayer
# 8 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Woman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_SilverwingF::
# 20 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	lock
# 21 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	faceplayer
# 22 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_SilverwingF_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Chimecho::
# 29 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	lock
# 30 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	faceplayer
# 31 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	playmoncry SPECIES_CHIMECHO, CRY_MODE_NORMAL
# 32 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	waitmoncry
# 33 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	release
	return


ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Employee::
# 37 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	lock
# 38 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	faceplayer
# 39 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Employee_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Corpo::
# 48 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	lock
# 49 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	faceplayer
# 50 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Corpo_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper::
# 60 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	lock
# 61 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	faceplayer
# 63 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	checkitem ITEM_TM_BRICK_BREAK
# 64 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_2
ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_1:
# 72 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	checkitem ITEM_TM_CALM_MIND
# 73 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_5
ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_4:
# 81 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	showmoneybox 18, 0
# 82 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_Text_1, MSGBOX_YESNO
# 87 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_8
ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_7:
# 93 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	checkmoney 18000
# 94 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_11
ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_10:
# 100 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	removemoney 18000
# 101 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	updatemoneybox
# 102 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	playse SE_SHOP
# 103 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	waitse
# 104 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	giveitem ITEM_TM_BRICK_BREAK
# 105 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	giveitem ITEM_TM_CALM_MIND
# 107 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_Text_0, MSGBOX_AUTOCLOSE
# 111 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
Aetheria_ScalperEnd:
# 112 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	hidemoneybox
# 113 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_2:
# 65 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_Text_0, MSGBOX_AUTOCLOSE
# 69 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	goto Aetheria_ScalperEnd
	goto ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_1

ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_5:
# 74 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_Text_0, MSGBOX_AUTOCLOSE
# 78 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	goto Aetheria_ScalperEnd
	goto ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_4

ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_8:
# 88 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_Text_2, MSGBOX_AUTOCLOSE
# 91 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	goto Aetheria_ScalperEnd
	goto ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_7

ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_11:
# 95 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_Text_3
# 98 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	goto Aetheria_ScalperEnd
	goto ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_10


ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Woman_Text_0:
# 9 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	.string "A Pokémon's nature determines what\n"
	.string "flavor of food they like!\p"
	.string "Pokémon that are Modest, Timid, Calm, or\n"
	.string "Bold, dislike spicy flavors, like the\l"
	.string "taste of a Figy Berry.\p"
	.string "Pokémon that are Adamant, Jolly,\n"
	.string "Careful, or Impish dislike dry flavors,\l"
	.string "like the taste of a Wiki Berry.\p"
	.string "Pokémon that are Brave, Quiet, Sassy, or\n"
	.string "Relaxed dislike sweet flavors, like the\l"
	.string "taste of a Mago Berry.\p"
	.string "Pokémon that are Naughty, Rash, Naive,\n"
	.string "or Rash dislike bitter flavors, like the\l"
	.string "taste of a Aguav Berry.\p"
	.string "Pokémon that are Lonely, Mild, Gentle,\n"
	.string "or Hasty dislike sour flavors, like the\l"
	.string "taste of a Iapapa Berry.\p"
	.string "Pokémon that are Hardy, Bashful,\n"
	.string "Serious, Quirky, or Docile have no\l"
	.string "preferences!$"

ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_SilverwingF_Text_0:
# 23 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	.string "Always remember to keep your faith,\n"
	.string "especially in the face of adversity.\p"
	.string "Lose it, and you will have lost the\n"
	.string "battle before it even ends.$"

ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Employee_Text_0:
# 40 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	.string "Hoowee... That STARLIGHT merch drop was\n"
	.string "an absolute nightmare...\p"
	.string "The second I opened the door, chaos\n"
	.string "immediately ensued!\p"
	.string "We ended up turning more than half the\n"
	.string "customers away because we sold out so\l"
	.string "quickly...\p"
	.string "That's idol power and the fear of\n"
	.string "missing out for you.$"

ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Corpo_Text_0:
# 51 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	.string "Despite having worked at StrixCorp for\n"
	.string "a year, I've only ever seen Mr. Corvus\l"
	.string "once.\p"
	.string "It was late at night, the day I stayed\n"
	.string "overtime to finish some paperwork.\p"
	.string "When I was getting ready to leave, I saw\n"
	.string "Mr. Corvus entering the elevator.\p"
	.string "I thought it was kind of strange. What\n"
	.string "could be he doing at the headquarters\l"
	.string "an hour before midnight?\p"
	.string "Being a CEO must be real tough work.$"

ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_Text_0:
# 66 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	.string "Heh, good doing business with you.$"

ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_Text_1:
# 83 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	.string "Hey kid, I bet you're pretty bummed\n"
	.string "that all those shiny new TMs in the\l"
	.string "Trainer Zone got bought out...\p"
	.string "Luckily for you, I happened to pick up\n"
	.string "an extra copy of two of them!\p"
	.string "They're ¥10,000 each, but just for you,\n"
	.string "I'll do ¥18,000 for both, how 'bout that?$"

ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_Text_2:
# 89 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	.string "Hmph, your loss.$"

ISLANDGAME_AETHERIA_DEPT_STORE_ROOF_Scalper_Text_3:
# 96 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_ROOF/scripts.pory"
	.string "I can't do lower than that, kid. I'm a\n"
	.string "vendor. I gotta make a profit too.$"
