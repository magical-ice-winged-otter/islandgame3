ISLANDGAME_TIDALCOVE_MapScripts::
# 6 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	compare VAR_ROSEVALE_STATE, 4
	goto_if_eq ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	gettime
# 13 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 13 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 17 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	setflag FLAG_TEMP_2
	return

ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	setflag FLAG_TEMP_1
	goto ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_TIDALCOVE_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 14 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_TIDALCOVE_Interact_EntranceSign::
# 23 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_EntranceSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_BehindGymSign::
# 27 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BehindGymSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_CyclingPathSign::
# 31 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_CyclingPathSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_BikeShopSign::
# 35 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BikeShopSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_GymSign::
# 39 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_GymSign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_GymSponsorBlocking::
# 43 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 44 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_GymSponsorBlocking_Text_0
# 45 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	closemessage
# 46 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_Interact_PrimFan1::
# 50 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 51 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_PrimFan1_Text_0
# 52 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	closemessage
# 53 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_Interact_PrimFan2::
# 57 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 58 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_PrimFan2_Text_0
# 59 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	closemessage
# 60 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_Interact_Bike::
# 64 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_Bike_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_TIDALCOVE_Interact_BeachLittleGirl::
# 68 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 69 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 70 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachLittleGirl_Text_0, MSGBOX_NPC
# 71 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	release
	return


ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard::
# 75 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 76 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 77 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard_Text_0, MSGBOX_NPC
# 82 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 83 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	waitmovement 0
	return


ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard_Floatzel::
# 87 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 88 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 89 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	playmoncry SPECIES_FLOATZEL, CRY_MODE_NORMAL
# 90 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	waitmoncry
# 91 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 92 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	waitmovement 0
	return


ISLANDGAME_TIDALCOVE_Interact_BeachDude::
# 96 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 97 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 98 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_0, MSGBOX_YESNO
# 102 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_TIDALCOVE_Interact_BeachDude_2
# 108 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_2
ISLANDGAME_TIDALCOVE_Interact_BeachDude_1:
# 110 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	closemessage
# 111 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 112 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	waitmovement 0
# 113 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	release
	return

ISLANDGAME_TIDALCOVE_Interact_BeachDude_2:
# 103 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_1
# 104 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_NORMAL
# 105 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	waitmoncry
	goto ISLANDGAME_TIDALCOVE_Interact_BeachDude_1


ISLANDGAME_TIDALCOVE_Interact_BeachFisher::
# 118 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 119 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 120 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachFisher_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_BeachGazer::
# 124 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 125 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 126 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BeachGazer_Text_0
# 127 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	closemessage
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearCycleRoad::
# 131 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 132 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 133 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearCycleRoad_Text_0, MSGBOX_NPC
# 139 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearEntrance::
# 143 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 144 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 145 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearEntrance_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearBikeShop::
# 152 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 153 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 154 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearBikeShop_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Middle::
# 161 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 162 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 163 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Middle_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Top::
# 169 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 170 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 171 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Top_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_BikeDude::
# 181 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 182 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 183 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_BikeDude_Text_0, MSGBOX_NPC
	return


ISLANDGAME_TIDALCOVE_Interact_Squirtle::
# 194 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	lock
# 195 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	faceplayer
# 196 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	playmoncry SPECIES_SQUIRTLE, CRY_MODE_NORMAL
# 198 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	goto_if_unset FLAG_TIDALCOVE_SQUIRTLE_GIFT, ISLANDGAME_TIDALCOVE_Interact_Squirtle_2
# 219 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_Squirtle_Text_2
ISLANDGAME_TIDALCOVE_Interact_Squirtle_1:
# 223 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
SquirtleGiftEvent_End:
# 224 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	waitmoncry
# 225 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	release
	return

ISLANDGAME_TIDALCOVE_Interact_Squirtle_2:
# 199 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_Squirtle_Text_0, MSGBOX_YESNO
# 205 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_TIDALCOVE_Interact_Squirtle_6
ISLANDGAME_TIDALCOVE_Interact_Squirtle_5:
# 209 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	checkitemspace ITEM_WATER_GEM
# 210 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_TIDALCOVE_Interact_Squirtle_9
ISLANDGAME_TIDALCOVE_Interact_Squirtle_8:
# 215 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	giveitem ITEM_WATER_GEM
# 216 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	setflag FLAG_TIDALCOVE_SQUIRTLE_GIFT
	goto ISLANDGAME_TIDALCOVE_Interact_Squirtle_1

ISLANDGAME_TIDALCOVE_Interact_Squirtle_6:
# 206 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	goto SquirtleGiftEvent_End
	goto ISLANDGAME_TIDALCOVE_Interact_Squirtle_5

ISLANDGAME_TIDALCOVE_Interact_Squirtle_9:
# 211 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	msgbox ISLANDGAME_TIDALCOVE_Interact_Squirtle_Text_1
# 212 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	goto SquirtleGiftEvent_End
	goto ISLANDGAME_TIDALCOVE_Interact_Squirtle_8


ISLANDGAME_TIDALCOVE_Interact_EntranceSign_Text_0:
# 23 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "TIDALCOVE\n"
	.string "Crack open a cold one on our beach!$"

ISLANDGAME_TIDALCOVE_Interact_BehindGymSign_Text_0:
# 27 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "LOSER LANDING\n"
	.string "git gud brah$"

ISLANDGAME_TIDALCOVE_Interact_CyclingPathSign_Text_0:
# 31 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "SEASIDE BIKE PATH\n"
	.string "Your most convenient way to Lumine!$"

ISLANDGAME_TIDALCOVE_Interact_BikeShopSign_Text_0:
# 35 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "RANDEEZ HOT WHEELZ\n"
	.string "“ZOOM ZOOM MOTHER TRUCKERS”$"

ISLANDGAME_TIDALCOVE_Interact_GymSign_Text_0:
# 39 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "TIDALCOVE GYM\n"
	.string "LEADER: RUKA\p"
	.string "Home of Tidalcove's Precious Pearl!$"

ISLANDGAME_TIDALCOVE_Interact_GymSponsorBlocking_Text_0:
# 44 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "I am sorry, but I cannot let anyone else\n"
	.string "inside the gym for the day.\p"
	.string "{COLOR RED}(Hmm. It seems like the gym has reached\n"
	.string "its limit of challengers for the day...)\p"
	.string "(I should see what else Oranna has to\n"
	.string "offer in the meantime.)$"

ISLANDGAME_TIDALCOVE_Interact_PrimFan1_Text_0:
# 51 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "Let us in, old geezer! As Prim's two\n"
	.string "biggest fans, we DEMAND entry!$"

ISLANDGAME_TIDALCOVE_Interact_PrimFan2_Text_0:
# 58 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "We need to be cheering our queen on the\n"
	.string "front lines! Move aside, loser!$"

ISLANDGAME_TIDALCOVE_Interact_Bike_Text_0:
# 64 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "{COLOR RED}(It's a bike. It's shiny and brand-new.\n"
	.string "The price tag is absurd, though.)$"

ISLANDGAME_TIDALCOVE_Interact_BeachLittleGirl_Text_0:
# 70 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "I like sand! It's soft, smooth, and fun\n"
	.string "to play with!$"

ISLANDGAME_TIDALCOVE_Interact_BeachLifeguard_Text_0:
# 78 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "We don't have a lifeguard tower yet, so\n"
	.string "I watch from up here instead.\p"
	.string "With the amount of tourists we get,\n"
	.string "beach safety is our priority!\p"
	.string "If someone is in trouble, me and my\n"
	.string "Floatzel will swim out to save them!$"

ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_0:
# 99 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "If I lose it all, slip and fall, will you\n"
	.string "laugh at me?$"

ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_1:
# 103 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "I will remember that.$"

ISLANDGAME_TIDALCOVE_Interact_BeachDude_Text_2:
# 108 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "If I lose it all, lose it all, lose it all...$"

ISLANDGAME_TIDALCOVE_Interact_BeachFisher_Text_0:
# 120 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "Hm... Your sense of fashion is severely\n"
	.string "lacking.$"

ISLANDGAME_TIDALCOVE_Interact_BeachGazer_Text_0:
# 126 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "Did you know Galarians can't say\n"
	.string "“bottle of water”?$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearCycleRoad_Text_0:
# 134 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "I'm training for the festival\n"
	.string "trialthalon!\p"
	.string "I got swimming down, just about got\n"
	.string "running down too, all that's left is...\p"
	.string "Cycling! But I wasn't able to snag a\n"
	.string "bike at the bike shop.\p"
	.string "I hope they get some in stock soon. I'm\n"
	.string "going to fall behind otherwise!$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearEntrance_Text_0:
# 146 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "{COLOR LIGHT_BLUE}Ruka's Milotic {COLOR DARK_GRAY}is so pretty. I wish I one\n"
	.string "too, but I heard they're notoriously\l"
	.string "hard to find.\p"
	.string "It's rumored that they only reside at\n"
	.string "the bottom of the Maryan Sea.$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_NearBikeShop_Text_0:
# 155 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "Ruka is an ice-type specialist. Just\n"
	.string "like that one gym leader from Sinnoh!\p"
	.string "Ummm.. what was her name again?$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Middle_Text_0:
# 164 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "Would be weird if I asked Ruka to sign\n"
	.string "my body pillow of her?$"

ISLANDGAME_TIDALCOVE_Interact_TownCitizen_Top_Text_0:
# 172 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "Ruka's presence has garnered a lot of\n"
	.string "foot traffic into Tidalcove.\p"
	.string "I think it's neat seeing so many\n"
	.string "tourists stop by just to see her.\p"
	.string "I can't help but feel a tad envious\n"
	.string "though... I wish I had all that\l"
	.string "attention.\p"
	.string "Oh, by the way, I'm Ruka's sister. I\n"
	.string "thought you should know that.\p"
	.string "Don't you want to ask me questions\n"
	.string "about her? Yes? No? Maybe?$"

ISLANDGAME_TIDALCOVE_Interact_BikeDude_Text_0:
# 184 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "Welcome to the Seaside Bike Path,\n"
	.string "trainer! Lumine Island is just up ahead.\p"
	.string "Remember to stay on your bike! Oh, and\n"
	.string "please watch where you're going.\p"
	.string "Trust me, the last thing you want is to\n"
	.string "take a dip in the Sharpedo-infested\l"
	.string "waters below.\p"
	.string "Haha, I'm just kidding! No but seriously,\n"
	.string "use your eyes.\p"
	.string "I already had to fish one knucklehead\n"
	.string "out of the waters earlier today...$"

ISLANDGAME_TIDALCOVE_Interact_Squirtle_Text_0:
# 201 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "{COLOR RED}(Huh? It looks like Squirtle is trying to\n"
	.string "give me something.)\p"
	.string "{COLOR RED}(Should I take it?)$"

ISLANDGAME_TIDALCOVE_Interact_Squirtle_Text_1:
# 211 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "{COLOR RED}(I don't have enough space to carry it.)$"

ISLANDGAME_TIDALCOVE_Interact_Squirtle_Text_2:
# 219 "data/maps/ISLANDGAME_TIDALCOVE/scripts.pory"
	.string "{COLOR DARK_GRAY}Squirtle!$"
