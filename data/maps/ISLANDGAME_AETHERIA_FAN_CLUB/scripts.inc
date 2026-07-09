ISLANDGAME_AETHERIA_FAN_CLUB_MapScripts::
	.byte 0


ISLANDGAME_AETHERIA_FAN_CLUB_Owner::
# 6 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	lock
# 7 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	faceplayer
# 8 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	goto_if_set FLAG_AETHERIA_FAN_CLUB_TM, ISLANDGAME_AETHERIA_FAN_CLUB_Owner_1
# 14 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	goto_if_set FLAG_TEMP_1, ISLANDGAME_AETHERIA_FAN_CLUB_Owner_2
# 21 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_2
# 30 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	setflag FLAG_TEMP_1
# 34 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
Aetheria_FanClubSongSelection:
# 35 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_3
# 38 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_4, 0
# 39 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_5, 1
# 40 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_6, 2
# 41 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_7, 3
# 42 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_8, 4
# 43 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	dynmultistack 0, 0, TRUE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 44 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	switch VAR_RESULT
# 45 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	case 1, ISLANDGAME_AETHERIA_FAN_CLUB_Owner_7
# 57 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	case 2, ISLANDGAME_AETHERIA_FAN_CLUB_Owner_8
# 69 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	case 3, ISLANDGAME_AETHERIA_FAN_CLUB_Owner_9
# 81 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	case 4, ISLANDGAME_AETHERIA_FAN_CLUB_Owner_10
	return

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_1:
# 9 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_0
	return

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_2:
# 15 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_1
# 18 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	goto Aetheria_FanClubSongSelection
	return

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_7:
# 46 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_9, MSGBOX_YESNO
# 52 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_FAN_CLUB_Owner_12
ISLANDGAME_AETHERIA_FAN_CLUB_Owner_11:
# 55 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	giveitem ITEM_TM_ALLURING_VOICE
# 56 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	setflag FLAG_AETHERIA_FAN_CLUB_TM
	return

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_8:
# 58 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_10
# 64 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_FAN_CLUB_Owner_15
ISLANDGAME_AETHERIA_FAN_CLUB_Owner_14:
# 67 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	giveitem ITEM_TM_ALLURING_VOICE
# 68 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	setflag FLAG_AETHERIA_FAN_CLUB_TM
	return

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_9:
# 70 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_11
# 76 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_FAN_CLUB_Owner_18
ISLANDGAME_AETHERIA_FAN_CLUB_Owner_17:
# 79 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	giveitem ITEM_TM_PLAY_ROUGH
# 80 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	setflag FLAG_AETHERIA_FAN_CLUB_TM
	return

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_10:
# 82 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_12
# 88 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_FAN_CLUB_Owner_21
ISLANDGAME_AETHERIA_FAN_CLUB_Owner_20:
# 91 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	giveitem ITEM_TM_DAZZLING_GLEAM
# 92 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	setflag FLAG_AETHERIA_FAN_CLUB_TM
	return

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_12:
# 53 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	goto Aetheria_FanClubSongSelection
	goto ISLANDGAME_AETHERIA_FAN_CLUB_Owner_11

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_15:
# 65 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	goto Aetheria_FanClubSongSelection
	goto ISLANDGAME_AETHERIA_FAN_CLUB_Owner_14

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_18:
# 77 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	goto Aetheria_FanClubSongSelection
	goto ISLANDGAME_AETHERIA_FAN_CLUB_Owner_17

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_21:
# 89 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	goto Aetheria_FanClubSongSelection
	goto ISLANDGAME_AETHERIA_FAN_CLUB_Owner_20


ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_0:
# 10 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "STARLIGHT is premiering their first\n"
	.string "song as a group at the Silverwing\l"
	.string "Festival this year!\p"
	.string "Eeeeeee! I can't wait! {COLOR GREEN}>w<$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_1:
# 16 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "Haiyoooo! Have you made a decision yet?\n"
	.string ":O$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_2:
# 22 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "Haiyooo! Welcome to the official\n"
	.string "STARLIGHT Fan Club! {COLOR GREEN}=OuO=\p"
	.string "{COLOR DARK_GRAY}You look new around here. Who's your\n"
	.string "bias? I won't judge, hee-hee.\p"
	.string "...\p"
	.string "Whaaaaat? Say it ain't so! You've NEVER\n"
	.string "listened to any of their songs before?\p"
	.string "Well, I can't just sit by and watch as a\n"
	.string "poor soul spends another second\l"
	.string "without having listened to absolute\l"
	.string "peak!\p"
	.string "Luckily for you... I've got a copy of\n"
	.string "each of their songs!\p"
	.string "I'll let you have one of them, so choose\n"
	.string "wisely! :D$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_3:
# 36 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "{COLOR RED}(Which song should I choose?)$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_4:
# 38 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "I'm good$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_5:
# 39 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "“Alluring Voice”$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_6:
# 40 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "“Draining Kiss”$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_7:
# 41 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "“Play Rough”$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_8:
# 42 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "“Dazzling Gleam”$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_9:
# 47 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "Ooooh! Good choice! This is Camellia's\n"
	.string "signature song, and the first song\l"
	.string "produced under the STARLIGHT label!\p"
	.string "Camellia is the oldest member of\n"
	.string "STARLIGHT, and the one with most\l"
	.string "experience in the industry.\p"
	.string "Her voice is soooo angelic, and she\n"
	.string "radiates big sister energy!\p"
	.string "Is “Alluring Voice” the song you want?$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_10:
# 59 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "Ooooh! Good choice! This is Azalea's\n"
	.string "signature song, and a spicy one at\l"
	.string "that!\p"
	.string "Before joining STARLIGHT, Azalea was an\n"
	.string "acting prodigy, starring in a bunch of\l"
	.string "TV shows and movies!\p"
	.string "She even got flown out to Unova to\n"
	.string "cameo in a film at Pokéstar Studios!\p"
	.string "Is “Draining Kiss” the song you want?$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_11:
# 71 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "Ooooh! Good choice! This is Serafina's\n"
	.string "signature track! It really highlights\l"
	.string "her playful and bubbly nature!\p"
	.string "Before Serafina joined STARLIGHT, she\n"
	.string "was an influencer on PikPok!\p"
	.string "She still regularly hosts livestreams on\n"
	.string "her PokéTube channel, and has a\l"
	.string "subscriber count up there with the\l"
	.string "other streaming giants like Iono and\l"
	.string "Canari!\p"
	.string "Is “Play Rough” the song you want?$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_12:
# 83 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "Ooooh! Good choice! This is Primrose's\n"
	.string "signature track! She's got a really\l"
	.string "unique voice that sets her apart from\l"
	.string "the other three!\p"
	.string "Primrose is the newest member of\n"
	.string "STARLIGHT. She joined six months after\l"
	.string "the original three!\p"
	.string "A lot of her lore is still unknown to us,\n"
	.string "but that's exactly what makes her so\l"
	.string "interesting!\p"
	.string "Is “Dazzling Gleam” the song you want?$"
