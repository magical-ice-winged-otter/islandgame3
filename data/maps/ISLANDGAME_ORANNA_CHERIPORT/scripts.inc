ISLANDGAME_ORANNA_CHERIPORT_MapScripts::
# 6 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ORANNA_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_ORANNA_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	gettime
# 9 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_ORANNA_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 9 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_ORANNA_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 13 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	setflag FLAG_TEMP_2
ISLANDGAME_ORANNA_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 16 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	goto_if_unset FLAG_ORANNA_SSRAIN_LEFT_SHIP, ISLANDGAME_ORANNA_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
ISLANDGAME_ORANNA_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 20 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	goto_if_set FLAG_ORANNA_CHERIPORT_GOT_EEVEE, ISLANDGAME_ORANNA_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_11
ISLANDGAME_ORANNA_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 23 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	goto_if_set FLAG_ORANNA_CHERIPORT_TOWN_MAP, ISLANDGAME_ORANNA_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_13
	return

ISLANDGAME_ORANNA_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 10 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	setflag FLAG_TEMP_3
	goto ISLANDGAME_ORANNA_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_ORANNA_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 17 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	setflag FLAG_ORANNA_SSRAIN_LEFT_SHIP
	goto ISLANDGAME_ORANNA_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_ORANNA_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_11:
# 21 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto ISLANDGAME_ORANNA_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_10

ISLANDGAME_ORANNA_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_13:
# 24 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	setvar VAR_TEMP_2, 1
	return


ISLANDGAME_ORANNA_CHERIPORT_NeedEevee::
# 32 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	goto_if_unset FLAG_ORANNA_CHERIPORT_GOT_EEVEE, ISLANDGAME_ORANNA_CHERIPORT_NeedEevee_1
	return

ISLANDGAME_ORANNA_CHERIPORT_NeedEevee_1:
# 33 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	lock
# 34 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_NeedEevee_Text_0
# 37 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	closemessage
# 38 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 39 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	waitmovement 0
# 40 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_NoLeaving::
# 45 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	lock
# 46 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_NoLeaving_Text_0
# 49 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	closemessage
# 50 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 51 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	waitmovement 0
# 52 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_MrBriney::
# 60 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	lock
# 61 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_MrBriney_Text_0
# 64 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	closemessage
# 65 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_Peeko::
# 69 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	lock
# 70 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	faceplayer
# 71 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 72 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	waitmoncry
# 73 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_NPC1::
# 78 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	lock
# 79 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	faceplayer
# 80 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_NPC1_Text_0
# 85 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_NPC2::
# 90 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	lock
# 91 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_NPC2_Text_0
# 94 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_NPC3::
# 99 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	lock
# 100 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_NPC3_Text_0
# 103 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_NPC4::
# 108 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	lock
# 109 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_NPC4_Text_0
# 112 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_NPC5::
# 117 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	lock
# 118 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_NPC5_Text_0
# 122 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_NPC6::
# 127 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	lock
# 128 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	faceplayer
# 129 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_NPC6_Text_0
# 133 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_NPC7::
# 138 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	lock
# 139 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_NPC7_Text_0
# 143 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	closemessage
# 144 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_NPC8::
# 150 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	lock
# 151 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_NPC8_Text_0
# 154 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	closemessage
# 155 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_Greeter::
# 162 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	lock
# 163 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	faceplayer
# 164 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	goto_if_unset FLAG_ORANNA_CHERIPORT_TOWN_MAP, ISLANDGAME_ORANNA_CHERIPORT_Greeter_2
# 172 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_Greeter_Text_1
ISLANDGAME_ORANNA_CHERIPORT_Greeter_1:
# 176 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	closemessage
# 177 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	setvar VAR_TEMP_2, 1
# 178 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	setflag FLAG_ORANNA_CHERIPORT_TOWN_MAP
# 179 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	release
	return

ISLANDGAME_ORANNA_CHERIPORT_Greeter_2:
# 165 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_Greeter_Text_0
# 169 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	giveitem ITEM_TOWN_MAP
	goto ISLANDGAME_ORANNA_CHERIPORT_Greeter_1


ISLANDGAME_ORANNA_CHERIPORT_GreeterTrigger::
# 184 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	lock
# 185 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	playse SE_PIN
# 186 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 187 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	waitmovement 0
# 188 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	delay 30
# 189 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 190 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_Greeter_Text_0
# 194 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 195 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	setvar VAR_TEMP_2, 1
# 196 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	setflag FLAG_ORANNA_CHERIPORT_TOWN_MAP
# 197 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	closemessage
# 198 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_EntranceSign::
# 209 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ORANNA_CHERIPORT_LabSign::
# 215 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LabSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ORANNA_CHERIPORT_SurfShopSign::
# 221 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_SurfShopSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ORANNA_CHERIPORT_WarningSign::
# 228 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_WarningSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_ORANNA_CHERIPORT_NeedEevee_Text_0:
# 35 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	.string "{COLOR RED}(I should go see Professor Palm before\n"
	.string "I leave.)$"

ISLANDGAME_ORANNA_CHERIPORT_NoLeaving_Text_0:
# 47 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	.string "{COLOR RED}(There's nothing past here but the vast\n"
	.string "ocean.)$"

ISLANDGAME_ORANNA_CHERIPORT_MrBriney_Text_0:
# 62 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	.string "This beach reminds you a lot of\n"
	.string "Slateport, doesn't it, Peeko?$"

ISLANDGAME_ORANNA_CHERIPORT_NPC1_Text_0:
# 81 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	.string "Thanks to the advent of Rotom\n"
	.string "technology, our phones have\l"
	.string "effectively become pocket-sized\l"
	.string "supercomputers with processing power\l"
	.string "rivaling that of even Metagross!\p"
	.string "To have gone from the PokéNav to the\n"
	.string "Rotom Phone in such a short period of\l"
	.string "time...\p"
	.string "Heh... the power of science is quite\n"
	.string "staggering, isn't it?$"

ISLANDGAME_ORANNA_CHERIPORT_NPC2_Text_0:
# 92 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	.string "Nuh-uh! Nuh-uh!$"

ISLANDGAME_ORANNA_CHERIPORT_NPC3_Text_0:
# 101 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	.string "Hey! I tagged you!$"

ISLANDGAME_ORANNA_CHERIPORT_NPC4_Text_0:
# 110 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	.string "Ugh... I can't see anything on my Game\n"
	.string "Boy because of the sun!$"

ISLANDGAME_ORANNA_CHERIPORT_NPC5_Text_0:
# 119 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	.string "Left! Right! Left! Right!\p"
	.string "Huh? I'm in the middle of my training!\n"
	.string "Shoo!$"

ISLANDGAME_ORANNA_CHERIPORT_NPC6_Text_0:
# 130 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	.string "Oranna is the smallest of the three\n"
	.string "principal islands in Marya.\p"
	.string "Nothing much really happens here, which\n"
	.string "makes it the perfect place to chill.$"

ISLANDGAME_ORANNA_CHERIPORT_NPC7_Text_0:
# 140 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	.string "Come on...{PAUSE 30} Come on...{PAUSE 30} Argh! Not another\n"
	.string "Magikarp!\p"
	.string "-sigh- All I want is a {COLOR LIGHT_BLUE}Squirtle{COLOR DARK_GRAY}. Is that\n"
	.string "too much to ask for!?$"

ISLANDGAME_ORANNA_CHERIPORT_NPC8_Text_0:
# 152 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	.string "-sigh-{PAUSE 30} If only you were still here with\n"
	.string "us...$"

ISLANDGAME_ORANNA_CHERIPORT_Greeter_Text_0:
# 166 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	.string "Welcome to the Maryan Isles, traveler.\p"
	.string "Please take this map. It will aid you in\n"
	.string "traversing the region.$"

ISLANDGAME_ORANNA_CHERIPORT_Greeter_Text_1:
# 173 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	.string "We, The Silverwing Order, pray you have\n"
	.string "a pleasant stay.$"

ISLANDGAME_ORANNA_CHERIPORT_EntranceSign_Text_0:
# 210 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	.string "WELCOME TO CHERIPORT$"

ISLANDGAME_ORANNA_CHERIPORT_LabSign_Text_0:
# 216 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	.string "PROFESSOR PALM'S LABORATORY$"

ISLANDGAME_ORANNA_CHERIPORT_SurfShopSign_Text_0:
# 222 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	.string "SEASIDE SERVICES\n"
	.string "Drinks on us!$"

ISLANDGAME_ORANNA_CHERIPORT_WarningSign_Text_0:
# 229 "data/maps/ISLANDGAME_ORANNA_CHERIPORT/scripts.pory"
	.string "! WARNING !\n"
	.string "NO LIFEGUARD! SWIM AT YOUR OWN RISK!$"
