ISLANDGAME_ORANNA_CHERIPORT_LAB_MapScripts::
# 7 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_ORANNA_CHERIPORT_LAB_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_ORANNA_CHERIPORT_LAB_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm::
# 19 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	lock
# 20 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	faceplayer
# 23 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	goto_if_unset FLAG_ORANNA_CHERIPORT_GOT_EEVEE, ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_2
# 106 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	returnqueststate QUEST_POKEDEX_COMPLETION
# 109 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, QUEST_COMPLETED
	goto_if_eq ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_11
# 116 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	goto_if_unset FLAG_TEMP_10, ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_19
# 150 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_8
# 153 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	goto Cheriport_PalmCheckPokedex
ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_1:
# 159 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
Cheriport_PalmCheckPokedex:
# 160 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_9
# 163 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	setvar VAR_0x8004, 1
# 164 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 165 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 166 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 167 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 168 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 169 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_10
# 174 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 30
	goto_if_ge ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_6
ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_5:
# 185 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 60
	goto_if_ge ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_15
ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_14:
# 196 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 90
	goto_if_ge ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_23
ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_22:
# 208 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 120
	goto_if_ge ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_28
ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_27:
# 219 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 150
	goto_if_ge ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_33
ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_32:
# 231 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 180
	goto_if_ge ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_38
ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_37:
# 242 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 210
	goto_if_ge ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_43
ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_42:
# 254 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 240
	goto_if_ge ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_48
ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_47:
# 265 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 270
	goto_if_ge ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_53
ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_52:
# 276 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 300
	goto_if_ge ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_58
ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_57:
# 287 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 330
	goto_if_ge ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_63
ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_62:
# 298 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 360
	goto_if_ge ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_68
ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_67:
# 313 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 400
	goto_if_eq ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_73
ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_72:
# 329 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
Cheriport_PalmEnd:
# 330 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	closemessage
# 331 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	release
	return

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_2:
# 24 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_0
# 33 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_ORANNA_CHERIPORT_GOT_EEVEE
# 34 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 36 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE, ITEM_CHERISH_BALL, NUM_NATURES, 1, , , , , , , , , , , , , , , , , , FALSE
# 37 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 38 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 39 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_1
# 42 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	waitfanfare
# 43 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 44 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_9
ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_8:
# 51 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_2
# 56 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 57 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_3
# 60 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	waitfanfare
# 62 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 63 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	special SetUnlockedPokedexFlags
# 64 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 65 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	special EnableNationalPokedex
# 66 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 68 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_4
# 74 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_POKE_BALL, 30
# 76 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_5
# 81 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	startquest QUEST_POKEDEX_COMPLETION
# 83 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_6
# 88 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	setrespawn HEAL_LOCATION_ISLANDGAME_ORANNA_CHERIPORT
# 89 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	startquest QUEST_MINTY_MEADOWS_MELISSA
# 90 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	goto Cheriport_PalmEnd
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_1

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_6:
# 175 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_1
# 176 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_17
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_5

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_9:
# 47 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 48 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_8

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_11:
# 110 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_7
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_1

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_15:
# 186 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_2
# 187 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_25
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_14

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_17:
# 177 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_11
# 181 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_TM52
# 182 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_1
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_5

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_19:
# 117 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_TEMP_10
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_1

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_23:
# 197 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_3
# 198 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_30
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_22

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_25:
# 188 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_12
# 192 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_NEST_BALL, 15
# 193 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_2
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_14

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_28:
# 209 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_4
# 210 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_35
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_27

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_30:
# 199 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_13
# 204 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_RARE_CANDY, 5
# 205 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_3
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_22

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_33:
# 220 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_5
# 221 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_40
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_32

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_35:
# 211 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_14
# 215 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_LEVEL_BALL, 30
# 216 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_4
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_27

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_38:
# 232 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_6
# 233 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_45
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_37

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_40:
# 222 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_15
# 227 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE, 7
# 228 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_5
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_32

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_43:
# 243 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_7
# 244 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_50
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_42

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_45:
# 234 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_16
# 238 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 45
# 239 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_6
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_37

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_48:
# 255 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_8
# 256 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_55
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_47

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_50:
# 245 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_17
# 250 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 9
# 251 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_7
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_42

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_53:
# 266 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_9
# 267 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_60
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_52

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_55:
# 257 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_18
# 261 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_QUICK_BALL, 60
# 262 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_8
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_47

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_58:
# 277 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_10
# 278 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_65
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_57

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_60:
# 268 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_19
# 272 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_CATCHING_CHARM
# 273 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_9
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_52

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_63:
# 288 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_11
# 289 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_70
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_62

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_65:
# 279 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_20
# 283 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_EXP_CHARM
# 284 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_10
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_57

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_68:
# 299 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_12
# 300 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_75
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_67

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_70:
# 290 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_21
# 294 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_OVAL_CHARM
# 295 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_11
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_62

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_73:
# 314 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_13
# 315 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_77
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_72

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_75:
# 301 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_22
# 305 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_MASTER_BALL
# 306 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_23
# 309 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_12
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_67

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_77:
# 316 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_24
# 322 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_AURORA_TICKET
# 323 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_12
# 324 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	completequest QUEST_POKEDEX_COMPLETION
	goto ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_72


ISLANDGAME_ORANNA_CHERIPORT_LAB_Melissa::
# 364 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	lock
# 365 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	faceplayer
# 366 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_Melissa_Text_0
# 370 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	closemessage
# 371 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_LAB_Gible::
# 375 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	lock
# 376 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	faceplayer
# 377 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	playmoncry SPECIES_GIBLE, CRY_MODE_NORMAL
# 378 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	waitmoncry
# 379 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	closemessage
# 380 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_LAB_Vigoroth::
# 384 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	lock
# 385 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 386 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_Vigoroth_Text_0
# 389 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	closemessage
# 390 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_LAB_Gooner::
# 395 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	lock
# 396 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_Gooner_Text_0
# 399 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	closemessage
# 400 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	playse SE_PIN
# 401 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	faceplayer
# 402 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 403 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	waitmovement 0
# 404 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	delay 48
# 405 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_Gooner_Text_1
# 408 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	closemessage
# 409 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	applymovement 3, Common_Movement_QuestionMark
# 410 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	waitmovement 0
# 411 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	delay 48
# 412 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_Gooner_Text_2
# 415 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	applymovement 3, Common_Movement_FaceOriginalDirection
# 416 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	waitmovement 0
# 417 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	closemessage
# 418 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_LAB_Scientist::
# 423 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	lock
# 424 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	faceplayer
# 425 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_Scientist_Text_0
# 429 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	closemessage
# 430 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_LAB_Coco::
# 434 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	lock
# 435 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_ORANNA_CHERIPORT_LAB_Coco_Text_0
# 438 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	closemessage
# 439 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_0:
# 25 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}{PLAYER}! It's a pleasure\n"
	.string "to finally meet you in person!\p"
	.string "How are you enjoying the isles so far?\n"
	.string "Hopefully your trip was relatively\l"
	.string "smooth sailing. You live quite a ways\l"
	.string "away from Marya, after all.\p"
	.string "The humidity will take a quite a bit of\n"
	.string "getting used to, especially for someone\l"
	.string "from the other side of the planet, aha.\p"
	.string "Fortunately, Oranna is the coolest of\n"
	.string "the islands thanks to its Isle Guardian,\l"
	.string "Articuno, so you'll have plenty of time\l"
	.string "to adjust!\p"
	.string "But that is enough yapping from me.\n"
	.string "You've come all this way to Marya to\l"
	.string "become a Pokémon trainer, {PLAYER},\l"
	.string "and after such a long journey to get\l"
	.string "here, I bet you're raring to begin your\l"
	.string "adventure!\p"
	.string "So without further ado, I present to\n"
	.string "you your very first companion!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_1:
# 40 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "You recieved {STR_VAR_1}, the\n"
	.string "Evolution Pokémon!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_2:
# 52 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "That Eevee is quite the rare and\n"
	.string "peculiar Pokémon! Treat it with care\l"
	.string "and respect, and it'll return the favor!\p"
	.string "Along with your new friend, I'll also be\n"
	.string "entrusting you with this Pokédex,\l"
	.string "designed by yours truly!!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_3:
# 58 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "You recieved a Pokédex!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_4:
# 69 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "The Pokédex is a highly advanced piece\n"
	.string "of tech that will automatically record\l"
	.string "the data of any Pokémon you see or\l"
	.string "catch.\p"
	.string "And thanks to new implementations by\n"
	.string "yours truly, it will also tell you all the\l"
	.string "Pokémon you've seen or caught in each\l"
	.string "area!\p"
	.string "Speaking of catching, you'll also need\n"
	.string "some of these too. They're special\l"
	.string "devices that will allow you to catch\l"
	.string "wild Pokémon!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_5:
# 77 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "And with that, {PLAYER}, you're all set\n"
	.string "to begin your journey!\p"
	.string "Get out there, explore all that the\n"
	.string "isles have to offer, and aid me in\l"
	.string "completing the Pokédex!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_6:
# 84 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "I recommend you meet up with my other\n"
	.string "apprentice first, though!\p"
	.string "Her name is {COLOR GREEN}Melissa{COLOR DARK_GRAY}, and she's a new and\n"
	.string "aspiring trainer just like you!\p"
	.string "I sent her to conduct some field\n"
	.string "research in the {COLOR GREEN}Minty Meadows{COLOR DARK_GRAY}, east of\l"
	.string "her hometown of {COLOR GREEN}Maplegrove{COLOR DARK_GRAY}. She should\l"
	.string "still be there by the time you get\l"
	.string "there!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_7:
# 111 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}Your name will be etched in\n"
	.string "Marya's history as well as our hearts\l"
	.string "forever, {PLAYER}.$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_8:
# 151 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}{PLAYER}! It's good to see\n"
	.string "you again!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_9:
# 161 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "Let's see how you're doing with your\n"
	.string "Pokédex...$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_10:
# 170 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "It looks like you've seen a total of\n"
	.string "{STR_VAR_1} Pokémon, and caught a\l"
	.string "total of {STR_VAR_2} Pokémon!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_11:
# 178 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 30 Pokémon?\n"
	.string "Fantastic work, {PLAYER}!\p"
	.string "Here, take this Technical Machine as a\n"
	.string "little reward. It'll be very useful for\l"
	.string "catching Pokémon!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_12:
# 189 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 60 Pokémon?\n"
	.string "Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Nest Balls as a\n"
	.string "little reward!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_13:
# 200 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 90 Pokémon?\n"
	.string "Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Rare Candies\n"
	.string "as a little reward. Each one packs\l"
	.string "enough power to instantly level your\l"
	.string "Pokémon up!\p"
	.string "Just don't try and eat one yourself.\n"
	.string "They're not very delectable to humans.$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_14:
# 212 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 120\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Level Balls as\n"
	.string "a little reward.$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_15:
# 223 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 150\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Ability\n"
	.string "Capsules as a little reward. When given\l"
	.string "to a Pokémon, it will change their basic\l"
	.string "ability to their other possible ability,\l"
	.string "if they have another one!\p"
	.string "However, they can't be used to change a\n"
	.string "Pokémon's ability to their hidden one.\l"
	.string "You'll need another type of item to do\l"
	.string "that, perhaps one that you'll get as a\l"
	.string "later reward...$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_16:
# 235 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 180\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Ultra Balls as\n"
	.string "a little reward.$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_17:
# 246 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 210\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these super rare\n"
	.string "Ability Patches as a reward.\p"
	.string "By using them on a Pokémon, you'll grant\n"
	.string "them their hidden ability!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_18:
# 258 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 240\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Quick Balls as\n"
	.string "a little reward.$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_19:
# 269 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 270\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take this charm. It'll increase the\n"
	.string "chance of a “critical capture” to occur\l"
	.string "when you use any Pokéball!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_20:
# 280 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 300\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take this charm. It'll increase the\n"
	.string "experience your Pokémon gain!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_21:
# 291 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 330\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take this charm. It'll increase the\n"
	.string "chances of getting a Pokémon egg from\l"
	.string "the daycare at Fresa Farms!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_22:
# 302 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 360 Pokémon\n"
	.string "now? Amazing work, {PLAYER}! You're\l"
	.string "nearing completion of the Pokédex!\l"
	.string "Here, this Master Ball was gifted to me\l"
	.string "by Poe Industries. I'm sure a seasoned\l"
	.string "trainer such as yourself will be able to\l"
	.string "make use of it!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_23:
# 307 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "You're nearly there, {PLAYER}! I know\n"
	.string "you can do it!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_ProfessorPalm_Text_24:
# 317 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "I cannot believe my aging eyes... You've\n"
	.string "done it! You've seen and caught all\l"
	.string "{STR_VAR_1} Pokémon, {PLAYER}!\p"
	.string "At last... my lifelong dream of\n"
	.string "completing the Pokédex has come true.\p"
	.string "I'm not quite sure what to say,\n"
	.string "{PLAYER}. I truly can't thank you\l"
	.string "enough for your help.\p"
	.string "Here, please take this as your final\n"
	.string "reward. A mysterious stranger handed it\l"
	.string "to me many years ago. He told me to give\l"
	.string "it to the world's strongest trainer, and\l"
	.string "I see no other recipient more worthy of\l"
	.string "that title than you!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_Melissa_Text_0:
# 367 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Hiya {PLAYER}! You wanted to\n"
	.string "come see us before taking on Ruka?\p"
	.string "Me and Gibby still got a ways to go\n"
	.string "before we're ready...$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_Vigoroth_Text_0:
# 387 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR RED}(It looks like this Pokémon is hard at\n"
	.string "work.)$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_Gooner_Text_0:
# 397 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "Heheh...{PAUSE 60} Yeah...{PAUSE 120} H-Huh?$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_Gooner_Text_1:
# 406 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "I-It's not what you think! I was just\n"
	.string "doing research!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_Gooner_Text_2:
# 413 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "Huh? You're not the professor...{PAUSE 60} G-Go\n"
	.string "away! I'm doing grown-up stuff!$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_Scientist_Text_0:
# 426 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "You kids today sure are lucky to get to\n"
	.string "travel around the Maryan Isles.\p"
	.string "During my apprenticeship, all Palm had\n"
	.string "me do was write research papers.$"

ISLANDGAME_ORANNA_CHERIPORT_LAB_Coco_Text_0:
# 436 "data/maps/ISLANDGAME_ORANNA_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR RED}(She seems preoccupied... I should leave\n"
	.string "her be.)$"
