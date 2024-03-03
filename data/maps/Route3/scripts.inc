Route3_MapScripts::
	.byte 0


Route3_SignScript_Enter::
# 6 "data/maps/Route3/scripts.pory"
	lockall
# 7 "data/maps/Route3/scripts.pory"
	msgbox Route3_SignScript_Enter_Text_0
# 8 "data/maps/Route3/scripts.pory"
	waitmessage
# 9 "data/maps/Route3/scripts.pory"
	release
	return


Route3_ObjectScript_LittleGirl::
# 14 "data/maps/Route3/scripts.pory"
	lockall
# 15 "data/maps/Route3/scripts.pory"
	faceplayer
# 16 "data/maps/Route3/scripts.pory"
	msgbox Route3_ObjectScript_LittleGirl_Text_0
# 17 "data/maps/Route3/scripts.pory"
	waitmessage
# 18 "data/maps/Route3/scripts.pory"
	release
	return


Route3_SignScript_Enter_Text_0:
# 7 "data/maps/Route3/scripts.pory"
	.string "Route 3\n"
	.string "Also known as Ouvert Way$"

Route3_ObjectScript_LittleGirl_Text_0:
# 16 "data/maps/Route3/scripts.pory"
	.string "I went to the Pokemon Center 'cause I\n"
	.string "was asked to buy Pokeballs$"
