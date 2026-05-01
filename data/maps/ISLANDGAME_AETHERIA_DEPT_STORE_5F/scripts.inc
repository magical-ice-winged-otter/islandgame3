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
	faceplayer
# 34 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Girlfriend_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid::
# 42 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 43 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	faceplayer
# 44 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	goto_if_set FLAG_AETHERIA_DEPT_STORE_KID_GIVE_DOLL, ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_2
# 51 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_Text_1
# 54 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	checkitem ITEM_POKE_DOLL
# 55 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_6
ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_1:
# 74 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
Aetheria_PokeKid_End:
# 75 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	closemessage
# 76 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_2:
# 45 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_Text_0
# 48 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	goto Aetheria_PokeKid_End
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_1

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_5:
# 56 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_Text_2, MSGBOX_YESNO
# 59 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_10
ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_9:
# 69 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	applymovement LOCALID_POKEKID, ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_Movement_0
# 70 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	waitmovement 0
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_1

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_6:
# 55 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	goto_if_unset FLAG_AETHERIA_DEPT_STORE_KID_GIVE_DOLL, ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_5
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_1

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_10:
# 60 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	removeitem ITEM_POKE_DOLL, 1
# 61 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_Text_3
# 65 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_FAIRY_GEM
# 66 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	setflag FLAG_AETHERIA_DEPT_STORE_KID_GIVE_DOLL
# 67 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	goto Aetheria_PokeKid_End
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_9


ISLANDGAME_AETHERIA_DEPT_STORE_5F_Maniac::
# 80 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 81 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Maniac_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_5F_Gardevoir::
# 88 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 89 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Gardevoir_Text_0
# 92 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	closemessage
# 93 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	playse SE_PIN
# 94 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	applymovement LOCALID_MANIAC, ISLANDGAME_AETHERIA_DEPT_STORE_5F_Gardevoir_Movement_0
# 95 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	waitmovement 0
# 96 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_Gardevoir_Text_1, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine::
# 103 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 104 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	showmoneybox 0, 0
# 105 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_Text_0, MSGBOX_YESNO
# 108 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_2
ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_1:
# 111 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	checkmoney 500
# 112 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_5
ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_4:
# 118 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	updatemoneybox
# 119 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	removemoney 500
# 120 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	playse SE_SHOP
# 121 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	waitse
# 122 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	delay 30
# 123 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	playse SE_ROULETTE_BALL
# 124 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	waitse
# 125 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	playse SE_TRUCK_DOOR
# 126 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	waitse
# 127 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	hidemoneybox
# 128 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	random 8
# 129 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	switch VAR_RESULT
# 130 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	case 1, ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_9
# 131 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	case 2, ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_10
# 132 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	case 3, ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_11
# 133 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	case 4, ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_12
# 134 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	case 5, ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_13
# 135 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	case 6, ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_14
# 136 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	case 7, ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_15
# 137 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_POKE_DOLL
ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_7:
# 140 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
Aetheria_GachaMachine_End:
# 141 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	hidemoneybox
# 142 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	closemessage
# 143 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_2:
# 109 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	goto Aetheria_GachaMachine_End
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_1

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_5:
# 113 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_Text_1
# 116 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	goto Aetheria_GachaMachine_End
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_4

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_9:
# 130 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_PRETTY_FEATHER
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_7

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_10:
# 131 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_HEALTH_FEATHER
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_7

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_11:
# 132 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_RESIST_FEATHER
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_7

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_12:
# 133 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_GENIUS_FEATHER
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_7

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_13:
# 134 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_CLEVER_FEATHER
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_7

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_14:
# 135 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_SWIFT_FEATHER
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_7

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_15:
# 136 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	giveitem ITEM_MUSCLE_FEATHER
	goto ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_7


ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop::
# 149 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 150 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	faceplayer
# 151 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop_Text_0
# 152 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	pokemart Aetheria_5F_EvoShop
# 153 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop_Text_1
# 154 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	closemessage
# 155 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	release
	return


	.align 2
# 158 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
Aetheria_5F_EvoShop:
# 159 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 160 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_WATER_STONE
# 161 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_THUNDER_STONE
# 162 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 163 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_MOON_STONE
# 164 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_SUN_STONE
# 165 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 166 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_DUSK_STONE
# 167 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_DAWN_STONE
# 168 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_ICE_STONE
	.2byte ITEM_NONE

ISLANDGAME_AETHERIA_DEPT_STORE_5F_MiscShop::
# 172 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 173 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	faceplayer
# 174 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop_Text_0
# 175 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	pokemart Aetheria_5F_MiscShop
# 176 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop_Text_1
# 177 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	closemessage
# 178 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	release
	return


	.align 2
# 181 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
Aetheria_5F_MiscShop:
# 182 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_LINKING_CORD
# 183 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_ROTOM_CATALOG
# 184 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_HEART_SCALE
# 185 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_CHIPPED_POT
# 186 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 187 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 188 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 189 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_BLUE_FLUTE
# 190 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_YELLOW_FLUTE
# 191 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_RED_FLUTE
# 192 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_BLACK_FLUTE
# 193 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_WHITE_FLUTE
	.2byte ITEM_NONE

ISLANDGAME_AETHERIA_DEPT_STORE_5F_HeldShop::
# 197 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	lock
# 198 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	faceplayer
# 199 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop_Text_0
# 200 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	pokemart Aetheria_5F_HeldShop
# 201 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop_Text_1
# 202 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	closemessage
# 203 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	release
	return


	.align 2
# 205 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
Aetheria_5F_HeldShop:
# 206 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_SILK_SCARF
# 207 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_BLACK_GLASSES
# 208 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_BLACK_BELT
# 209 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_FAIRY_FEATHER
# 210 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_NORMAL_GEM
# 211 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_FLYING_GEM
# 212 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_AIR_BALLOON
# 213 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_CLEAR_AMULET
# 214 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 215 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_RAZOR_CLAW
# 216 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 217 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_EVIOLITE
# 218 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.2byte ITEM_SMOKE_BALL
	.2byte ITEM_NONE

# 69 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_Movement_0:
# 69 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	face_original_direction
	step_end

# 94 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
ISLANDGAME_AETHERIA_DEPT_STORE_5F_Gardevoir_Movement_0:
# 94 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	emote_exclamation_mark
# 94 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	delay_16
# 94 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	delay_16
# 94 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	delay_16
# 94 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	delay_16
# 94 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	walk_in_place_fast_down
# 94 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	delay_16
# 94 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
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
	.string "or something?$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Girlfriend_Text_0:
# 35 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "It's me and my boyfriend's two-week\n"
	.string "anniversary today!\p"
	.string "I've been dropping him hints all week on\n"
	.string "what I want, hehe.\p"
	.string "Whichever stone he picks for me will\n"
	.string "determine whether our relationship will\l"
	.string "work out or not..$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_Text_0:
# 46 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "Clefairy! {PAUSE 30}Use Full Moon Rondo!$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_Text_1:
# 52 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "Waaaah! I've tried ten times, and I\n"
	.string "haven't gotten a single Clefairy doll!$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_Text_2:
# 57 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "{COLOR GREEN}> Give your Poké Doll to the kid?$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Pokekid_Text_3:
# 62 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "Hooray! Thank you, trainer!\p"
	.string "You can have this!$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Maniac_Text_0:
# 82 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "Ohoho... At long last, I've finally found\n"
	.string "you, my life-sized Mega Gardevoir doll!\p"
	.string "You will be a fine addition to my\n"
	.string "collection, alongside my Mega Lopunny!$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Gardevoir_Text_0:
# 90 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "{COLOR RED}(Wow. It looks just like the real deal!)$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_Gardevoir_Text_1:
# 97 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "Just what do you think you're doing!?\p"
	.string "Get your grubby hands away from my\n"
	.string "precious Gardevoir!\p"
	.string "She's worth more than you will ever\n"
	.string "amount to be!$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_Text_0:
# 106 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "{COLOR GREEN}> It's a capsule vending machine. Spend\n"
	.string "$500 to play?$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_GachaMachine_Text_1:
# 114 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "{COLOR GREEN}> You don't have enough money.$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop_Text_0:
# 151 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "Welcome to the gift shop! How may I help\n"
	.string "you?$"

ISLANDGAME_AETHERIA_DEPT_STORE_5F_EvoShop_Text_1:
# 153 "data/maps/ISLANDGAME_AETHERIA_DEPT_STORE_5F/scripts.pory"
	.string "Have a great rest of your day!$"
