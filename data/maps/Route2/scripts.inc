Route2_MapScripts::
	.byte 0


Route2_SignScript_Forest::
# 4 "data/maps/Route2/scripts.pory"
	lockall
# 5 "data/maps/Route2/scripts.pory"
	msgbox Route2_SignScript_Forest_Text_0
# 6 "data/maps/Route2/scripts.pory"
	waitmessage
# 7 "data/maps/Route2/scripts.pory"
	release
	return


Route2_SignScript_Forest_Text_0:
# 5 "data/maps/Route2/scripts.pory"
	.string "Santalune Forest Ahead$"
