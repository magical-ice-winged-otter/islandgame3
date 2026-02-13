ISLANDGAME_CHERIPORT_LAB_MapScripts::
# 6 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ISLANDGAME_CHERIPORT_LAB_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ISLANDGAME_CHERIPORT_LAB_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_CHERIPORT_LAB_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 7 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_ROSEVALE_STATE, 4
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

ISLANDGAME_CHERIPORT_LAB_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_TEMP_1
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Melissa::
# 17 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	lock
# 18 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	faceplayer
# 19 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_Melissa_Text_0
# 22 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	closemessage
# 23 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Gible::
# 27 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	lock
# 28 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	faceplayer
# 29 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	playmoncry SPECIES_GIBLE, CRY_MODE_NORMAL
# 30 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_Gible_Text_0
# 33 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	closemessage
# 34 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk::
# 40 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	lock
# 41 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	faceplayer
# 44 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto_if_unset FLAG_PROF_GAVE_EEVEE, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_2
# 97 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto_if_unset FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_3
# 108 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	returnqueststate QUEST_POKEDEX_COMPLETION
# 111 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, QUEST_COMPLETED
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_13
# 118 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto_if_unset FLAG_TEMP_10, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_19
# 152 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_7
# 155 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto Palm_CheckPokedex
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1:
# 161 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
Palm_CheckPokedex:
# 162 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_8, MSGBOX_YESNO
# 165 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_8
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_7:
# 168 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_9
# 171 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setvar VAR_0x8004, 1
# 172 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 173 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 174 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 175 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 176 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 177 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_10
# 182 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 30
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_17
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_16:
# 193 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 60
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_23
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_22:
# 204 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 90
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_37
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_36:
# 216 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 120
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_42
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_41:
# 227 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 150
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_47
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_46:
# 239 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 180
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_52
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_51:
# 250 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 210
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_57
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_56:
# 262 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 240
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_62
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_61:
# 273 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 270
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_67
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_66:
# 284 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 300
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_72
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_71:
# 295 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 330
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_77
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_76:
# 306 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 360
	goto_if_ge ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_82
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_81:
# 321 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_0x8009, 400
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_87
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_86:
# 337 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
Palm_End:
# 338 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	closemessage
# 339 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	release
	return

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_2:
# 45 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ProfTalk_First_Text
# 46 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_PROF_GAVE_EEVEE
# 47 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 49 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	givemon SPECIES_EEVEE, 5, ITEM_NONE, ITEM_CHERISH_BALL, NUM_NATURES, 1, , , , , , , , , , , , , , , , , , FALSE
# 50 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 51 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_EEVEE
# 52 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ReceivedEevee_Text
# 53 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	waitfanfare
# 55 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 56 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_11
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_10:
# 62 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ProfTalk_Second_Text
# 64 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 65 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox Prof_Recieved_Pokedex_Text
# 66 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	waitfanfare
# 67 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 68 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	special SetUnlockedPokedexFlags
# 69 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_SYS_NATIONAL_DEX
# 70 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	special EnableNationalPokedex
# 71 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 73 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ProfTalk_Third_Text
# 75 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_POKE_BALL, 30
# 76 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_0
# 80 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 81 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_1
# 85 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	startquest QUEST_POKEDEX_COMPLETION
# 86 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_2
# 91 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setrespawn HEAL_LOCATION_CHERIPORT
# 92 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	startquest QUEST_MINTY_MEADOWS_MELISSA
# 93 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto Palm_End
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_3:
# 98 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_3
# 101 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto Palm_CheckPokedex
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_8:
# 166 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto Palm_End
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_7

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_11:
# 59 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 60 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_10

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_13:
# 112 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_4
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_17:
# 183 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_1
# 184 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_25
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_16

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_19:
# 119 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	setflag FLAG_TEMP_10
# 122 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto_if_set FLAG_MINTY_MEADOWS_RIVAL_DEFEATED, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_33
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_31:
# 132 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto_if_set FLAG_TIDALCOVE_RUKA_DEFEATED, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_30
ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_29:
# 143 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_7
# 146 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto Palm_CheckPokedex
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_23:
# 194 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_2
# 195 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_39
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_22

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_25:
# 185 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_11
# 189 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_TM53
# 190 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_1
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_16

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_27:
# 123 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_5
# 128 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto Palm_CheckPokedex
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_28:
# 133 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_6
# 138 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto Palm_CheckPokedex
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_1

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_30:
# 132 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	goto_if_unset FLAG_LUMINE_CAVE_AGGRON_DEFEATED, ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_28
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_29

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_33:
# 122 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_ROSEVALE_STATE, 4
	goto_if_ne ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_27
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_31

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_37:
# 205 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_3
# 206 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_44
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_36

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_39:
# 196 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_12
# 200 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_NEST_BALL, 15
# 201 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_2
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_22

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_42:
# 217 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_4
# 218 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_49
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_41

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_44:
# 207 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_13
# 212 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_RARE_CANDY, 5
# 213 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_3
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_36

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_47:
# 228 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_5
# 229 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_54
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_46

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_49:
# 219 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_14
# 223 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_LEVEL_BALL, 30
# 224 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_4
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_41

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_52:
# 240 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_6
# 241 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_59
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_51

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_54:
# 230 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_15
# 235 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE, 7
# 236 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_5
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_46

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_57:
# 251 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_7
# 252 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_64
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_56

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_59:
# 242 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_16
# 246 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_ULTRA_BALL, 45
# 247 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_6
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_51

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_62:
# 263 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_8
# 264 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_69
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_61

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_64:
# 253 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_17
# 258 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 9
# 259 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_7
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_56

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_67:
# 274 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_9
# 275 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_74
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_66

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_69:
# 265 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_18
# 269 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_QUICK_BALL, 60
# 270 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_8
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_61

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_72:
# 285 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_10
# 286 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_79
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_71

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_74:
# 276 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_19
# 280 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_CATCHING_CHARM
# 281 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_9
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_66

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_77:
# 296 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_11
# 297 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_84
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_76

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_79:
# 287 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_20
# 291 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_EXP_CHARM
# 292 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_10
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_71

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_82:
# 307 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_12
# 308 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_89
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_81

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_84:
# 298 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_21
# 302 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_OVAL_CHARM
# 303 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_11
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_76

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_87:
# 322 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_13
# 323 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_91
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_86

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_89:
# 309 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_22
# 313 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_MASTER_BALL
# 314 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_23
# 317 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_12
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_81

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_91:
# 324 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_24
# 330 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	giveitem ITEM_AURORA_TICKET
# 331 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEDEX_COMPLETION, SUB_QUEST_POKEDEX_MILESTONE_12
# 332 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	completequest QUEST_PERSI_BERRY_MANIAC
	goto ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_86


ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist1Talk::
# 408 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	lock
# 409 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	faceplayer
# 410 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox Scientist1Talk_Text
# 411 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk::
# 415 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	lock
# 416 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_0
# 417 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	playse SE_PIN
# 418 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 419 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	waitmovement 0
# 420 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 421 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	waitmovement 0
# 422 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 423 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	waitmovement 0
# 424 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_1
# 425 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	applymovement 3, Common_Movement_QuestionMark
# 426 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	waitmovement 0
# 427 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	applymovement 3, Common_Movement_Delay48
# 428 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	waitmovement 0
# 429 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_2
# 430 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	applymovement 3, Common_Movement_FaceOriginalDirection
# 431 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	waitmovement 0
# 432 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_CocoTalk::
# 436 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	lock
# 437 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox CocoTalk_Text
# 438 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Vigoroth::
# 459 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	lock
# 460 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	msgbox ISLANDGAME_CHERIPORT_LAB_VigorothTalk
# 461 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	playmoncry SPECIES_VIGOROTH, CRY_MODE_NORMAL
# 462 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	waitmoncry
# 463 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	release
	return


ISLANDGAME_CHERIPORT_LAB_EventScript_Melissa_Text_0:
# 20 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Melissa: {COLOR DARK_GRAY}Hiya, {PLAYER}!{PAUSE 60} You wanted\n"
	.string "to come see us before taking on Ruka?$"

ISLANDGAME_CHERIPORT_LAB_EventScript_Gible_Text_0:
# 31 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Gib-dayo! {COLOR BLUE}(The next time we fight, I'll\n"
	.string "be stronger! Believe it!)$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_0:
# 77 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "I'd also like you to have this device\n"
	.string "too! While active, it will distribute the\l"
	.string "experience earned from battles across\l"
	.string "all of your Pokémon!\p"
	.string "It can also be turned off if you wish\n"
	.string "not to use it!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_1:
# 82 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "And with that, {PLAYER}, you're all set\n"
	.string "to begin your journey!\p"
	.string "Get out there, explore all that the\n"
	.string "isles have to offer, and aid me in\l"
	.string "completing the Pokédex!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_2:
# 87 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "I recommend you meet up with my other\n"
	.string "apprentice first, though!\p"
	.string "Her name is {COLOR GREEN}Melissa{COLOR DARK_GRAY}, and she's a new and\n"
	.string "aspiring trainer just like you!\p"
	.string "I sent her to conduct some field\n"
	.string "research in the {COLOR GREEN}Minty Meadows{COLOR DARK_GRAY}, east of\l"
	.string "her hometown of {COLOR GREEN}Maplegrove{COLOR DARK_GRAY}. She should\l"
	.string "still be there by the time you get\l"
	.string "there!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_3:
# 99 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}Melissa should be somewhere\n"
	.string "in the {COLOR GREEN}Minty Meadows {COLOR DARK_GRAY}right now.{PAUSE 30} It'll be\l"
	.string "to the east of her hometown of\l"
	.string "{COLOR GREEN}Maplegrove{COLOR DARK_GRAY}!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_4:
# 113 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}Your name will be etched in\n"
	.string "Marya's history, as well as our hearts,\l"
	.string "forever, {PLAYER}.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_5:
# 124 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}{PLAYER}! It's good to see\n"
	.string "you again! I see you and Melissa have\l"
	.string "finally met.\p"
	.string "She told me that the two of you fought\n"
	.string "a ferocious Mightyena and saved Old\l"
	.string "Man Paulie's Mareep!\p"
	.string "That must've been very frightening as\n"
	.string "two trainers just starting their\l"
	.string "journey. I'm glad you're both alright.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_6:
# 134 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}{PLAYER}! It's good to see\n"
	.string "you again! Congrats on getting your\l"
	.string "first gym badge in the Marya League!\p"
	.string "You're growing so fast as a trainer\n"
	.string "already, I'm thoroughly impressed!\p"
	.string "Melissa's already gone ahead to Lumine\n"
	.string "Island, if you were wondering.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_7:
# 144 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR GREEN}Prof. Palm: {COLOR DARK_GRAY}{PLAYER}! It's good to see\n"
	.string "you again!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_8:
# 163 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Did you also want me to check on the\n"
	.string "progress of your Pokédex so far?$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_9:
# 169 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Let's see how you're doing with your\n"
	.string "Pokédex...$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_10:
# 178 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "It looks like you've seen a total of\n"
	.string "{STR_VAR_1} Pokémon, and caught a\l"
	.string "total of {STR_VAR_2} Pokémon!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_11:
# 186 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 30 Pokémon?\n"
	.string "Fantastic work, {PLAYER}!\p"
	.string "Here, take this Technical Machine as a\n"
	.string "little reward. It'll be very useful for\l"
	.string "catching Pokémon!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_12:
# 197 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 60 Pokémon?\n"
	.string "Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Nest Balls as a\n"
	.string "little reward!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_13:
# 208 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 90 Pokémon?\n"
	.string "Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Rare Candies\n"
	.string "as a little reward. Each one packs\l"
	.string "enough power to instantly level your\l"
	.string "Pokémon up!\p"
	.string "Just don't try and eat one yourself.\n"
	.string "They're not very delectable to humans.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_14:
# 220 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 120\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Level Balls as\n"
	.string "a little reward.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_15:
# 231 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
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

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_16:
# 243 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 180\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Ultra Balls as\n"
	.string "a little reward.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_17:
# 254 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 210\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these super rare\n"
	.string "Ability Patches as a reward.\p"
	.string "By using them on a Pokémon, you'll grant\n"
	.string "them their hidden ability!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_18:
# 266 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 240\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take some of these Quick Balls as\n"
	.string "a little reward.$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_19:
# 277 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 270\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take this charm. It'll increase the\n"
	.string "chance of a “critical capture” to occur\l"
	.string "when you use any Pokéball!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_20:
# 288 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 300\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take this charm. It'll increase the\n"
	.string "experience your Pokémon gain!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_21:
# 299 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 330\n"
	.string "Pokémon? Fantastic work, {PLAYER}!\p"
	.string "Here, take this charm. It'll increase the\n"
	.string "chances of getting a Pokémon egg from\l"
	.string "the daycare at Fresa Farms!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_22:
# 310 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Oh? You've caught at least 360 Pokémon\n"
	.string "now? Amazing work, {PLAYER}! You're\l"
	.string "nearing completion of the Pokédex!\l"
	.string "Here, this Master Ball was gifted to me\l"
	.string "by Poe Industries. I'm sure a seasoned\l"
	.string "trainer such as yourself will be able to\l"
	.string "make use of it!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_23:
# 315 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "You're nearly there, {PLAYER}! I know\n"
	.string "you can do it!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_ProfTalk_Text_24:
# 325 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
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

ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_0:
# 416 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Heheh...{PAUSE 60} Yeah...{PAUSE 120} H-Huh?$"

ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_1:
# 424 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "I-It's not what you think! I was just\n"
	.string "doing research!$"

ISLANDGAME_CHERIPORT_LAB_EventScript_Scientist2Talk_Text_2:
# 429 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "Huh? You're not the professor...{PAUSE 60} G-Go\n"
	.string "away! I'm doing grown-up stuff!$"

ProfTalk_First_Text::
# 368 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
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

ProfTalk_Second_Text::
# 379 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "That Eevee is quite the rare and\n"
	.string "peculiar Pokémon! Treat it with care\l"
	.string "and respect, and it'll return the favor!\p"
	.string "Along with your new friend, I'll also be\n"
	.string "entrusting you with this Pokédex,\l"
	.string "designed by yours truly!$"

Prof_Recieved_Pokedex_Text::
# 386 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "You recieved a Pokédex!$"

ProfTalk_Third_Text::
# 392 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
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
	.string "tools that will allow you to catch wild\l"
	.string "Pokémon!$"

Scientist1Talk_Text::
# 441 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "You kids today sure are lucky to get to\n"
	.string "travel around the Maryan Isles.\p"
	.string "During my apprenticeship, all Palm had\n"
	.string "me do was write research papers.$"

CocoTalk_Text::
# 448 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR RED}(She seems preoccupied... I should leave\n"
	.string "her be.)$"

ReceivedEevee_Text::
# 454 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "You recieved {STR_VAR_1}, the\n"
	.string "Evolution Pokémon!$"

ISLANDGAME_CHERIPORT_LAB_VigorothTalk::
# 466 "data/maps/ISLANDGAME_CHERIPORT_LAB/scripts.pory"
	.string "{COLOR RED}(It looks like the Pokémon is hard at\n"
	.string "work.)$"
