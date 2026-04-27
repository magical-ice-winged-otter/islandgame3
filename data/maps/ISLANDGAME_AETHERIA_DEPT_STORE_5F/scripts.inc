ISLANDGAME_AETHERIA_DEPT_STORE_5F_MapScripts::
	.byte 0


ISLANDGAME_AETHERIA_DEPT_STORE_5F_Schoolgirl::
# 5 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 6 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	faceplayer
# 7 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Schoolgirl_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_5F_Woman::
# 15 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 16 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	faceplayer
# 17 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Woman_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_5F_Boyfriend::
# 24 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 25 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Boyfriend_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_5F_Girlfriend::
# 32 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 33 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Girlfriend_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid::
# 41 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 42 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	faceplayer
# 43 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_Text_0
# 46 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	checkitem ITEM_POKE_DOLL
# 47 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_3
ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_1:
# 61 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	closemessage
# 62 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_2:
# 48 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_Text_1, MSGBOX_YESNO
# 51 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_6
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_1

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_3:
# 47 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	goto_if_unset FLAG_AETHERIA_DEPT_STORE_KID_GIVE_DOLL, ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_2
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_1

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_6:
# 52 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	removeitem ITEM_POKE_DOLL, 1
# 53 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_Text_2
# 57 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_FAIRY_GEM
# 58 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	setflag FLAG_AETHERIA_DEPT_STORE_KID_GIVE_DOLL
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_1


ISLANDGAME_AETHERIA_DEPT_STORE_5F_Maniac::
# 66 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 67 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Maniac_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_5F_Gardevoir::
# 74 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 75 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Gardevoir_Text_0
# 78 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	closemessage
# 79 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	applymovement LOCALID_MANIAC, ISLANDGAME_AETHERIA_DEPT_STORE_5F_Gardevoir_Movement_0
# 80 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	waitmovement 0
# 81 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Gardevoir_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine::
# 88 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 89 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	showmoneybox 0, 0
# 90 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_Text_0, MSGBOX_YESNO
# 93 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_2
ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_1:
# 96 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	checkmoney 500
# 97 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_5
ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_4:
# 103 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	updatemoneybox
# 104 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	removemoney 500
# 105 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	playse SE_SHOP
# 106 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	waitse
# 107 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	delay 30
# 108 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	playse SE_ROULETTE_BALL
# 109 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	waitse
# 110 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	playse SE_TRUCK_DOOR
# 111 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	waitse
# 112 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	hidemoneybox
# 113 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	random 8
# 114 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	switch VAR_RESULT
# 115 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	case 1, ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_9
# 116 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	case 2, ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_10
# 117 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	case 3, ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_11
# 118 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	case 4, ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_12
# 119 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	case 5, ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_13
# 120 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	case 6, ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_14
# 121 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	case 7, ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_15
# 122 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_POKE_DOLL
ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_7:
# 125 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
Aetheria_GachaMachine_End:
# 126 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	closemessage
# 127 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_2:
# 94 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	goto Aetheria_GachaMachine_End
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_1

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_5:
# 98 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_Text_1
# 101 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	goto Aetheria_GachaMachine_End
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_4

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_9:
# 115 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_PRETTY_FEATHER
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_7

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_10:
# 116 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_HEALTH_FEATHER
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_7

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_11:
# 117 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_RESIST_FEATHER
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_7

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_12:
# 118 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_GENIUS_FEATHER
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_7

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_13:
# 119 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_CLEVER_FEATHER
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_7

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_14:
# 120 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_SWIFT_FEATHER
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_7

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_15:
# 121 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_MUSCLE_FEATHER
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_7


ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop::
# 133 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 134 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	faceplayer
# 135 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop_Text_0
# 136 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	pokemart Aetheria_5F_EvoShop
# 137 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop_Text_1
# 138 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	closemessage
# 139 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	release
	return


	.align 2
# 142 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
Aetheria_5F_EvoShop:
# 143 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 144 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 145 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_WATER_STONE
# 146 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 147 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 148 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_MOON_STONE
# 149 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_SUN_STONE
# 150 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 151 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 152 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 153 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_ICE_STONE
# 154 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_EVIOLITE
	.2byte ITEM_NONE

ISLANDGAME_AETHERIA_DEPT_STORE_5F_MiscShop::
# 158 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 159 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	faceplayer
# 160 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop_Text_0
# 161 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	pokemart Aetheria_5F_MiscShop
# 162 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop_Text_1
# 163 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	closemessage
# 164 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	release
	return


	.align 2
# 167 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
Aetheria_5F_MiscShop:
# 168 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_ROTOM_CATALOG
# 169 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_HEART_SCALE
# 170 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 171 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 172 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 173 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 174 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_BLUE_FLUTE
# 175 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_YELLOW_FLUTE
# 176 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_RED_FLUTE
# 177 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_BLACK_FLUTE
# 178 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_WHITE_FLUTE
	.2byte ITEM_NONE

ISLANDGAME_AETHERIA_DEPT_STORE_5F_HeldShop::
# 182 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 183 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	faceplayer
# 184 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop_Text_0
# 185 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	pokemart Aetheria_5F_HeldShop
# 186 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop_Text_1
# 187 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	closemessage
# 188 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	release
	return


	.align 2
# 190 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
Aetheria_5F_HeldShop:
# 191 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 192 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 193 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 194 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
# 195 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_NORMAL_GEM
# 196 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_FLYING_GEM
# 197 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 198 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
# 199 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 200 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 201 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 202 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_SMOKE_BALL
	.2byte ITEM_NONE

# 79 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
ISLANDGAME_AETHERIA_DEPT_STORE_5F_Gardevoir_Movement_0:
# 79 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	emote_exclamation_mark
# 79 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	delay_16
# 79 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	delay_16
# 79 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	delay_16
# 79 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	delay_16
# 79 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	walk_in_place_fast_down
# 79 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	delay_16
# 79 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	delay_16
	step_end

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Schoolgirl_Text_0:
# 8 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "Mnnnnnghh! I can't believe all of the\n"
	.string "colorful gems are gone!\p"
	.string "All that's left are the plain looking\n"
	.string "ones...\p"
	.string "Now I'll have to wait until the festival\n"
	.string "to get them!$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Woman_Text_0:
# 18 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "These colorful flutes were crafted by a\n"
	.string "legendary glassblower known as The\l"
	.string "Windmaker!\p"
	.string "He lives atop Mt. Ignis in Minerva\n"
	.string "Island in solitude, but if you bring him\l"
	.string "the materials, he'll happily make you\l"
	.string "your own flute!$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Boyfriend_Text_0:
# 26 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "Which one did she want again? Was it a\n"
	.string "Vaporeon? Or maybe an Umbreon?\p"
	.string "Or was it a Sylveon? Arrggh... why\n"
	.string "couldn't she have just raised a Skitty\l"
	.string "or something?\p"
	.string "$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Girlfriend_Text_0:
# 34 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "It's me and my boyfriend's two-week\n"
	.string "anniversary today!\p"
	.string "I've been dropping him hints all week on\n"
	.string "what I want, hehe.\p"
	.string "Whichever stone he picks for me will\n"
	.string "determine whether our relationship will\l"
	.string "work out or not..$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_Text_0:
# 44 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "Waaaah! I've tried ten times, and I\n"
	.string "haven't gotten a single Clefairy doll!\p"
	.string "$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_Text_1:
# 49 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "{COLOR GREEN}> Give your Poké Doll to the kid?$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_Text_2:
# 54 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "Hooray! Thank you, trainer!\p"
	.string "You can have this!$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Maniac_Text_0:
# 68 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "Ohoho... At long last, I've finally found\n"
	.string "you, my life-sized Mega Gardevoir doll!\p"
	.string "You will be a fine addition to my\n"
	.string "collection, alongside my Mega Lopunny!$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Gardevoir_Text_0:
# 76 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "{COLOR RED}(Wow. It looks just like the real deal!)$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Gardevoir_Text_1:
# 82 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "Just what do you think you're doing!?\n"
	.string "Get your grubby hands away from my\l"
	.string "precious Gardevoir! She's worth more\l"
	.string "than you will ever amount to be!$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_Text_0:
# 91 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "{COLOR GREEN}> It's a capsule vending machine. Spend\n"
	.string "$500 to play?$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_Text_1:
# 99 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "{COLOR GREEN}> You don't have enough money.$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop_Text_0:
# 135 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "Welcome to the gift shop! How may I help\n"
	.string "you?$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop_Text_1:
# 137 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "Have a great rest of your day!$"
