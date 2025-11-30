Common_DisableAutoRun::
# 2 "data/scripts/islandgame_common.pory"
	msgbox Common_DisableAutoRun_Text_0
# 3 "data/scripts/islandgame_common.pory"
	waitmessage
# 4 "data/scripts/islandgame_common.pory"
	closemessage
	end


Common_EnableAutoRun::
# 9 "data/scripts/islandgame_common.pory"
	msgbox Common_EnableAutoRun_Text_0
# 10 "data/scripts/islandgame_common.pory"
	waitmessage
# 11 "data/scripts/islandgame_common.pory"
	closemessage
	end


Common_NextSubQuest::
Common_NextSubQuest_2:
# 29 "data/scripts/islandgame_common.pory"
	compare VAR_TEMP_B, VAR_TEMP_A
	goto_if_lt Common_NextSubQuest_3
	return

Common_NextSubQuest_3:
# 30 "data/scripts/islandgame_common.pory"
	subquestmenu QUEST_MENU_CHECK_COMPLETE, VAR_TEMP_C, VAR_TEMP_B
# 31 "data/scripts/islandgame_common.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Common_NextSubQuest_6
# 40 "data/scripts/islandgame_common.pory"
	addvar VAR_TEMP_B, 1
	goto Common_NextSubQuest_2

Common_NextSubQuest_6:
# 32 "data/scripts/islandgame_common.pory"
	subquestmenu QUEST_MENU_BUFFER_QUEST_NAME, VAR_TEMP_C, VAR_TEMP_B
	return


Common_DisableAutoRun_Text_0:
# 2 "data/scripts/islandgame_common.pory"
	.string "Auto Run {COLOR RED}Disabled{COLOR DARK_GRAY}.$"

Common_EnableAutoRun_Text_0:
# 9 "data/scripts/islandgame_common.pory"
	.string "Auto Run {COLOR GREEN}Enabled{COLOR DARK_GRAY}.$"
