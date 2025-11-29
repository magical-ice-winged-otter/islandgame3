ISLANDGAME_CHERIPORT_MapScripts::
# 6 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 8 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_unset FLAG_LEFT_SS_RAIN, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_set FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 15 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_set FLAG_RECEIVED_TOWN_MAP, ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 20 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	gettime
# 22 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 22 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_10
# 26 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 9 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_LEFT_SS_RAIN
	goto ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 13 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 16 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setvar VAR_TEMP_2, 1
	goto ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

ISLANDGAME_CHERIPORT_MapScripts_MAP_SCRIPT_ON_TRANSITION_10:
# 23 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Eevee_Warning::
# 32 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_unset FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Eevee_Warning_1
	return

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Eevee_Warning_1:
# 33 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 34 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox NeedPokemon_Text
# 35 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmessage
# 36 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
# 37 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkBack
# 38 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement 0
	return


# 47 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
WalkBack:
# 48 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	walk_left
# 49 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	step_end

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_LeaveIsles::
# 53 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 54 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_StayHere
# 55 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmessage
# 56 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
# 57 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, WalkBack2
# 58 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement 0
	return


# 66 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
WalkBack2:
# 67 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	walk_right
# 68 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	step_end

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_MrBriney::
# 82 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 83 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox MrBrineyTalk
# 84 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Girl3::
# 88 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 89 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 90 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox NPCGirl_Talk
# 91 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Boy4::
# 99 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 100 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 101 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox NPCBoy_Talk
# 102 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Peeko::
# 118 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 119 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 120 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 121 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement 3, Common_Movement_Heart
# 122 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmoncry
# 123 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC1::
# 127 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 128 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC1_TALK
# 129 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC2::
# 137 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 138 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC2_TALK
# 139 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC3::
# 147 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 148 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC3_TALK
# 149 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC4::
# 157 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 158 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC4_TALK
# 159 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC7::
# 168 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 169 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC7_TALK
# 170 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC8::
# 181 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 182 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 183 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC8_TALK
# 184 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_NPC9::
# 195 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 196 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_NPC9_TALK
# 197 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter::
# 208 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 209 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	faceplayer
# 210 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TOWN_MAP, ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_2
# 218 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_1
ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_1:
# 222 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	closemessage
# 223 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setvar VAR_TEMP_2, 1
# 224 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_RECEIVED_TOWN_MAP
# 225 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_2:
# 211 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_0
# 215 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	giveitem ITEM_TOWN_MAP
	goto ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_1


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter2::
# 229 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 230 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	playse SE_PIN
# 231 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement 8, Common_Movement_ExclamationMark
# 232 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement 0
# 233 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement 8, Common_Movement_Delay32
# 234 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	waitmovement 0
# 235 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 236 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_0
# 240 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 241 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setvar VAR_TEMP_2, 1
# 242 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	setflag FLAG_RECEIVED_TOWN_MAP
# 243 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	closemessage
# 244 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN1::
# 256 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 257 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN1_DESC
# 258 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN2::
# 269 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 270 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN2_DESC
# 271 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN3::
# 281 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 282 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN3_DESC
# 283 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_SIGN4::
# 294 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	lock
# 295 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	msgbox ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN4_DESC
# 296 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_0:
# 212 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Welcome to the Maryan Isles, traveler.\p"
	.string "Please take this map. It will aid you in\n"
	.string "traversing the region.$"

ISLANDGAME_CHERIPORT_OUTSIDE_EventScript_Greeter_Text_1:
# 219 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "We, The Silverwing Order, pray you have\n"
	.string "a pleasant stay.$"

NeedPokemon_Text::
# 43 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR RED}(I should go see Professor Palm before\n"
	.string "I leave.)$"

ISLANDGAME_CHERIPORT_OUTSIDE_StayHere::
# 62 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR RED}(There's nothing past here but the vast\n"
	.string "ocean.)$"

NPCGirl_Talk::
# 94 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}The islands are known for their tropical\n"
	.string "weather, though at times there have\l"
	.string "been bad storms that have even scared\l"
	.string "POKéMON.$"

NPCBoy_Talk::
# 105 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
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

MrBrineyTalk::
# 113 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}This beach reminds you a lot of\n"
	.string "Slateport, doesn't it, Peeko?$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC1_TALK::
# 132 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Nuh-uh! Nuh-uh!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC2_TALK::
# 142 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Hey! I tagged you!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC3_TALK::
# 152 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Ugh... I can't see anything on my Game\n"
	.string "Boy because of the sun!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC4_TALK::
# 162 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}Left! Right! Left! Right! Huh? I'm in the\n"
	.string "middle of my training! Shoo!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC7_TALK::
# 173 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Come on...{PAUSE 30} Come on...{PAUSE 30} Argh! Not another\n"
	.string "Magikarp!\p"
	.string "All I want is a {COLOR LIGHT_BLUE}Squirtle{COLOR DARK_GRAY}. Is that too\n"
	.string "much to ask for!?$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC8_TALK::
# 187 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "Oranna is the smallest of the three\n"
	.string "principal islands in Marya.\p"
	.string "Nothing much really happens here, which\n"
	.string "makes it the perfect place to chill.$"

ISLAND_GAME_CHERIPORT_OUTSIDE_NPC9_TALK::
# 200 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}-sigh-{PAUSE 30} If only you were still here with\n"
	.string "us...$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN1_DESC::
# 261 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}WELCOME TO CHERIPORT\n"
	.string "{COLOR DARK_GRAY}Take a rest on our soft and sandy\l"
	.string "beach!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN2_DESC::
# 274 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}PROFESSOR PALM'S LABORATORY$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN3_DESC::
# 286 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}SEASIDE SERVICES\n"
	.string "{COLOR DARK_GRAY}Drinks on us!$"

ISLAND_GAME_CHERIPORT_OUTSIDE_SIGN4_DESC::
# 299 "data/maps/ISLANDGAME_CHERIPORT/scripts.pory"
	.string "{COLOR DARK_GRAY}! WARNING !\n"
	.string "{COLOR DARK_GRAY}NO LIFEGUARD! SWIM AT YOUR OWN RISK!$"
