SantaluneForest_MapScripts::
	.byte 0


Santalune_Forest_SignScript_Enter::
# 4 "data/maps/SantaluneForest/scripts.pory"
	lockall
# 5 "data/maps/SantaluneForest/scripts.pory"
	msgbox Santalune_Forest_SignScript_Enter_Text_0
# 6 "data/maps/SantaluneForest/scripts.pory"
	waitmessage
# 7 "data/maps/SantaluneForest/scripts.pory"
	release
	return


Santalune_Forest_SignScript_Enter_Text_0:
# 5 "data/maps/SantaluneForest/scripts.pory"
	.string "This is Santalune Forest.\n"
	.string "Keep an eye out for dropped items!$"
