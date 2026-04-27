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


ISLANDGAME_AETHERIA_DEPT_STORE_2F_BallGuy::
# 46 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	lock
# 47 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	faceplayer
# 48 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_2F_BallGuy_Text_0
# 49 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	pokemart Aetheria_2F_PoeShack
# 50 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_2F_BallGuy_Text_1
# 51 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	closemessage
# 52 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	release
	return


	.align 2
# 55 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
Aetheria_2F_PoeShack:
# 56 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_POKE_BALL
# 57 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 58 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 59 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_QUICK_BALL
# 60 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_NET_BALL
# 61 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 62 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 63 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 64 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 65 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 66 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 67 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 68 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_LEVEL_BALL
# 69 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_FAST_BALL
# 70 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_LURE_BALL
# 71 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_HEAVY_BALL
# 72 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_LOVE_BALL
# 73 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_FRIEND_BALL
# 74 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_MOON_BALL
	.2byte ITEM_NONE

ISLANDGAME_AETHERIA_DEPT_STORE_2F_StrixMart::
# 78 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	lock
# 79 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	faceplayer
# 80 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_2F_StrixMart_Text_0
# 81 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	pokemart Aetheria_2F_StrixMart
# 82 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_2F_StrixMart_Text_1
# 83 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	closemessage
# 84 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	release
	return


	.align 2
# 87 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
Aetheria_2F_StrixMart:
# 88 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_POTION
# 89 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 90 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 91 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_ETHER
# 92 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_ISLANDGAME_LESSER_REVIVE
# 93 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 94 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 95 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 96 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_AWAKENING
# 97 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 98 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 99 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_REPEL
# 100 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 101 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

ISLANDGAME_AETHERIA_DEPT_STORE_2F_Pharmacy::
# 105 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	lock
# 106 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	faceplayer
# 107 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_2F_StrixMart_Text_0
# 108 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	pokemart Aetheria_2F_StrixMartPharmacy
# 109 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_2F_StrixMart_Text_1
# 110 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	closemessage
# 111 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	release
	return


	.align 2
# 114 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
Aetheria_2F_StrixMartPharmacy:
# 115 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_X_ATTACK
# 116 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_X_DEFEND
# 117 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 118 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_X_SP_DEF
# 119 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_X_SPEED
# 120 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 121 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 122 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 123 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_HP_UP
# 124 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_PROTEIN
# 125 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_IRON
# 126 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_CALCIUM
# 127 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_ZINC
# 128 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_CARBOS
# 129 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.2byte ITEM_PP_UP
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
	.string "Not too long ago, many of our\n"
	.string "pharmaceuticals had to be imported\l"
	.string "from the Hoenn region.\p"
	.string "Thanks to StrixCorp, medicine has\n"
	.string "become much more affordable!$"

ISLANDGAME_AETHERIA_DEPT_STORE_2F_Audino_Text_0:
# 36 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.string "{COLOR BLUE}(I wish these tourists would put things\n"
	.string "back where they belong.)$"

ISLANDGAME_AETHERIA_DEPT_STORE_2F_BallGuy_Text_0:
# 48 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.string "Lookin' for some balls? You've come to\n"
	.string "the right place!$"

ISLANDGAME_AETHERIA_DEPT_STORE_2F_BallGuy_Text_1:
# 50 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.string "Have a ballin' day brah!$"

ISLANDGAME_AETHERIA_DEPT_STORE_2F_StrixMart_Text_0:
# 80 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.string "Welcome to StrixMart! How may I help\n"
	.string "you?$"

ISLANDGAME_AETHERIA_DEPT_STORE_2F_StrixMart_Text_1:
# 82 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_2F/scripts.pory"
	.string "Have a great rest of your day!$"
