ISLANDGAME_FRESA_FARMS_MapScripts::
# 2 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_MINTY_MEADOWS_STATE, 3
	goto_if_ne ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	gettimeofday
# 0 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
	return

ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setobjecthidden LOCALID_MAREEP_RESCUED
# 6 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setobjecthidden LOCALID_MAREEP_TOUGH
	goto ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 10 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setobjectxyperm LOCALID_MILTANK, 18, 6
# 11 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setobjectxyperm LOCALID_TORCHIC, 14, 9
# 12 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setobjectxyperm LOCALID_TEPIG, 16, 8
# 13 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setobjectmovementtype LOCALID_TORCHIC, MOVEMENT_TYPE_WANDER_AROUND
# 14 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setobjectmovementtype LOCALID_TEPIG, MOVEMENT_TYPE_WANDER_AROUND
# 15 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setobjectmovementradius LOCALID_TORCHIC, 1, 1
# 16 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setobjecthidden LOCALID_MILK_VENDOR
# 17 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setobjecthidden LOCALID_TEPIG_BOY
# 18 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setobjecthidden LOCALID_DUDE
# 19 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setobjecthidden LOCALID_FIDOUGH_GIRL
	return


ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl::
# 27 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto_if_set FLAG_FRESA_FARMS_TRADE_DONE, ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_2
	checkpartymon SPECIES_FIDOUGH
# 0 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_5
ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_4:
# 39 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_Text_1, MSGBOX_NPC
# 43 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	end
# 45 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
FidoughRequestTrade:
# 46 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 47 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 48 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playse SE_PIN
# 49 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	applymovement LOCALID_FIDOUGH_GIRL, ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_Movement_0
# 50 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitmovement
# 52 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_Text_2, MSGBOX_YESNO
# 57 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_8
# 69 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_Text_3, MSGBOX_AUTOCLOSE
ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_7:
# 72 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_2:
# 28 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_Text_0, MSGBOX_NPC
	end

ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_5:
# 36 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto FidoughRequestTrade
	goto ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_4

ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_8:
# 58 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	trade INGAME_TRADE_RIOLU
# 0 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	switch VAR_RESULT
# 59 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	case TRADE_CANCELED, ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_12
# 61 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	case TRADE_WRONG_SPECIES, ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_13
# 63 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	case TRADE_SUCCESS, ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_14
	goto ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_7

ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_12:
# 60 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_Text_3, MSGBOX_AUTOCLOSE
	goto ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_7

ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_13:
# 62 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_Text_4, MSGBOX_AUTOCLOSE
	goto ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_7

ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_14:
# 64 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_Text_5, MSGBOX_AUTOCLOSE
# 65 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setflag FLAG_FRESA_FARMS_TRADE_DONE
	goto ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_7


ISLANDGAME_FRESA_FARMS_Interact_MilkVendor::
# 76 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 77 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 78 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_MilkVendor_Text_0
# 79 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	showmoneybox 0, 0
# 80 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_MilkVendor_Text_1, MSGBOX_YESNO
# 82 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_FRESA_FARMS_Interact_MilkVendor_2
# 98 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	hidemoneybox
ISLANDGAME_FRESA_FARMS_Interact_MilkVendor_1:
# 101 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_Interact_MilkVendor_2:
	checkmoney 7000
# 0 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_FRESA_FARMS_Interact_MilkVendor_5
# 88 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	removemoney 7000
# 89 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	updatemoneybox
# 90 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playse SE_SHOP
# 91 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitse
# 92 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	hidemoneybox
# 93 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	giveitem ITEM_MOOMOO_MILK, 6
# 94 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_MilkVendor_Text_3, MSGBOX_AUTOCLOSE
	goto ISLANDGAME_FRESA_FARMS_Interact_MilkVendor_1

ISLANDGAME_FRESA_FARMS_Interact_MilkVendor_5:
# 84 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_MilkVendor_Text_2, MSGBOX_AUTOCLOSE
# 85 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	hidemoneybox
	goto ISLANDGAME_FRESA_FARMS_Interact_MilkVendor_1


ISLANDGAME_FRESA_FARMS_Interact_MareepRescued::
# 105 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 106 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 107 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 108 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto_if_unset FLAG_FRESA_FARMS_MAREEP_GIFT, MareepGiveGift
# 109 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_MareepRescued_Text_0, MSGBOX_AUTOCLOSE
# 110 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
# 112 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
MareepGiveGift:
# 113 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_MareepRescued_Text_1
	checkitemspace ITEM_ELECTRIC_GEM
# 0 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_FRESA_FARMS_Interact_MareepRescued_2
# 123 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_MareepRescued_Text_2
ISLANDGAME_FRESA_FARMS_Interact_MareepRescued_1:
# 126 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 127 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_Interact_MareepRescued_2:
# 119 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setflag FLAG_FRESA_FARMS_MAREEP_GIFT
# 120 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	giveitem ITEM_ELECTRIC_GEM
	goto ISLANDGAME_FRESA_FARMS_Interact_MareepRescued_1


ISLANDGAME_FRESA_FARMS_Interact_MareepDogWatching::
# 131 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 132 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
	gettimeofday
# 0 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq ISLANDGAME_FRESA_FARMS_Interact_MareepDogWatching_2
# 156 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_MareepDogWatching_Text_2, MSGBOX_AUTOCLOSE
ISLANDGAME_FRESA_FARMS_Interact_MareepDogWatching_1:
# 162 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_Interact_MareepDogWatching_2:
# 135 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_MareepDogWatching_Text_0, MSGBOX_AUTOCLOSE
# 141 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	applymovement LOCALID_MAREEP_DOGWATCHING, ISLANDGAME_FRESA_FARMS_Interact_MareepDogWatching_Movement_0
# 142 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playse SE_PIN
# 143 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	applymovement LOCALID_MAREEP_DOGWATCHING, ISLANDGAME_FRESA_FARMS_Interact_MareepDogWatching_Movement_1
# 144 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitmovement
# 146 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_MareepDogWatching_Text_1, MSGBOX_AUTOCLOSE
# 152 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	applymovement LOCALID_MAREEP_DOGWATCHING, ISLANDGAME_FRESA_FARMS_Interact_MareepDogWatching_Movement_2
# 153 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitmovement
	goto ISLANDGAME_FRESA_FARMS_Interact_MareepDogWatching_1


ISLANDGAME_FRESA_FARMS_Interact_MareepTough::
# 166 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 168 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_MareepTough_Text_0, MSGBOX_NPC
	return


ISLANDGAME_FRESA_FARMS_Interact_Tepig::
# 176 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
	gettimeofday
# 0 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_ne ISLANDGAME_FRESA_FARMS_Interact_Tepig_2
# 182 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 183 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_TEPIG, CRY_MODE_NORMAL
# 184 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitmoncry
ISLANDGAME_FRESA_FARMS_Interact_Tepig_1:
# 187 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_Interact_Tepig_2:
# 179 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_Tepig_Text_0, MSGBOX_AUTOCLOSE
	goto ISLANDGAME_FRESA_FARMS_Interact_Tepig_1


ISLANDGAME_FRESA_FARMS_Interact_Miltank::
	gettimeofday
# 0 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_0x8000, TIME_NIGHT
	goto_if_eq ISLANDGAME_FRESA_FARMS_Interact_Miltank_1
# 195 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 196 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
# 197 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_Miltank_Text_1, MSGBOX_NPC
	return

ISLANDGAME_FRESA_FARMS_Interact_Miltank_1:
# 192 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_Miltank_Text_0, MSGBOX_AUTOCLOSE
	return


ISLANDGAME_FRESA_FARMS_Interact_Chansey::
# 202 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 204 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_Chansey_Text_0, MSGBOX_NPC
	return


ISLANDGAME_FRESA_FARMS_Interact_Mareep::
# 211 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 212 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 213 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 214 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitmoncry
# 215 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_Interact_Torchic::
# 219 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 220 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 221 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_NORMAL
# 222 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitmoncry
# 223 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_Interact_Mudsdale::
# 227 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MUDSDALE, CRY_MODE_NORMAL
# 228 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_Mudsdale_Text_0, MSGBOX_NPC
	return


ISLANDGAME_FRESA_FARMS_Interact_TepigBoy::
# 232 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_TepigBoy_Text_0, MSGBOX_NPC
	return


ISLANDGAME_FRESA_FARMS_Interact_Dude::
# 240 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_Dude_Text_0, MSGBOX_NPC
	return


ISLANDGAME_FRESA_FARMS_Interact_Sign::
# 244 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Interact_Sign_Text_0, MSGBOX_SIGN
	return


# 49 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_Movement_0:
# 49 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	emote_exclamation_mark
# 49 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	delay_16
# 49 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	delay_16
	step_end

# 141 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
ISLANDGAME_FRESA_FARMS_Interact_MareepDogWatching_Movement_0:
# 141 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	face_player
	step_end

# 143 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
ISLANDGAME_FRESA_FARMS_Interact_MareepDogWatching_Movement_1:
# 143 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	emote_exclamation_mark
# 143 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	delay_16
# 143 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	delay_16
# 143 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	delay_16
# 143 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	delay_16
	step_end

# 152 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
ISLANDGAME_FRESA_FARMS_Interact_MareepDogWatching_Movement_2:
# 152 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	face_original_direction
	step_end

ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_Text_0:
# 29 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Fidough are a real gift from Arceus to\n"
	.string "us farmers! When they eventually grow\l"
	.string "up into Daschbuns, their sweet scent\l"
	.string "helps our wheat grow up real fast n'\l"
	.string "good!$"

ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_Text_1:
# 40 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Fidough are just the cutest li'l doggos\n"
	.string "in the whole wide world!\p"
	.string "I wish I had one of my own, but they're\n"
	.string "just so gosh-darn hard to find, and I'm\l"
	.string "always too busy with chores to go out\l"
	.string "and look fer one. Oh hum...$"

ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_Text_2:
# 53 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Ooooo! Is that an sweet widdle Fidough\n"
	.string "I see?\p"
	.string "Pleeeeeease trade me it! I got another\n"
	.string "adorable puppy to make it worth yer\l"
	.string "while!$"

ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_Text_3:
# 60 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Aw, shucks.$"

ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_Text_4:
# 62 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Eeeeh? That ain't no Fidough.$"

ISLANDGAME_FRESA_FARMS_Interact_FidoughGirl_Text_5:
# 64 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Eeeeee! 'Preciate your kindness,\n"
	.string "trainer! Hope ye like yer new pet as\l"
	.string "well. She may look small, but she's a real\l"
	.string "tough boxer!$"

ISLANDGAME_FRESA_FARMS_Interact_MilkVendor_Text_0:
# 78 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Our milk is sourced from the healthiest\n"
	.string "Miltank in all of Marya, Lady Moona!$"

ISLANDGAME_FRESA_FARMS_Interact_MilkVendor_Text_1:
# 80 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "We are selling it in packs of six for\n"
	.string "only ¥7000! Would you like a pack?{PAUSE 30}$"

ISLANDGAME_FRESA_FARMS_Interact_MilkVendor_Text_2:
# 84 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Oh dear, you don't have enough money,\n"
	.string "sweetie.$"

ISLANDGAME_FRESA_FARMS_Interact_MilkVendor_Text_3:
# 94 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Thank you for your patronage!$"

ISLANDGAME_FRESA_FARMS_Interact_MareepRescued_Text_0:
# 109 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Reep. {COLOR BLUE}(I found it wandering around\n"
	.string "today. Hope it helps you out!)$"

ISLANDGAME_FRESA_FARMS_Interact_MareepRescued_Text_1:
# 114 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Reep! {COLOR BLUE}(Hey there! Thanks for saving my\n"
	.string "butt from that scary Mightyena.)\p"
	.string "{COLOR DARK_GRAY}Reep. {COLOR BLUE}(Please take this as a gift.)$"

ISLANDGAME_FRESA_FARMS_Interact_MareepRescued_Text_2:
# 123 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Reep. {COLOR BLUE}(Oh, you don't have enough space\n"
	.string "for this.)$"

ISLANDGAME_FRESA_FARMS_Interact_MareepDogWatching_Text_0:
# 136 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Reeep. {COLOR BLUE}(Heh. That dumb dog's snoozing\n"
	.string "on his job again!)\p"
	.string "{COLOR DARK_GRAY}Reep reep. {COLOR BLUE}(Time to sneak out and have\n"
	.string "some fun with Chansey...)\p"
	.string "{COLOR DARK_GRAY}Reep? {COLOR BLUE}(Huh?)$"

ISLANDGAME_FRESA_FARMS_Interact_MareepDogWatching_Text_1:
# 147 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Reep... {COLOR BLUE}(Oh, it's just a random kid. Good\n"
	.string "thing they can't understand me.)\p"
	.string "{COLOR DARK_GRAY}Reep! {COLOR BLUE}(Go away! I've got big plans for\n"
	.string "tonight!)\p"
	.string "{COLOR DARK_GRAY}Reep. {COLOR BLUE}(Oh wait... They don't understand\n"
	.string "me.)$"

ISLANDGAME_FRESA_FARMS_Interact_MareepDogWatching_Text_2:
# 157 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Reep... {COLOR BLUE}(This mutt is a pain in my fluffy\n"
	.string "behind...)\p"
	.string "{COLOR DARK_GRAY}Reep. {COLOR BLUE}(I got important business to\n"
	.string "attend to at night!)$"

ISLANDGAME_FRESA_FARMS_Interact_MareepTough_Text_0:
# 169 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Reep. {COLOR BLUE}(I'm just saying man, if it was me\n"
	.string "against that Mightyena, hoo boy.)\p"
	.string "{COLOR DARK_GRAY}Reep! {COLOR BLUE}(I would'a messed that Mightyena\n"
	.string "up real good, ya feel me?)\p"
	.string "{COLOR DARK_GRAY}Reep? {COLOR BLUE}(Huh? Why are you looking me like\n"
	.string "that? I'm fo' realzies!)$"

ISLANDGAME_FRESA_FARMS_Interact_Tepig_Text_0:
# 179 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "{COLOR RED}(Tepig is busy chowing down a bowl of\n"
	.string "well-done berries.)$"

ISLANDGAME_FRESA_FARMS_Interact_Miltank_Text_0:
# 192 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "{COLOR RED}(Miltank is fast asleep.)$"

ISLANDGAME_FRESA_FARMS_Interact_Miltank_Text_1:
# 197 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Moo. {COLOR BLUE}(Moo.)$"

ISLANDGAME_FRESA_FARMS_Interact_Chansey_Text_0:
# 205 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Chansey. {COLOR BLUE}(Most humans can't understand\n"
	.string "us, but some are born with a special\l"
	.string "ability to comprehend what Pokémon are\l"
	.string "saying.)\p"
	.string "{COLOR DARK_GRAY}Chansey. {COLOR BLUE}(You're one of them,{PAUSE 30} aren't\n"
	.string "you?)$"

ISLANDGAME_FRESA_FARMS_Interact_Mudsdale_Text_0:
# 228 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Hee-haw! {COLOR BLUE}(Hee-ho!)$"

ISLANDGAME_FRESA_FARMS_Interact_TepigBoy_Text_0:
# 233 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "By breeding two Pokémon in the same\n"
	.string "family together, sometimes its child\l"
	.string "will inherit one of its parents' moves!\p"
	.string "These inherited moves are called egg\n"
	.string "moves, and most of them can't be\l"
	.string "learned any other way!\p"
	.string "My Tepig knows a “super powerful” move\n"
	.string "thanks to its mom! Isn't that awesome?$"

ISLANDGAME_FRESA_FARMS_Interact_Dude_Text_0:
# 240 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "I wonder what came first... the Pokémon,\n"
	.string "or the egg?$"

ISLANDGAME_FRESA_FARMS_Interact_Sign_Text_0:
# 245 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "FRESA FARMS\n"
	.string "Paulie and Marion$"
