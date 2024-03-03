AquacordeTown_PokeCenter_MapScripts::
# 2 "data/maps/AquacordeTown_PokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AquacordeTown_PokeCenter_OnTransition
# 3 "data/maps/AquacordeTown_PokeCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


AquacordeTown_PokeCenter_OnTransition::
# 7 "data/maps/AquacordeTown_PokeCenter/scripts.pory"
	setrespawn HEAL_LOCATION_AQUACORDE_TOWN
	return


AquacordeTown_PokeCenter_Nurse::
# 11 "data/maps/AquacordeTown_PokeCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 12 "data/maps/AquacordeTown_PokeCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 13 "data/maps/AquacordeTown_PokeCenter/scripts.pory"
	waitmessage
# 14 "data/maps/AquacordeTown_PokeCenter/scripts.pory"
	waitbuttonpress
# 15 "data/maps/AquacordeTown_PokeCenter/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterHeal
# 16 "data/maps/AquacordeTown_PokeCenter/scripts.pory"
	release
	end


# 20 "data/maps/AquacordeTown_PokeCenter/scripts.pory"
AfterHeal:
# 21 "data/maps/AquacordeTown_PokeCenter/scripts.pory"
	face_down
	step_end
