ISLANDGAME_AETHERIA_DEPT_STORE_2F_MapScripts::
	.byte 0


ISLANDGAME_AETHERIA_DEPT_STORE_2F_Sailor::
# 6 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	lock
# 7 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_2F_Sailor_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_2F_Frogadier::
# 13 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	lock
# 14 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	faceplayer
# 15 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	playmoncry SPECIES_FROGADIER, CRY_MODE_NORMAL
# 16 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_2F_Frogadier_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_2F_Woman::
# 23 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	lock
# 24 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	faceplayer
# 25 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_2F_Woman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_2F_Audino::
# 32 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	lock
# 33 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	faceplayer
# 34 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	playmoncry SPECIES_AUDINO, CRY_MODE_NORMAL
# 35 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_2F_Audino_Text_0, MSGBOX_AUTOCLOSE
# 38 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	applymovement LOCALID_AUDINO, ISLANDGAME_AETHERIA_DEPT_STORE_2F_Audino_Movement_0
# 39 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	waitmovement 0
	return


ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_BallGuy::
# 44 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	lock
# 45 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	faceplayer
# 46 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_BallGuy_Text_0
# 47 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	pokemart Aetheria_2F_PoeShack
# 48 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_BallGuy_Text_1
# 49 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	closemessage
# 50 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	release
	return


	.align 2
# 53 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
Aetheria_2F_PoeShack:
# 54 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 55 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 56 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 57 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 58 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_NET_BALL
# 59 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 60 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 61 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 62 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 63 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 64 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 65 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 66 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 67 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_FAST_BALL
# 68 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_LURE_BALL
# 69 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 70 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 71 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 72 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_MOON_BALL
	.2byte ITEM_NONE

ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_StrixMart::
# 76 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	lock
# 77 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	faceplayer
# 78 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_StrixMart_Text_0
# 79 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	pokemart Aetheria_2F_StrixMart
# 80 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	msgbox ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_StrixMart_Text_1
# 81 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	closemessage
# 82 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	release
	return


	.align 2
# 85 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
Aetheria_2F_StrixMart:
# 86 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_POTION
# 87 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 88 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 89 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_ETHER
# 90 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_ISLANDGAME_LESSER_REVIVE
# 91 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 92 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 93 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 94 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_AWAKENING
# 95 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 96 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 97 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_REPEL
# 98 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 99 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

# 38 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
ISLANDGAME_AETHERIA_DEPT_STORE_2F_Audino_Movement_0:
# 38 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	face_original_direction
	step_end

ISLANDGAME_AETHERIA_DEPT_STORE_2F_Sailor_Text_0:
# 8 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.string "Grab as many repels as you can, Froggy!\n"
	.string "We're gonna find that mythical island!$"

ISLANDGAME_AETHERIA_DEPT_STORE_2F_Frogadier_Text_0:
# 17 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.string "{COLOR BLUE}(Trainer saw video of Mew sighting in\n"
	.string "Marya.)\p"
	.string "(Believe Mew could be in Maryan\n"
	.string "outskirts...)$"

ISLANDGAME_AETHERIA_DEPT_STORE_2F_Woman_Text_0:
# 26 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.string "Remember to keep your Pokémon in\n"
	.string "tip-top shape, especially in the heat\l"
	.string "of battle!\p"
	.string "Even just a bit of damage can determine\n"
	.string "whether your Pokémon faints or not!$"

ISLANDGAME_AETHERIA_DEPT_STORE_2F_Audino_Text_0:
# 36 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.string "{COLOR BLUE}(I wish these tourists would put things\n"
	.string "back where they belong.)$"

ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_BallGuy_Text_0:
# 46 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.string "Welcome to PoeShack! Lookin' for some\n"
	.string "balls? You've come to the right place!$"

ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_BallGuy_Text_1:
# 48 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.string "Have a ballin' rest of your day!$"

ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_StrixMart_Text_0:
# 78 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.string "Welcome to StrixMart! How may I help\n"
	.string "you?$"

ISLANDGAME_BELLEHAVEN_PKMNMART_Interact_StrixMart_Text_1:
# 80 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.string "Have a great rest of your day!$"
