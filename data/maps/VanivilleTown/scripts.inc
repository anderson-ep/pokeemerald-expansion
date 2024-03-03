VanivilleTown_MapScripts::
# 2 "data/maps/VanivilleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VanivilleTown_OnTransition
# 3 "data/maps/VanivilleTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


VanivilleTown_OnTransition::
# 9 "data/maps/VanivilleTown/scripts.pory"
	setrespawn HEAL_LOCATION_AQUACORDE_TOWN
	return


VanivilleTown_EventScript_FireStarter::
# 14 "data/maps/VanivilleTown/scripts.pory"
	lockall
# 15 "data/maps/VanivilleTown/scripts.pory"
	goto_if_unset FLAG_GET_STARTER, VanivilleTown_EventScript_FireStarter_2
# 33 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_EventScript_FireStarter_Text_2
VanivilleTown_EventScript_FireStarter_1:
# 35 "data/maps/VanivilleTown/scripts.pory"
	waitmessage
# 36 "data/maps/VanivilleTown/scripts.pory"
	releaseall
	end

VanivilleTown_EventScript_FireStarter_2:
# 16 "data/maps/VanivilleTown/scripts.pory"
	showmonpic SPECIES_FENNEKIN, 10, 3
# 17 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_EventScript_FireStarter_Text_0, MSGBOX_YESNO
# 18 "data/maps/VanivilleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VanivilleTown_EventScript_FireStarter_5
# 30 "data/maps/VanivilleTown/scripts.pory"
	hidemonpic
	goto VanivilleTown_EventScript_FireStarter_1

VanivilleTown_EventScript_FireStarter_5:
# 19 "data/maps/VanivilleTown/scripts.pory"
	givemon SPECIES_FENNEKIN, 5
# 20 "data/maps/VanivilleTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 21 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_EventScript_FireStarter_Text_1
# 22 "data/maps/VanivilleTown/scripts.pory"
	removeobject 1
# 23 "data/maps/VanivilleTown/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 24 "data/maps/VanivilleTown/scripts.pory"
	setvar VAR_NEED_TO_SELECT_MON, 1
# 25 "data/maps/VanivilleTown/scripts.pory"
	setflag FLAG_GET_STARTER
# 26 "data/maps/VanivilleTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 27 "data/maps/VanivilleTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 28 "data/maps/VanivilleTown/scripts.pory"
	call NicknamePartyMon
	goto VanivilleTown_EventScript_FireStarter_1


VanivilleTown_EventScript_WaterStarter::
# 42 "data/maps/VanivilleTown/scripts.pory"
	lockall
# 43 "data/maps/VanivilleTown/scripts.pory"
	goto_if_unset FLAG_GET_STARTER, VanivilleTown_EventScript_WaterStarter_2
# 62 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_EventScript_FireStarter_Text_2
VanivilleTown_EventScript_WaterStarter_1:
# 64 "data/maps/VanivilleTown/scripts.pory"
	waitmessage
# 65 "data/maps/VanivilleTown/scripts.pory"
	releaseall
	end

VanivilleTown_EventScript_WaterStarter_2:
# 44 "data/maps/VanivilleTown/scripts.pory"
	showmonpic SPECIES_FROAKIE, 10, 3
# 45 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_EventScript_WaterStarter_Text_0, MSGBOX_YESNO
# 46 "data/maps/VanivilleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VanivilleTown_EventScript_WaterStarter_5
# 59 "data/maps/VanivilleTown/scripts.pory"
	hidemonpic
	goto VanivilleTown_EventScript_WaterStarter_1

VanivilleTown_EventScript_WaterStarter_5:
# 47 "data/maps/VanivilleTown/scripts.pory"
	givemon SPECIES_FROAKIE, 5
# 48 "data/maps/VanivilleTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 49 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_EventScript_WaterStarter_Text_1
# 50 "data/maps/VanivilleTown/scripts.pory"
	removeobject 2
# 51 "data/maps/VanivilleTown/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 52 "data/maps/VanivilleTown/scripts.pory"
	setvar VAR_NEED_TO_SELECT_MON, 1
# 53 "data/maps/VanivilleTown/scripts.pory"
	setflag FLAG_GET_STARTER
# 54 "data/maps/VanivilleTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 55 "data/maps/VanivilleTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 56 "data/maps/VanivilleTown/scripts.pory"
	call NicknamePartyMon
	goto VanivilleTown_EventScript_WaterStarter_1


VanivilleTown_EventScript_GrassStarter::
# 71 "data/maps/VanivilleTown/scripts.pory"
	lockall
# 72 "data/maps/VanivilleTown/scripts.pory"
	goto_if_unset FLAG_GET_STARTER, VanivilleTown_EventScript_GrassStarter_2
# 91 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_EventScript_FireStarter_Text_2
VanivilleTown_EventScript_GrassStarter_1:
# 93 "data/maps/VanivilleTown/scripts.pory"
	waitmessage
# 94 "data/maps/VanivilleTown/scripts.pory"
	releaseall
	end

VanivilleTown_EventScript_GrassStarter_2:
# 73 "data/maps/VanivilleTown/scripts.pory"
	showmonpic SPECIES_CHESPIN, 10, 3
# 74 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_EventScript_GrassStarter_Text_0, MSGBOX_YESNO
# 75 "data/maps/VanivilleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VanivilleTown_EventScript_GrassStarter_5
# 88 "data/maps/VanivilleTown/scripts.pory"
	hidemonpic
	goto VanivilleTown_EventScript_GrassStarter_1

VanivilleTown_EventScript_GrassStarter_5:
# 76 "data/maps/VanivilleTown/scripts.pory"
	givemon SPECIES_CHESPIN, 5
# 77 "data/maps/VanivilleTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 78 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_EventScript_GrassStarter_Text_1
# 79 "data/maps/VanivilleTown/scripts.pory"
	removeobject 3
# 80 "data/maps/VanivilleTown/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 81 "data/maps/VanivilleTown/scripts.pory"
	setvar VAR_NEED_TO_SELECT_MON, 1
# 82 "data/maps/VanivilleTown/scripts.pory"
	setflag FLAG_GET_STARTER
# 83 "data/maps/VanivilleTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 84 "data/maps/VanivilleTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 85 "data/maps/VanivilleTown/scripts.pory"
	call NicknamePartyMon
	goto VanivilleTown_EventScript_GrassStarter_1


NicknamePartyMon::
# 101 "data/maps/VanivilleTown/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 102 "data/maps/VanivilleTown/scripts.pory"
	hidemonpic
# 103 "data/maps/VanivilleTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 104 "data/maps/VanivilleTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 105 "data/maps/VanivilleTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


VanivilleTown_Trigger_NeedToSelectPokemon::
# 115 "data/maps/VanivilleTown/scripts.pory"
	lockall
# 116 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_Trigger_NeedToSelectPokemon_Text_0
# 117 "data/maps/VanivilleTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 118 "data/maps/VanivilleTown/scripts.pory"
	waitmovement 0
# 119 "data/maps/VanivilleTown/scripts.pory"
	releaseall
	return


# 122 "data/maps/VanivilleTown/scripts.pory"
StopPlayer:
# 123 "data/maps/VanivilleTown/scripts.pory"
	walk_down
	step_end

VanivilleTown_Trigger_Mom1::
# 128 "data/maps/VanivilleTown/scripts.pory"
	lockall
# 129 "data/maps/VanivilleTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 130 "data/maps/VanivilleTown/scripts.pory"
	waitmovement 0
# 131 "data/maps/VanivilleTown/scripts.pory"
	applymovement 1, MoveMom1
# 132 "data/maps/VanivilleTown/scripts.pory"
	waitmovement 0
# 133 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_Trigger_Mom1_Text_0
# 134 "data/maps/VanivilleTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 135 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_Trigger_Mom1_Text_1
# 136 "data/maps/VanivilleTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 137 "data/maps/VanivilleTown/scripts.pory"
	giveitem ITEM_POKE_BALL, 30
# 138 "data/maps/VanivilleTown/scripts.pory"
	setvar VAR_MOM_DIALOGUE, 1
# 139 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_Trigger_Mom1_Text_2
# 140 "data/maps/VanivilleTown/scripts.pory"
	waitmessage
# 141 "data/maps/VanivilleTown/scripts.pory"
	applymovement 1, MoveMomReturn1
# 142 "data/maps/VanivilleTown/scripts.pory"
	waitmovement 0
# 143 "data/maps/VanivilleTown/scripts.pory"
	releaseall
	end


# 148 "data/maps/VanivilleTown/scripts.pory"
MoveMom1:
# 149 "data/maps/VanivilleTown/scripts.pory"
	walk_up
# 150 "data/maps/VanivilleTown/scripts.pory"
	walk_right
# 150 "data/maps/VanivilleTown/scripts.pory"
	walk_right
# 150 "data/maps/VanivilleTown/scripts.pory"
	walk_right
# 150 "data/maps/VanivilleTown/scripts.pory"
	walk_right
# 151 "data/maps/VanivilleTown/scripts.pory"
	walk_up
# 151 "data/maps/VanivilleTown/scripts.pory"
	walk_up
# 152 "data/maps/VanivilleTown/scripts.pory"
	face_right
	step_end

# 155 "data/maps/VanivilleTown/scripts.pory"
MoveMomReturn1:
# 156 "data/maps/VanivilleTown/scripts.pory"
	walk_down
# 156 "data/maps/VanivilleTown/scripts.pory"
	walk_down
# 157 "data/maps/VanivilleTown/scripts.pory"
	walk_left
# 157 "data/maps/VanivilleTown/scripts.pory"
	walk_left
# 157 "data/maps/VanivilleTown/scripts.pory"
	walk_left
# 157 "data/maps/VanivilleTown/scripts.pory"
	walk_left
# 158 "data/maps/VanivilleTown/scripts.pory"
	walk_down
# 159 "data/maps/VanivilleTown/scripts.pory"
	face_right
	step_end

VanivilleTown_Trigger_Mom2::
# 163 "data/maps/VanivilleTown/scripts.pory"
	lockall
# 164 "data/maps/VanivilleTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 165 "data/maps/VanivilleTown/scripts.pory"
	waitmovement 0
# 166 "data/maps/VanivilleTown/scripts.pory"
	applymovement 1, MoveMom2
# 167 "data/maps/VanivilleTown/scripts.pory"
	waitmovement 0
# 168 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_Trigger_Mom1_Text_0
# 169 "data/maps/VanivilleTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 170 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_Trigger_Mom1_Text_1
# 171 "data/maps/VanivilleTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 172 "data/maps/VanivilleTown/scripts.pory"
	giveitem ITEM_POKE_BALL, 30
# 173 "data/maps/VanivilleTown/scripts.pory"
	setvar VAR_MOM_DIALOGUE, 1
# 174 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_Trigger_Mom1_Text_2
# 175 "data/maps/VanivilleTown/scripts.pory"
	waitmessage
# 176 "data/maps/VanivilleTown/scripts.pory"
	applymovement 1, MoveMomReturn2
# 177 "data/maps/VanivilleTown/scripts.pory"
	waitmovement 0
# 178 "data/maps/VanivilleTown/scripts.pory"
	releaseall
	end


# 183 "data/maps/VanivilleTown/scripts.pory"
MoveMom2:
# 184 "data/maps/VanivilleTown/scripts.pory"
	walk_up
# 185 "data/maps/VanivilleTown/scripts.pory"
	walk_right
# 185 "data/maps/VanivilleTown/scripts.pory"
	walk_right
# 185 "data/maps/VanivilleTown/scripts.pory"
	walk_right
# 185 "data/maps/VanivilleTown/scripts.pory"
	walk_right
# 186 "data/maps/VanivilleTown/scripts.pory"
	walk_up
# 187 "data/maps/VanivilleTown/scripts.pory"
	walk_right
	step_end

# 190 "data/maps/VanivilleTown/scripts.pory"
MoveMomReturn2:
# 191 "data/maps/VanivilleTown/scripts.pory"
	walk_left
# 192 "data/maps/VanivilleTown/scripts.pory"
	walk_down
# 193 "data/maps/VanivilleTown/scripts.pory"
	walk_left
# 193 "data/maps/VanivilleTown/scripts.pory"
	walk_left
# 193 "data/maps/VanivilleTown/scripts.pory"
	walk_left
# 193 "data/maps/VanivilleTown/scripts.pory"
	walk_left
# 194 "data/maps/VanivilleTown/scripts.pory"
	walk_down
# 195 "data/maps/VanivilleTown/scripts.pory"
	face_right
	step_end

VanivilleTown_Trigger_Mom3::
# 199 "data/maps/VanivilleTown/scripts.pory"
	lockall
# 200 "data/maps/VanivilleTown/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 201 "data/maps/VanivilleTown/scripts.pory"
	waitmovement 0
# 202 "data/maps/VanivilleTown/scripts.pory"
	applymovement 1, MoveMom3
# 203 "data/maps/VanivilleTown/scripts.pory"
	waitmovement 0
# 204 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_Trigger_Mom1_Text_0
# 205 "data/maps/VanivilleTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 206 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_Trigger_Mom1_Text_1
# 207 "data/maps/VanivilleTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 208 "data/maps/VanivilleTown/scripts.pory"
	giveitem ITEM_POKE_BALL, 30
# 209 "data/maps/VanivilleTown/scripts.pory"
	setvar VAR_MOM_DIALOGUE, 1
# 210 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_Trigger_Mom1_Text_2
# 211 "data/maps/VanivilleTown/scripts.pory"
	waitmessage
# 212 "data/maps/VanivilleTown/scripts.pory"
	applymovement 1, MoveMomReturn3
# 213 "data/maps/VanivilleTown/scripts.pory"
	waitmovement 0
# 214 "data/maps/VanivilleTown/scripts.pory"
	releaseall
	end


# 219 "data/maps/VanivilleTown/scripts.pory"
MoveMom3:
# 220 "data/maps/VanivilleTown/scripts.pory"
	walk_up
# 221 "data/maps/VanivilleTown/scripts.pory"
	walk_right
# 221 "data/maps/VanivilleTown/scripts.pory"
	walk_right
# 221 "data/maps/VanivilleTown/scripts.pory"
	walk_right
# 221 "data/maps/VanivilleTown/scripts.pory"
	walk_right
# 222 "data/maps/VanivilleTown/scripts.pory"
	walk_up
# 222 "data/maps/VanivilleTown/scripts.pory"
	walk_up
# 223 "data/maps/VanivilleTown/scripts.pory"
	walk_right
# 223 "data/maps/VanivilleTown/scripts.pory"
	walk_right
	step_end

# 226 "data/maps/VanivilleTown/scripts.pory"
MoveMomReturn3:
# 227 "data/maps/VanivilleTown/scripts.pory"
	walk_left
# 227 "data/maps/VanivilleTown/scripts.pory"
	walk_left
# 228 "data/maps/VanivilleTown/scripts.pory"
	walk_down
# 228 "data/maps/VanivilleTown/scripts.pory"
	walk_down
# 229 "data/maps/VanivilleTown/scripts.pory"
	walk_left
# 229 "data/maps/VanivilleTown/scripts.pory"
	walk_left
# 229 "data/maps/VanivilleTown/scripts.pory"
	walk_left
# 229 "data/maps/VanivilleTown/scripts.pory"
	walk_left
# 230 "data/maps/VanivilleTown/scripts.pory"
	walk_down
# 231 "data/maps/VanivilleTown/scripts.pory"
	face_right
	step_end

VanivilleTown_ObjectScript_LittleGirl::
# 236 "data/maps/VanivilleTown/scripts.pory"
	lockall
# 237 "data/maps/VanivilleTown/scripts.pory"
	faceplayer
# 238 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_ObjectScript_LittleGirl_Text_0
# 239 "data/maps/VanivilleTown/scripts.pory"
	waitmessage
# 240 "data/maps/VanivilleTown/scripts.pory"
	releaseall
	return


VanivilleTown_ObjectScript_Hiker::
# 244 "data/maps/VanivilleTown/scripts.pory"
	lockall
# 245 "data/maps/VanivilleTown/scripts.pory"
	faceplayer
# 246 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_ObjectScript_Hiker_Text_0
# 247 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_ObjectScript_Hiker_Text_1
# 248 "data/maps/VanivilleTown/scripts.pory"
	waitmessage
# 249 "data/maps/VanivilleTown/scripts.pory"
	releaseall
	return


VanivilleTown_ObjectScript_Boy::
# 253 "data/maps/VanivilleTown/scripts.pory"
	lockall
# 254 "data/maps/VanivilleTown/scripts.pory"
	faceplayer
# 255 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_ObjectScript_Boy_Text_0
# 256 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_ObjectScript_Boy_Text_1
# 257 "data/maps/VanivilleTown/scripts.pory"
	waitmessage
# 258 "data/maps/VanivilleTown/scripts.pory"
	releaseall
	return


VanivilleTown_ObjectScript_Hiker2::
# 262 "data/maps/VanivilleTown/scripts.pory"
	lockall
# 263 "data/maps/VanivilleTown/scripts.pory"
	faceplayer
# 264 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_ObjectScript_Hiker2_Text_0
# 265 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_ObjectScript_Hiker2_Text_1
# 266 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_ObjectScript_Hiker2_Text_2
# 267 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_ObjectScript_Hiker2_Text_3
# 268 "data/maps/VanivilleTown/scripts.pory"
	waitmessage
# 269 "data/maps/VanivilleTown/scripts.pory"
	releaseall
	return


VanivilleTown_ObjectScript_Father::
# 273 "data/maps/VanivilleTown/scripts.pory"
	lockall
# 274 "data/maps/VanivilleTown/scripts.pory"
	faceplayer
# 275 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_ObjectScript_Father_Text_0
# 276 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_ObjectScript_Father_Text_1
# 277 "data/maps/VanivilleTown/scripts.pory"
	waitmessage
# 278 "data/maps/VanivilleTown/scripts.pory"
	releaseall
	return


VanivilleTown_ObjectScript_CalemMom::
# 282 "data/maps/VanivilleTown/scripts.pory"
	lockall
# 283 "data/maps/VanivilleTown/scripts.pory"
	faceplayer
# 284 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_ObjectScript_CalemMom_Text_0
# 285 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_ObjectScript_CalemMom_Text_1
# 286 "data/maps/VanivilleTown/scripts.pory"
	waitmessage
# 287 "data/maps/VanivilleTown/scripts.pory"
	releaseall
	return


VanivilleTown_ObjectScript_MomIdle::
# 291 "data/maps/VanivilleTown/scripts.pory"
	lockall
# 292 "data/maps/VanivilleTown/scripts.pory"
	faceplayer
# 293 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_ObjectScript_MomIdle_Text_0
# 294 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_ObjectScript_MomIdle_Text_1
# 295 "data/maps/VanivilleTown/scripts.pory"
	waitmessage
# 296 "data/maps/VanivilleTown/scripts.pory"
	releaseall
	return


VanivilleTown_ObjectScript_Sign::
# 300 "data/maps/VanivilleTown/scripts.pory"
	lockall
# 301 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_ObjectScript_Sign_Text_0
# 304 "data/maps/VanivilleTown/scripts.pory"
	msgbox VanivilleTown_ObjectScript_Sign_Text_1
# 305 "data/maps/VanivilleTown/scripts.pory"
	waitmessage
# 306 "data/maps/VanivilleTown/scripts.pory"
	releaseall
	return


VanivilleTown_EventScript_FireStarter_Text_0:
# 17 "data/maps/VanivilleTown/scripts.pory"
	.string "Do you want to choose Fennekin?$"

VanivilleTown_EventScript_FireStarter_Text_1:
# 21 "data/maps/VanivilleTown/scripts.pory"
	.string "Recieved Fennekin!$"

VanivilleTown_EventScript_FireStarter_Text_2:
# 33 "data/maps/VanivilleTown/scripts.pory"
	.string "No need to be greedy!$"

VanivilleTown_EventScript_WaterStarter_Text_0:
# 45 "data/maps/VanivilleTown/scripts.pory"
	.string "Do you want to choose Froakie?$"

VanivilleTown_EventScript_WaterStarter_Text_1:
# 49 "data/maps/VanivilleTown/scripts.pory"
	.string "Recieved Froakie!$"

VanivilleTown_EventScript_GrassStarter_Text_0:
# 74 "data/maps/VanivilleTown/scripts.pory"
	.string "Do you want to choose Chespin?$"

VanivilleTown_EventScript_GrassStarter_Text_1:
# 78 "data/maps/VanivilleTown/scripts.pory"
	.string "Recieved Chespin!$"

NicknamePartyMon_Text_0:
# 101 "data/maps/VanivilleTown/scripts.pory"
	.string "Would you like to give it a nickname?$"

VanivilleTown_Trigger_NeedToSelectPokemon_Text_0:
# 116 "data/maps/VanivilleTown/scripts.pory"
	.string "You must select a Pokemon!$"

VanivilleTown_Trigger_Mom1_Text_0:
# 133 "data/maps/VanivilleTown/scripts.pory"
	.string "Oh good, you picked a Pokemon. Before\n"
	.string "you leave, you will need this.$"

VanivilleTown_Trigger_Mom1_Text_1:
# 135 "data/maps/VanivilleTown/scripts.pory"
	.string "Recieved the Running Shoes!$"

VanivilleTown_Trigger_Mom1_Text_2:
# 139 "data/maps/VanivilleTown/scripts.pory"
	.string "Now go enjoy your adventure! I'll be\n"
	.string "here if you ever need anything.$"

VanivilleTown_ObjectScript_LittleGirl_Text_0:
# 238 "data/maps/VanivilleTown/scripts.pory"
	.string "I wish I had a Pokemon...$"

VanivilleTown_ObjectScript_Hiker_Text_0:
# 246 "data/maps/VanivilleTown/scripts.pory"
	.string "Science is amazing!$"

VanivilleTown_ObjectScript_Hiker_Text_1:
# 247 "data/maps/VanivilleTown/scripts.pory"
	.string "You can join the Pokemon Demake X\n"
	.string "Discord server using the code: AAAAAA$"

VanivilleTown_ObjectScript_Boy_Text_0:
# 255 "data/maps/VanivilleTown/scripts.pory"
	.string "Vaniville Town is pretty nice, right?$"

VanivilleTown_ObjectScript_Boy_Text_1:
# 256 "data/maps/VanivilleTown/scripts.pory"
	.string "The Kalos region has lots of cool towns!\n"
	.string "I want to see them all when I get big!$"

VanivilleTown_ObjectScript_Hiker2_Text_0:
# 264 "data/maps/VanivilleTown/scripts.pory"
	.string "Oh, would you look at that! You've got\n"
	.string "on a pair of Running Shoes, my young\l"
	.string "friend!$"

VanivilleTown_ObjectScript_Hiker2_Text_1:
# 265 "data/maps/VanivilleTown/scripts.pory"
	.string "I can't see a pair without thinking of\n"
	.string "the old jingle they used to play in their\l"
	.string "commercials...$"

VanivilleTown_ObjectScript_Hiker2_Text_2:
# 266 "data/maps/VanivilleTown/scripts.pory"
	.string "To dash, dash, dash! In a flash, flash,\n"
	.string "flash! Press the B Button to dash in a\l"
	.string "flash!$"

VanivilleTown_ObjectScript_Hiker2_Text_3:
# 267 "data/maps/VanivilleTown/scripts.pory"
	.string "Yeah, just press that B Button!$"

VanivilleTown_ObjectScript_Father_Text_0:
# 275 "data/maps/VanivilleTown/scripts.pory"
	.string "If the time comes, I hope I can entrust\n"
	.string "my son with a Pokemon.$"

VanivilleTown_ObjectScript_Father_Text_1:
# 276 "data/maps/VanivilleTown/scripts.pory"
	.string "Going out on a Pokemon journey really\n"
	.string "helps you mature, you see.$"

VanivilleTown_ObjectScript_CalemMom_Text_0:
# 284 "data/maps/VanivilleTown/scripts.pory"
	.string "Hmm! I like the look on your Pokemon's\n"
	.string "face.$"

VanivilleTown_ObjectScript_CalemMom_Text_1:
# 285 "data/maps/VanivilleTown/scripts.pory"
	.string "I bet that if you and my Calem battled\n"
	.string "each other, you'd both grow from the\l"
	.string "experience!$"

VanivilleTown_ObjectScript_MomIdle_Text_0:
# 293 "data/maps/VanivilleTown/scripts.pory"
	.string "The connection that I feel with my\n"
	.string "Pokemon...$"

VanivilleTown_ObjectScript_MomIdle_Text_1:
# 294 "data/maps/VanivilleTown/scripts.pory"
	.string "I want you to feel that kind of\n"
	.string "closeness with your Pokemon as well.$"

VanivilleTown_ObjectScript_Sign_Text_0:
# 301 "data/maps/VanivilleTown/scripts.pory"
	.string "Vaniville Town\n"
	.string "A town whose flower is about to bloom.$"

VanivilleTown_ObjectScript_Sign_Text_1:
# 304 "data/maps/VanivilleTown/scripts.pory"
	.string "has been set$"

VanivilleTown_NotChosen::
# 109 "data/maps/VanivilleTown/scripts.pory"
	.string "Pokemon was not chosen.$"
