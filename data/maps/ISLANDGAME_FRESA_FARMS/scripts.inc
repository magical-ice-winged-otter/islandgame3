ISLANDGAME_FRESA_FARMS_MapScripts::
# 9 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 28 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setflag FLAG_TEMP_A
# 29 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setflag FLAG_TEMP_B
# 30 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	gettime
# 32 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_0x8000, 6
	goto_if_lt ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 32 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_0x8000, 18
	goto_if_ge ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
# 37 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setflag FLAG_TEMP_2
ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 40 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
	return

ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 33 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setflag FLAG_TEMP_1
# 34 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setobjectxyperm 6, 18, 6
	goto ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

ISLANDGAME_FRESA_FARMS_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 41 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setflag FLAG_TEMP_3
	return


ISLANDGAME_FRESA_FARMS_Daycare_Mon1::
# 49 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 50 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Daycare_Mon1_Text, MSGBOX_NPC
# 51 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_Daycare_Mon2::
# 59 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 60 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Daycare_Mon2_Text, MSGBOX_NPC
# 61 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_Sign::
# 106 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Sign_Text_0, MSGBOX_SIGN
	return


ISLANDGAME_FRESA_FARMS_Miltank_Interact::
# 117 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto_if_set FLAG_TEMP_1, ISLANDGAME_FRESA_FARMS_Miltank_Interact_2
# 122 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 123 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 124 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MILTANK, CRY_MODE_NORMAL
# 125 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Miltank_Interact_Text_1
ISLANDGAME_FRESA_FARMS_Miltank_Interact_1:
# 127 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 128 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_Miltank_Interact_2:
# 118 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 119 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Miltank_Interact_Text_0
	goto ISLANDGAME_FRESA_FARMS_Miltank_Interact_1


ISLANDGAME_FRESA_FARMS_Chansey_Interact::
# 132 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 133 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 134 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_CHANSEY, CRY_MODE_NORMAL
# 135 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Chansey_Interact_Text_0
# 136 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_Mareep1::
# 140 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 141 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 142 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto_if_set FLAG_TEMP_1, ISLANDGAME_FRESA_FARMS_Mareep1_2
# 155 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Mareep1_Text_2
ISLANDGAME_FRESA_FARMS_Mareep1_1:
# 158 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_Mareep1_2:
# 143 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Mareep1_Text_0
# 144 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 145 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	applymovement 2, Common_Movement_FacePlayer
# 146 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playse SE_PIN
# 147 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 148 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitmovement 0
# 149 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	delay 60
# 150 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Mareep1_Text_1
# 151 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 152 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitmovement 0
	goto ISLANDGAME_FRESA_FARMS_Mareep1_1


ISLANDGAME_FRESA_FARMS_Mareep2::
# 162 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 163 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 164 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 165 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Mareep2_Text_0
# 166 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 167 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_Mareep3::
# 171 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 172 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 173 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 174 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto_if_unset FLAG_FRESA_FARMS_MAREEP_GIFT, ISLANDGAME_FRESA_FARMS_Mareep3_2
# 186 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Mareep3_Text_2
ISLANDGAME_FRESA_FARMS_Mareep3_1:
# 189 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_Mareep3_2:
# 175 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Mareep3_Text_0
# 176 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	checkitemspace ITEM_ELECTRIC_GEM
# 177 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_FRESA_FARMS_Mareep3_5
# 181 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setflag FLAG_FRESA_FARMS_MAREEP_GIFT
# 182 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	giveitem ITEM_ELECTRIC_GEM
	goto ISLANDGAME_FRESA_FARMS_Mareep3_1

ISLANDGAME_FRESA_FARMS_Mareep3_5:
# 178 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Mareep3_Text_1
	goto ISLANDGAME_FRESA_FARMS_Mareep3_1


ISLANDGAME_FRESA_FARMS_Mareep4::
# 193 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 194 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 195 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MAREEP, CRY_MODE_NORMAL
# 196 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitmoncry
# 197 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 198 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor::
# 202 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 203 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 204 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_0
# 207 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	showmoneybox 0, 0
# 208 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_1, MSGBOX_YESNO
# 211 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_2
ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_1:
# 232 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
MilkVendor_End:
# 233 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	hidemoneybox
# 234 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 235 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_2:
# 212 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	checkmoney 7000
# 213 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_4
# 220 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	removemoney 7000
# 221 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playse SE_SHOP
# 222 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitse
# 223 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	updatemoneybox
# 224 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	hidemoneybox
# 225 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	giveitem ITEM_MOOMOO_MILK, 6
# 226 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_3
	goto ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_1

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_4:
# 214 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_2
# 217 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto MilkVendor_End
	goto ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_1


ISLANDGAME_FRESA_FARMS_Torchic::
# 239 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 240 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 241 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_NORMAL
# 242 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitmoncry
# 243 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 244 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_Tepig::
# 248 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 249 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto_if_set FLAG_TEMP_2, ISLANDGAME_FRESA_FARMS_Tepig_2
# 255 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 256 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_TEPIG, CRY_MODE_NORMAL
# 257 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitmoncry
ISLANDGAME_FRESA_FARMS_Tepig_1:
# 259 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 260 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_Tepig_2:
# 250 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Tepig_Text_0
	goto ISLANDGAME_FRESA_FARMS_Tepig_1


ISLANDGAME_FRESA_FARMS_Mudsdale::
# 264 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 265 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 266 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playmoncry SPECIES_MUDSDALE, CRY_MODE_NORMAL
# 267 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Mudsdale_Text_0
# 270 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 271 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_Dude::
# 275 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 276 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 277 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Dude_Text_0
# 280 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 281 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_Boy::
# 285 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lock
# 286 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 287 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Boy_Text_0
# 292 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 293 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return


ISLANDGAME_FRESA_FARMS_Girl::
# 298 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	lockall
# 299 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	faceplayer
# 300 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto_if_set FLAG_FRESA_FARMS_TRADE_DONE, ISLANDGAME_FRESA_FARMS_Girl_2
ISLANDGAME_FRESA_FARMS_Girl_1:
# 306 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto_if_set FLAG_TEMP_5, ISLANDGAME_FRESA_FARMS_Girl_5
ISLANDGAME_FRESA_FARMS_Girl_4:
# 318 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Girl_Text_2
# 322 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 324 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setvar VAR_0x8000, SPECIES_FIDOUGH
# 325 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	callnative CheckPartyMon
# 326 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_FRESA_FARMS_Girl_8
ISLANDGAME_FRESA_FARMS_Girl_7:
# 344 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto FresaFarms_TradeEnd
# 347 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
FresaFarms_TradeInitiate:
# 348 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_RIOLU
# 349 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 350 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 351 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 352 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	special ChoosePartyMon
# 353 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitstate
# 354 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 355 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_0x8004, PARTY_NOTHING_CHOSEN
	goto_if_eq ISLANDGAME_FRESA_FARMS_Girl_14
ISLANDGAME_FRESA_FARMS_Girl_13:
# 358 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 359 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 360 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 361 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne ISLANDGAME_FRESA_FARMS_Girl_20
ISLANDGAME_FRESA_FARMS_Girl_19:
# 367 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 368 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 369 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	special CreateInGameTradePokemon
# 370 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	special DoInGameTradeScene
# 371 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitstate
# 372 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 373 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Girl_Text_5
# 376 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setflag FLAG_FRESA_FARMS_TRADE_DONE
# 377 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto FresaFarms_TradeEnd
# 379 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
FresaFarms_TradeDecline:
# 380 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Girl_Text_6
# 383 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
FresaFarms_TradeEnd:
# 384 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	closemessage
# 385 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	release
	return

ISLANDGAME_FRESA_FARMS_Girl_2:
# 301 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Girl_Text_0
# 304 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto FresaFarms_TradeEnd
	goto ISLANDGAME_FRESA_FARMS_Girl_1

ISLANDGAME_FRESA_FARMS_Girl_5:
# 307 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Girl_Text_1, MSGBOX_YESNO
# 311 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_FRESA_FARMS_Girl_10
# 315 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto FresaFarms_TradeDecline
	goto ISLANDGAME_FRESA_FARMS_Girl_4

ISLANDGAME_FRESA_FARMS_Girl_8:
# 327 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	setflag FLAG_TEMP_5
# 328 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	playse SE_PIN
# 329 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	applymovement 21, Common_Movement_ExclamationMark
# 330 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	waitmovement 0
# 331 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	delay 30
# 332 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Girl_Text_3, MSGBOX_YESNO
# 336 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ISLANDGAME_FRESA_FARMS_Girl_16
# 340 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto FresaFarms_TradeDecline
	goto ISLANDGAME_FRESA_FARMS_Girl_7

ISLANDGAME_FRESA_FARMS_Girl_10:
# 312 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto FresaFarms_TradeInitiate
	goto ISLANDGAME_FRESA_FARMS_Girl_4

ISLANDGAME_FRESA_FARMS_Girl_14:
# 356 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto FresaFarms_TradeDecline
	goto ISLANDGAME_FRESA_FARMS_Girl_13

ISLANDGAME_FRESA_FARMS_Girl_16:
# 337 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto FresaFarms_TradeInitiate
	goto ISLANDGAME_FRESA_FARMS_Girl_7

ISLANDGAME_FRESA_FARMS_Girl_20:
# 362 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	msgbox ISLANDGAME_FRESA_FARMS_Girl_Text_4
# 365 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	goto FresaFarms_TradeEnd
	goto ISLANDGAME_FRESA_FARMS_Girl_19


ISLANDGAME_FRESA_FARMS_Sign_Text_0:
# 106 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "FRESA FARMS\n"
	.string "Paulie and Marion$"

ISLANDGAME_FRESA_FARMS_Miltank_Interact_Text_0:
# 119 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "{COLOR RED}(Miltank is fast asleep.)$"

ISLANDGAME_FRESA_FARMS_Miltank_Interact_Text_1:
# 125 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Moo. {COLOR BLUE}(Moo.)$"

ISLANDGAME_FRESA_FARMS_Chansey_Interact_Text_0:
# 135 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Chansey. {COLOR BLUE}(Most humans can't understand\n"
	.string "us, but some are born with a special\l"
	.string "ability to comprehend what Pokémon are\l"
	.string "saying.)\p"
	.string "{COLOR DARK_GRAY}Chansey. {COLOR BLUE}(You're one of them,{PAUSE 30} aren't\n"
	.string "you?)$"

ISLANDGAME_FRESA_FARMS_Mareep1_Text_0:
# 143 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Reeep. {COLOR BLUE}(Heh. That dumb dog's snoozing\n"
	.string "on his job again!)\p"
	.string "{COLOR DARK_GRAY}Reep reep. {COLOR BLUE}(Time to sneak out and have\n"
	.string "some fun with Chansey...)\p"
	.string "{COLOR DARK_GRAY}Reep? {COLOR BLUE}(Huh?)$"

ISLANDGAME_FRESA_FARMS_Mareep1_Text_1:
# 150 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "{COLOR DARK_GRAY}Reep... {COLOR BLUE}(Oh, it's just a random kid. Good\n"
	.string "thing they can't understand me.)\p"
	.string "{COLOR DARK_GRAY}Reep! {COLOR BLUE}(Go away! I've got big plans for\n"
	.string "tonight!)\p"
	.string "{COLOR DARK_GRAY}Reep. {COLOR BLUE}(Oh wait... They don't understand\n"
	.string "me.)$"

ISLANDGAME_FRESA_FARMS_Mareep1_Text_2:
# 155 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "{COLOR DARK_GRAY}Reep... {COLOR BLUE}(This mutt is a pain in my fluffy\n"
	.string "behind...)\p"
	.string "{COLOR DARK_GRAY}Reep. {COLOR BLUE}(I got important business to\n"
	.string "attend to at night!)$"

ISLANDGAME_FRESA_FARMS_Mareep2_Text_0:
# 165 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Reep. {COLOR BLUE}(I'm just saying man, if it was me\n"
	.string "against that Mightyena, hoo boy.)\p"
	.string "{COLOR DARK_GRAY}Reep! {COLOR BLUE}(I would'a messed that Mightyena\n"
	.string "up real good, ya feel me?)\p"
	.string "{COLOR DARK_GRAY}Reep? {COLOR BLUE}(Huh? Why are you looking me like\n"
	.string "that? I'm fo' realzies!)$"

ISLANDGAME_FRESA_FARMS_Mareep3_Text_0:
# 175 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Reep! {COLOR BLUE}(Hey there! Thanks for saving my\n"
	.string "butt from that scary Mightyena.)\p"
	.string "{COLOR DARK_GRAY}Reep. {COLOR BLUE}(Please take this as a gift.)$"

ISLANDGAME_FRESA_FARMS_Mareep3_Text_1:
# 178 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Reep. {COLOR BLUE}(Oh, you don't have enough space\n"
	.string "for this.)$"

ISLANDGAME_FRESA_FARMS_Mareep3_Text_2:
# 186 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Reep. {COLOR BLUE}(I found it wandering around\n"
	.string "today. Hope it helps you out!)$"

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_0:
# 205 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Our milk is sourced from the healthiest\n"
	.string "Miltank in all of Marya, Lady Moona!$"

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_1:
# 209 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "We are selling it in packs of six for\n"
	.string "only ¥7000! Would you like a pack?{PAUSE 30}$"

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_2:
# 215 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Oh dear, you don't have enough money,\n"
	.string "sweetie.$"

ISLANDGAME_FRESA_FARMS_EventScripts_MilkVendor_Text_3:
# 227 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Thank you for your patronage!$"

ISLANDGAME_FRESA_FARMS_Tepig_Text_0:
# 251 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "{COLOR RED}(Tepig is busy chowing down a bowl of\n"
	.string "well-done berries.)$"

ISLANDGAME_FRESA_FARMS_Mudsdale_Text_0:
# 268 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Hee-haw! {COLOR BLUE}(Hee-ho!)$"

ISLANDGAME_FRESA_FARMS_Dude_Text_0:
# 278 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "I wonder what came first... the Pokémon,\n"
	.string "or the egg?$"

ISLANDGAME_FRESA_FARMS_Boy_Text_0:
# 288 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "By breeding two Pokémon in the same\n"
	.string "family together, sometimes its child\l"
	.string "will inherit one of its parents' moves!\p"
	.string "These inherited moves are called egg\n"
	.string "moves, and most of them can't be\l"
	.string "learned any other way!\p"
	.string "My Tepig knows a “super powerful” move\n"
	.string "thanks to its mom! Isn't that awesome?$"

ISLANDGAME_FRESA_FARMS_Girl_Text_0:
# 302 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Fidough are a real gift from Arceus to\n"
	.string "us farmers! When they eventually grow\l"
	.string "up into Daschbuns, their sweet scent\l"
	.string "helps our wheat grow up real fast n'\l"
	.string "good!$"

ISLANDGAME_FRESA_FARMS_Girl_Text_1:
# 308 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Ooooo! Is that an pwetty widdle Fidough\n"
	.string "I see?\p"
	.string "Pleeeeeease trade me it! I got another\n"
	.string "adorable puppy to make it worth yer\l"
	.string "while!$"

ISLANDGAME_FRESA_FARMS_Girl_Text_2:
# 319 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Fidough are just the cutest li'l doggos\n"
	.string "in the whole wide world!\p"
	.string "I wish I had one of my own, but they're\n"
	.string "just so gosh-darn hard to find, and I'm\l"
	.string "always too busy with chores to go out\l"
	.string "and look fer one. Oh hum...$"

ISLANDGAME_FRESA_FARMS_Girl_Text_3:
# 333 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Ooooo! Is that an sweet widdle Fidough\n"
	.string "I see?\p"
	.string "Pleeeeeease trade me it! I got another\n"
	.string "adorable puppy to make it worth yer\l"
	.string "while!$"

ISLANDGAME_FRESA_FARMS_Girl_Text_4:
# 363 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Eeeeh? That ain't no Fidough.$"

ISLANDGAME_FRESA_FARMS_Girl_Text_5:
# 374 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Eeeeee! 'Preciate your kindness,\n"
	.string "trainer! Hope ye like yer new pet as\l"
	.string "well. She may look small, but she's a real\l"
	.string "tough boxer!$"

ISLANDGAME_FRESA_FARMS_Girl_Text_6:
# 381 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "Aw, shucks.$"

ISLANDGAME_FRESA_FARMS_Daycare_Mon1_Text::
# 54 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "{STR_VAR_1} looks happy!$"

ISLANDGAME_FRESA_FARMS_Daycare_Mon2_Text::
# 64 "data/maps/ISLANDGAME_FRESA_FARMS/scripts.pory"
	.string "{STR_VAR_2} stares at you intently.$"
