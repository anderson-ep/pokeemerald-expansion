Opening_Scene_MapScripts::
# 2 "data/maps/Opening_Scene/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RemovePlayerSprite
# 4 "data/maps/Opening_Scene/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Opening_Scene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Opening_Scene_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/Opening_Scene/scripts.pory"
	map_script_2 VAR_NEWGAME_START, 0, NewGameIntro
	.2byte 0


NewGameIntro::
# 11 "data/maps/Opening_Scene/scripts.pory"
	msgbox NewGameIntro_Text_0
# 12 "data/maps/Opening_Scene/scripts.pory"
	msgbox NewGameIntro_Text_1
# 13 "data/maps/Opening_Scene/scripts.pory"
	msgbox NewGameIntro_Text_2
# 14 "data/maps/Opening_Scene/scripts.pory"
	msgbox NewGameIntro_Text_3
# 15 "data/maps/Opening_Scene/scripts.pory"
	waitmessage
# 16 "data/maps/Opening_Scene/scripts.pory"
	warp MAP_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F, 1, 4
	return


RemovePlayerSprite::
# 21 "data/maps/Opening_Scene/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
	return


NewGameIntro_Text_0:
# 11 "data/maps/Opening_Scene/scripts.pory"
	.string "{PLAYER}!$"

NewGameIntro_Text_1:
# 12 "data/maps/Opening_Scene/scripts.pory"
	.string "Your package from Professor Sycamore\n"
	.string "is here!$"

NewGameIntro_Text_2:
# 13 "data/maps/Opening_Scene/scripts.pory"
	.string "...$"

NewGameIntro_Text_3:
# 14 "data/maps/Opening_Scene/scripts.pory"
	.string "It's your big day and you seriously want\n"
	.string "to sleep in? Get up!$"
