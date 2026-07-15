ISLANDGAME_AETHERIA_FAN_CLUB_MapScripts::
	.byte 0


ISLANDGAME_AETHERIA_FAN_CLUB_InspectJigglypuff::
# 6 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_InspectJigglypuff_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_FAN_CLUB_InspectClefairy::
# 12 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_InspectClefairy_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_FAN_CLUB_InspectMarill::
# 18 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_InspectMarill_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_FAN_CLUB_InspectSkitty::
# 24 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_InspectSkitty_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_AETHERIA_FAN_CLUB_Owner::
# 34 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	lock
# 35 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	faceplayer
# 36 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	goto_if_set FLAG_AETHERIA_FAN_CLUB_TM, ISLANDGAME_AETHERIA_FAN_CLUB_Owner_2
# 42 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	goto_if_set FLAG_TEMP_1, ISLANDGAME_AETHERIA_FAN_CLUB_Owner_3
# 49 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_2
# 58 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	setflag FLAG_TEMP_1
# 62 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
Aetheria_FanClubSongSelection:
# 63 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_3
# 66 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_4, 0
# 67 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_5, 1
# 68 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_6, 2
# 69 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_7, 3
# 70 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	dynmultipush ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_8, 4
# 71 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	dynmultistack 0, 0, TRUE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
# 72 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	switch VAR_RESULT
# 73 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	case 1, ISLANDGAME_AETHERIA_FAN_CLUB_Owner_8
# 85 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	case 2, ISLANDGAME_AETHERIA_FAN_CLUB_Owner_9
# 97 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	case 3, ISLANDGAME_AETHERIA_FAN_CLUB_Owner_10
# 109 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	case 4, ISLANDGAME_AETHERIA_FAN_CLUB_Owner_11
ISLANDGAME_AETHERIA_FAN_CLUB_Owner_1:
# 124 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	closemessage
# 125 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	release
	return

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_2:
# 37 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_0
	goto ISLANDGAME_AETHERIA_FAN_CLUB_Owner_1

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_3:
# 43 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_1
# 46 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	goto Aetheria_FanClubSongSelection
	goto ISLANDGAME_AETHERIA_FAN_CLUB_Owner_1

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_8:
# 74 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_9, MSGBOX_YESNO
# 80 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_FAN_CLUB_Owner_13
ISLANDGAME_AETHERIA_FAN_CLUB_Owner_12:
# 83 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	giveitem ITEM_TM_ALLURING_VOICE
# 84 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	setflag FLAG_AETHERIA_FAN_CLUB_TM
	goto ISLANDGAME_AETHERIA_FAN_CLUB_Owner_1

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_9:
# 86 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_10, MSGBOX_YESNO
# 92 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_FAN_CLUB_Owner_16
ISLANDGAME_AETHERIA_FAN_CLUB_Owner_15:
# 95 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	giveitem ITEM_TM_ALLURING_VOICE
# 96 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	setflag FLAG_AETHERIA_FAN_CLUB_TM
	goto ISLANDGAME_AETHERIA_FAN_CLUB_Owner_1

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_10:
# 98 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_11, MSGBOX_YESNO
# 104 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_FAN_CLUB_Owner_19
ISLANDGAME_AETHERIA_FAN_CLUB_Owner_18:
# 107 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	giveitem ITEM_TM_PLAY_ROUGH
# 108 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	setflag FLAG_AETHERIA_FAN_CLUB_TM
	goto ISLANDGAME_AETHERIA_FAN_CLUB_Owner_1

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_11:
# 110 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_12, MSGBOX_YESNO
# 116 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_AETHERIA_FAN_CLUB_Owner_22
ISLANDGAME_AETHERIA_FAN_CLUB_Owner_21:
# 119 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	giveitem ITEM_TM_DAZZLING_GLEAM
# 120 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	setflag FLAG_AETHERIA_FAN_CLUB_TM
	goto ISLANDGAME_AETHERIA_FAN_CLUB_Owner_1

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_13:
# 81 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	goto Aetheria_FanClubSongSelection
	goto ISLANDGAME_AETHERIA_FAN_CLUB_Owner_12

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_16:
# 93 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	goto Aetheria_FanClubSongSelection
	goto ISLANDGAME_AETHERIA_FAN_CLUB_Owner_15

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_19:
# 105 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	goto Aetheria_FanClubSongSelection
	goto ISLANDGAME_AETHERIA_FAN_CLUB_Owner_18

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_22:
# 117 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	goto Aetheria_FanClubSongSelection
	goto ISLANDGAME_AETHERIA_FAN_CLUB_Owner_21


ISLANDGAME_AETHERIA_FAN_CLUB_Jane::
# 132 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	lock
# 133 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	faceplayer
# 134 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Jane_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_FAN_CLUB_Jess::
# 143 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	lock
# 144 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	faceplayer
# 145 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Jess_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_FAN_CLUB_Schoolgirl::
# 152 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	lock
# 153 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	faceplayer
# 154 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Schoolgirl_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_FAN_CLUB_Schoolboy::
# 161 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	lock
# 162 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	faceplayer
# 163 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Schoolboy_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_FAN_CLUB_LittleGirl::
# 170 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	lock
# 171 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	faceplayer
# 172 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_LittleGirl_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_FAN_CLUB_Lass::
# 179 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	lock
# 180 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	faceplayer
# 181 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Lass_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_AETHERIA_FAN_CLUB_Waitress::
# 189 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	lock
# 190 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	faceplayer
# 191 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	applymovement LOCALID_FAN_CLUB_WAITRESS, ISLANDGAME_AETHERIA_FAN_CLUB_Waitress_Movement_0
# 192 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	waitmovement 0
# 193 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	msgbox ISLANDGAME_AETHERIA_FAN_CLUB_Waitress_Text_0, MSGBOX_AUTOCLOSE
	return


# 191 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
ISLANDGAME_AETHERIA_FAN_CLUB_Waitress_Movement_0:
# 191 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	delay_16
# 191 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	delay_16
# 191 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	jump_in_place_left
# 191 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	jump_in_place_up
# 191 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	jump_in_place_right
# 191 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	jump_in_place_down
# 191 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	jump_in_place_left
# 191 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	emote_heart
# 191 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	delay_16
# 191 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	delay_16
	step_end

ISLANDGAME_AETHERIA_FAN_CLUB_InspectJigglypuff_Text_0:
# 7 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "{COLOR RED}(It's a Jigglypuff doll. It appears to be\n"
	.string "the mascot for Camellia's fanbase.)$"

ISLANDGAME_AETHERIA_FAN_CLUB_InspectClefairy_Text_0:
# 13 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "{COLOR RED}(It's a Clefairy doll. It appears to be\n"
	.string "the mascot for Azalea's fanbase.)$"

ISLANDGAME_AETHERIA_FAN_CLUB_InspectMarill_Text_0:
# 19 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "{COLOR RED}(It's a Marill doll. It appears to be the\n"
	.string "mascot for Serafina's fanbase.)$"

ISLANDGAME_AETHERIA_FAN_CLUB_InspectSkitty_Text_0:
# 25 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "{COLOR RED}(It's a Skitty doll. It appears to be the\n"
	.string "mascot for Primrose's fanbase.)$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_0:
# 38 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "STARLIGHT is premiering their first\n"
	.string "song as a group at the Silverwing\l"
	.string "Festival this year!\p"
	.string "Eeeeeee! I can't wait! {COLOR GREEN}>w<$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_1:
# 44 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "Haiyoooo! Have you made a decision yet?\n"
	.string ":O$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_2:
# 50 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
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
# 64 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "{COLOR RED}(Which song should I choose?)$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_4:
# 66 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "I'm good$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_5:
# 67 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "“Alluring Voice”$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_6:
# 68 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "“Draining Kiss”$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_7:
# 69 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "“Play Rough”$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_8:
# 70 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "“Dazzling Gleam”$"

ISLANDGAME_AETHERIA_FAN_CLUB_Owner_Text_9:
# 75 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
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
# 87 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
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
# 99 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
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
# 111 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
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

ISLANDGAME_AETHERIA_FAN_CLUB_Jane_Text_0:
# 135 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "Lady Primrose is the greatest of all\n"
	.string "time!\p"
	.string "Not only does she have the voice of a\n"
	.string "goddess, she's never lost a SINGLE\l"
	.string "battle!\p"
	.string "Her song deserves to be the most\n"
	.string "viewed on the channel more than anyone\l"
	.string "else!\p"
	.string "Hashtag StreamDazzlingGleam!$"

ISLANDGAME_AETHERIA_FAN_CLUB_Jess_Text_0:
# 146 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "Her Majesty is gonna destroy the\n"
	.string "competition at the Silverwing Festival!\p"
	.string "And when she gets the trophy, we'll be\n"
	.string "standing right by her as her biggest\l"
	.string "fans!$"

ISLANDGAME_AETHERIA_FAN_CLUB_Schoolgirl_Text_0:
# 155 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "Those Primrose superfans have been\n"
	.string "seriously killing the vibe here.\p"
	.string "Can't we all just support our favorite\n"
	.string "idols in peace?$"

ISLANDGAME_AETHERIA_FAN_CLUB_Schoolboy_Text_0:
# 164 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "It's tough being the only boy here. The\n"
	.string "girls here are scary.\p"
	.string "Maybe if I hide in this corner and stay\n"
	.string "quiet, they won't approach me.$"

ISLANDGAME_AETHERIA_FAN_CLUB_LittleGirl_Text_0:
# 173 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "Haiyooo! When I grow up, I wanna be just\n"
	.string "like Cammie!$"

ISLANDGAME_AETHERIA_FAN_CLUB_Lass_Text_0:
# 182 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "I convinced my brother to give\n"
	.string "STARLIGHT a chance.\p"
	.string "He just recently quit his job just so he\n"
	.string "can have more time to tune into\l"
	.string "Serafina's streams.\p"
	.string "Mweh-heh-heh... Another successful\n"
	.string "conversion to the STARLIGHT side!$"

ISLANDGAME_AETHERIA_FAN_CLUB_Waitress_Text_0:
# 194 "data/maps/ISLANDGAME_AETHERIA_FAN_CLUB/scripts.pory"
	.string "One, two, three, four!\n"
	.string "Five, six, seven, eight!\p"
	.string "Phew... I'm practicing my dance\n"
	.string "choreography for my Café Lumi\l"
	.string "performance!$"
