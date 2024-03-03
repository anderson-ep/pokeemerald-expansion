# 1 "data/maps/SantaluneCity/scripts.pory"

# 2 "data/maps/SantaluneCity/scripts.pory"
SantaluneCity_BradfordTradeSequence::
# 3 "data/maps/SantaluneCity/scripts.pory"

# 4 "data/maps/SantaluneCity/scripts.pory"
    lock
# 5 "data/maps/SantaluneCity/scripts.pory"
    faceplayer
# 6 "data/maps/SantaluneCity/scripts.pory"
    goto_if_set FLAG_INGAME_BRADFORD_TRADE, SantaluneCity_ObjectScript_BradfordTradeCompleted
# 7 "data/maps/SantaluneCity/scripts.pory"

# 8 "data/maps/SantaluneCity/scripts.pory"
    setvar VAR_0x8008, INGAME_TRADE_MELTAN
# 9 "data/maps/SantaluneCity/scripts.pory"
    copyvar VAR_0x8004, VAR_0x8008
# 10 "data/maps/SantaluneCity/scripts.pory"
    specialvar VAR_0x8009, GetInGameTradeSpeciesInfo
# 11 "data/maps/SantaluneCity/scripts.pory"
    msgbox SantaluneCity_ObjectScript_BradfordBeforeTrade_Text, MSGBOX_YESNO
# 12 "data/maps/SantaluneCity/scripts.pory"
    goto_if_eq VAR_RESULT, NO, SantaluneCity_ObjectScript_BradfordTradeDecline
# 13 "data/maps/SantaluneCity/scripts.pory"

# 14 "data/maps/SantaluneCity/scripts.pory"
    special ChoosePartyMon
# 15 "data/maps/SantaluneCity/scripts.pory"
    waitstate
# 16 "data/maps/SantaluneCity/scripts.pory"
    goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SantaluneCity_ObjectScript_BradfordTradeDecline
# 17 "data/maps/SantaluneCity/scripts.pory"
    copyvar VAR_0x8005, VAR_0x8004
# 18 "data/maps/SantaluneCity/scripts.pory"
    specialvar VAR_RESULT, GetTradeSpecies
# 19 "data/maps/SantaluneCity/scripts.pory"
    goto_if_ne VAR_RESULT, VAR_0x8009, SantaluneCity_ObjectScript_BradfordTradeWrongMon
# 20 "data/maps/SantaluneCity/scripts.pory"

# 21 "data/maps/SantaluneCity/scripts.pory"
    copyvar VAR_0x8004, VAR_0x8008
# 22 "data/maps/SantaluneCity/scripts.pory"
    special CreateInGameTradePokemon
# 23 "data/maps/SantaluneCity/scripts.pory"
    special DoInGameTradeScene
# 24 "data/maps/SantaluneCity/scripts.pory"
    waitstate
# 25 "data/maps/SantaluneCity/scripts.pory"

# 26 "data/maps/SantaluneCity/scripts.pory"
    msgbox SantaluneCity_ObjectScript_BradfordTradeThanks_Text, MSGBOX_DEFAULT
# 27 "data/maps/SantaluneCity/scripts.pory"
    setflag FLAG_INGAME_BRADFORD_TRADE
# 28 "data/maps/SantaluneCity/scripts.pory"
    release
# 29 "data/maps/SantaluneCity/scripts.pory"
    end
# 30 "data/maps/SantaluneCity/scripts.pory"

# 31 "data/maps/SantaluneCity/scripts.pory"

# 32 "data/maps/SantaluneCity/scripts.pory"

# 33 "data/maps/SantaluneCity/scripts.pory"
SantaluneCity_ObjectScript_BradfordTradeCompleted::
# 34 "data/maps/SantaluneCity/scripts.pory"
    msgbox SantaluneCity_ObjectScript_BradfordTradeCompleted_Text, MSGBOX_DEFAULT
# 35 "data/maps/SantaluneCity/scripts.pory"
    release
# 36 "data/maps/SantaluneCity/scripts.pory"
    end
# 37 "data/maps/SantaluneCity/scripts.pory"

# 38 "data/maps/SantaluneCity/scripts.pory"
SantaluneCity_ObjectScript_BradfordTradeWrongMon::
# 39 "data/maps/SantaluneCity/scripts.pory"
    bufferspeciesname STR_VAR_1, VAR_0x8009
# 40 "data/maps/SantaluneCity/scripts.pory"
    msgbox SantaluneCity_ObjectScript_BradfordTradeWrongMon_Text, MSGBOX_DEFAULT
# 41 "data/maps/SantaluneCity/scripts.pory"
    release
# 42 "data/maps/SantaluneCity/scripts.pory"
    end
# 43 "data/maps/SantaluneCity/scripts.pory"

# 44 "data/maps/SantaluneCity/scripts.pory"
SantaluneCity_ObjectScript_BradfordTradeDecline::
# 45 "data/maps/SantaluneCity/scripts.pory"
    msgbox SantaluneCity_ObjectScript_BradfordTradeDecline_Text, MSGBOX_DEFAULT
# 46 "data/maps/SantaluneCity/scripts.pory"
    release
# 47 "data/maps/SantaluneCity/scripts.pory"
    end
# 48 "data/maps/SantaluneCity/scripts.pory"

# 49 "data/maps/SantaluneCity/scripts.pory"
SantaluneCity_ObjectScript_BradfordTradeCompleted_Text::
# 50 "data/maps/SantaluneCity/scripts.pory"
    .string "I hope you're treating Rivet well!$"
# 51 "data/maps/SantaluneCity/scripts.pory"

# 52 "data/maps/SantaluneCity/scripts.pory"
SantaluneCity_ObjectScript_BradfordBeforeTrade_Text::
# 53 "data/maps/SantaluneCity/scripts.pory"
    .string "Are you interested in a Meltan?\n"
# 54 "data/maps/SantaluneCity/scripts.pory"
    .string "I'll trade you it for a Stunky!$"
# 55 "data/maps/SantaluneCity/scripts.pory"

# 56 "data/maps/SantaluneCity/scripts.pory"
SantaluneCity_ObjectScript_BradfordTradeDecline_Text:: 
# 57 "data/maps/SantaluneCity/scripts.pory"
    .string "How unfortunate.$"
# 58 "data/maps/SantaluneCity/scripts.pory"

# 59 "data/maps/SantaluneCity/scripts.pory"
SantaluneCity_ObjectScript_BradfordTradeWrongMon_Text::
# 60 "data/maps/SantaluneCity/scripts.pory"
    .string "That's not what I'm looking for!$"
# 61 "data/maps/SantaluneCity/scripts.pory"

# 62 "data/maps/SantaluneCity/scripts.pory"
SantaluneCity_ObjectScript_BradfordTradeThanks_Text::
# 63 "data/maps/SantaluneCity/scripts.pory"
    .string "Thank you!$"

SantaluneCity_MapScripts::
	.byte 0


SantaluneCity_SignScript_Forest::
# 73 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 74 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_SignScript_Forest_Text_0
# 75 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 76 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_HappinessGirl::
# 82 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 83 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 84 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_HappinessGirl_Text_0
# 85 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_HappinessGirl_Text_1
# 86 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 87 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_EvoGirl::
# 91 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 92 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 93 "data/maps/SantaluneCity/scripts.pory"
	goto_if_unset FLAG_EVERSTONE, SantaluneCity_ObjectScript_EvoGirl_2
# 99 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_EvoGirl_Text_2
SantaluneCity_ObjectScript_EvoGirl_1:
# 101 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 102 "data/maps/SantaluneCity/scripts.pory"
	release
	return

SantaluneCity_ObjectScript_EvoGirl_2:
# 94 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_EvoGirl_Text_0
# 95 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_EvoGirl_Text_1
# 96 "data/maps/SantaluneCity/scripts.pory"
	giveitem ITEM_EVERSTONE
# 97 "data/maps/SantaluneCity/scripts.pory"
	setflag FLAG_EVERSTONE
	goto SantaluneCity_ObjectScript_EvoGirl_1


SantaluneCity_ObjectScript_BoyBug::
# 106 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 107 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 108 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_BoyBug_Text_0
# 109 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 110 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_WomanTrade::
# 114 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 115 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 116 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_WomanTrade_Text_0
# 117 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 118 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_BerryShop::
# 122 "data/maps/SantaluneCity/scripts.pory"
	lock
# 123 "data/maps/SantaluneCity/scripts.pory"
	message SantaluneCity_ObjectScript_BerryShop_Text_0
# 124 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 125 "data/maps/SantaluneCity/scripts.pory"
	pokemart SantaluneBerryShopItems
# 126 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_BerryShop_Text_1
# 127 "data/maps/SantaluneCity/scripts.pory"
	release
	return


	.align 2
# 130 "data/maps/SantaluneCity/scripts.pory"
SantaluneBerryShopItems:
# 131 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 132 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 133 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 134 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 135 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 136 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_NONE

SantaluneCity_ObjectScript_BerryWoman::
# 140 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 141 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 142 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_BerryWoman_Text_0
# 143 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 144 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_BerryBoy::
# 148 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 149 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 150 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_BerryBoy_Text_0
# 151 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 152 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_Mart::
# 156 "data/maps/SantaluneCity/scripts.pory"
	lock
# 157 "data/maps/SantaluneCity/scripts.pory"
	message SantaluneCity_ObjectScript_Mart_Text_0
# 158 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 159 "data/maps/SantaluneCity/scripts.pory"
	pokemart SantaluneCityMartShopItems
# 160 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_BerryShop_Text_1
# 161 "data/maps/SantaluneCity/scripts.pory"
	release
	return


	.align 2
# 164 "data/maps/SantaluneCity/scripts.pory"
SantaluneCityMartShopItems:
# 165 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_POTION
# 166 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 167 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 168 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_POKE_BALL
# 169 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 170 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_NONE

SantaluneCity_ObjectScript_MartBoy::
# 174 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 175 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 176 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_MartBoy_Text_0
# 177 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 178 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_Twin1::
# 182 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 183 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 184 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_Twin1_Text_0
# 185 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 186 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_Twin2::
# 190 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 191 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 192 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_Twin2_Text_0
# 193 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 194 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_CenterHiker::
# 198 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 199 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 200 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_CenterHiker_Text_0
# 201 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 202 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_PickleGirl::
# 206 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 207 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 208 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_PickleGirl_Text_0
# 209 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 210 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_CafeCook::
# 214 "data/maps/SantaluneCity/scripts.pory"
	lock
# 215 "data/maps/SantaluneCity/scripts.pory"
	message SantaluneCity_ObjectScript_CafeCook_Text_0
# 216 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 217 "data/maps/SantaluneCity/scripts.pory"
	pokemart SantaluneCityCafeItems
# 218 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_BerryShop_Text_1
# 219 "data/maps/SantaluneCity/scripts.pory"
	release
	return


	.align 2
# 222 "data/maps/SantaluneCity/scripts.pory"
SantaluneCityCafeItems:
# 223 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_PEWTER_CRUNCHIES
# 224 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_RAGE_CANDY_BAR
# 225 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 226 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_OLD_GATEAU
# 227 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_CASTELIACONE
# 228 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_LUMIOSE_GALETTE
# 229 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_SHALOUR_SABLE
# 230 "data/maps/SantaluneCity/scripts.pory"
	.2byte ITEM_BIG_MALASADA
	.2byte ITEM_NONE

SantaluneCity_ObjectScript_SchoolBoy1::
# 234 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 235 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 236 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_SchoolBoy1_Text_0
# 237 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 238 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_SchoolGirl1::
# 242 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 243 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 244 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_SchoolGirl1_Text_0
# 245 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 246 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_SchoolGirl2::
# 250 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 251 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 252 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_SchoolGirl2_Text_0
# 253 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 254 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_SchoolBoy2::
# 258 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 259 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 260 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_SchoolBoy2_Text_0
# 261 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 262 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_OutsideFatman::
# 268 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 269 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 270 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_OutsideFatman_Text_0
# 271 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 272 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_OutsideGirl1::
# 276 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 277 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 278 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_OutsideGirl1_Text_0
# 279 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 280 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_OutsideLittleGirl::
# 284 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 285 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 286 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_OutsideLittleGirl_Text_0
# 287 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 288 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_OutsideGirl2::
# 292 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 293 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 294 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_OutsideGirl2_Text_0
# 295 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 296 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_ObjectScript_OutsideGirl3::
# 300 "data/maps/SantaluneCity/scripts.pory"
	lockall
# 301 "data/maps/SantaluneCity/scripts.pory"
	faceplayer
# 302 "data/maps/SantaluneCity/scripts.pory"
	msgbox SantaluneCity_ObjectScript_OutsideGirl3_Text_0
# 303 "data/maps/SantaluneCity/scripts.pory"
	waitmessage
# 304 "data/maps/SantaluneCity/scripts.pory"
	release
	return


SantaluneCity_SignScript_Forest_Text_0:
# 74 "data/maps/SantaluneCity/scripts.pory"
	.string "Santalune Forest Ahead$"

SantaluneCity_ObjectScript_HappinessGirl_Text_0:
# 84 "data/maps/SantaluneCity/scripts.pory"
	.string "If you love your Pokemon, even if it\n"
	.string "changes its appearance, you'll stay\l"
	.string "connected with it.$"

SantaluneCity_ObjectScript_HappinessGirl_Text_1:
# 85 "data/maps/SantaluneCity/scripts.pory"
	.string "Let's see...\n"
	.string "Oh wait, I forgot. Happiness isn't in\l"
	.string "this hack. Happiness Pokemon now\l"
	.string "evolve by level up and Return is base\l"
	.string "102 power! Isn't that neat!$"

SantaluneCity_ObjectScript_EvoGirl_Text_0:
# 94 "data/maps/SantaluneCity/scripts.pory"
	.string "When a Pokemon is evolving and you\n"
	.string "don't want it to, try pressing the B\l"
	.string "Button!$"

SantaluneCity_ObjectScript_EvoGirl_Text_1:
# 95 "data/maps/SantaluneCity/scripts.pory"
	.string "Or just take this...$"

SantaluneCity_ObjectScript_EvoGirl_Text_2:
# 99 "data/maps/SantaluneCity/scripts.pory"
	.string "Aren't Everstones neat!$"

SantaluneCity_ObjectScript_BoyBug_Text_0:
# 108 "data/maps/SantaluneCity/scripts.pory"
	.string "The Gym Leader in this city is the\n"
	.string "fantastic photographer--Viola! I'll\l"
	.string "have to go find some Bug-type Pokemon\l"
	.string "if I want to have any of my pictures\l"
	.string "displayed in the Gym!$"

SantaluneCity_ObjectScript_WomanTrade_Text_0:
# 116 "data/maps/SantaluneCity/scripts.pory"
	.string "Pokemon that you get from trades tend\n"
	.string "to grow easily, and they quickly get\l"
	.string "stronger. But you know, if you don't\l"
	.string "have enough Gym Badges, they might not\l"
	.string "listen to your orders!$"

SantaluneCity_ObjectScript_BerryShop_Text_0:
# 123 "data/maps/SantaluneCity/scripts.pory"
	.string "Are you looking for berries?$"

SantaluneCity_ObjectScript_BerryShop_Text_1:
# 126 "data/maps/SantaluneCity/scripts.pory"
	.string "Please come again!$"

SantaluneCity_ObjectScript_BerryWoman_Text_0:
# 142 "data/maps/SantaluneCity/scripts.pory"
	.string "I still remember my own first big\n"
	.string "adventure. I went all the way to the\l"
	.string "next town with my Pokemon. I'd heard\l"
	.string "that wild Pokemon jump out at people...\l"
	.string "I can still feel my heart racing like it\l"
	.string "was yesterday!$"

SantaluneCity_ObjectScript_BerryBoy_Text_0:
# 150 "data/maps/SantaluneCity/scripts.pory"
	.string "This place is so basic...$"

SantaluneCity_ObjectScript_Mart_Text_0:
# 157 "data/maps/SantaluneCity/scripts.pory"
	.string "Welcome to the Poke Mart!\n"
	.string "May I help you?$"

SantaluneCity_ObjectScript_MartBoy_Text_0:
# 176 "data/maps/SantaluneCity/scripts.pory"
	.string "A Great Ball is just a really great\n"
	.string "Pokeball! Get it? It makes it even\l"
	.string "easier to catch Pokemon!$"

SantaluneCity_ObjectScript_Twin1_Text_0:
# 184 "data/maps/SantaluneCity/scripts.pory"
	.string "Aww, I wanna catch a Pikachu, too! So\n"
	.string "lucky! Pika, pika, pika!$"

SantaluneCity_ObjectScript_Twin2_Text_0:
# 192 "data/maps/SantaluneCity/scripts.pory"
	.string "Did you see any Pikachu in Santalune\n"
	.string "Forest? I really want to become friends\l"
	.string "with a Pikachu!$"

SantaluneCity_ObjectScript_CenterHiker_Text_0:
# 200 "data/maps/SantaluneCity/scripts.pory"
	.string "Pokemon are easier to catch if you make\n"
	.string "them sleep or paralyze them first!$"

SantaluneCity_ObjectScript_PickleGirl_Text_0:
# 208 "data/maps/SantaluneCity/scripts.pory"
	.string "I sure do love pickles!$"

SantaluneCity_ObjectScript_CafeCook_Text_0:
# 215 "data/maps/SantaluneCity/scripts.pory"
	.string "I have traveled the world for the best\n"
	.string "tastes, what can I serve you?$"

SantaluneCity_ObjectScript_SchoolBoy1_Text_0:
# 236 "data/maps/SantaluneCity/scripts.pory"
	.string "You've got your Pokemon holding items\n"
	.string "like you know what's going on, right?$"

SantaluneCity_ObjectScript_SchoolGirl1_Text_0:
# 244 "data/maps/SantaluneCity/scripts.pory"
	.string "Moves have types, too, you know? If\n"
	.string "your Pokemon uses a move that's the\l"
	.string "same type as the Pokemon, that move's\l"
	.string "power will go up!$"

SantaluneCity_ObjectScript_SchoolGirl2_Text_0:
# 252 "data/maps/SantaluneCity/scripts.pory"
	.string "Type matchups, huh? So, Water is good\n"
	.string "for Fire, and Fire works well against\l"
	.string "Grass...\n"
	.string "And Grass is strong against\l"
	.string "Water--right!$"

SantaluneCity_ObjectScript_SchoolBoy2_Text_0:
# 260 "data/maps/SantaluneCity/scripts.pory"
	.string "Even if you catch a wild Pokemon, your\n"
	.string "team's Pokemon will still grow. I know it\l"
	.string "because one of my Pokemon leveled up\l"
	.string "when it was fighting a battle like that!$"

SantaluneCity_ObjectScript_OutsideFatman_Text_0:
# 270 "data/maps/SantaluneCity/scripts.pory"
	.string "Walking through tall grass is great fun.\n"
	.string "All kinds of Pokemon jump out at you!$"

SantaluneCity_ObjectScript_OutsideGirl1_Text_0:
# 278 "data/maps/SantaluneCity/scripts.pory"
	.string "Pokemon sure are mysterious! I learned\n"
	.string "all kinds of things at the Trainers'\l"
	.string "School. It was surprising!$"

SantaluneCity_ObjectScript_OutsideLittleGirl_Text_0:
# 286 "data/maps/SantaluneCity/scripts.pory"
	.string "Pokemon love yummy treats just as much\n"
	.string "as you or me!$"

SantaluneCity_ObjectScript_OutsideGirl2_Text_0:
# 294 "data/maps/SantaluneCity/scripts.pory"
	.string "What can Trainers do to reward their\n"
	.string "Pokemon for working hard?$"

SantaluneCity_ObjectScript_OutsideGirl3_Text_0:
# 302 "data/maps/SantaluneCity/scripts.pory"
	.string "If you master type matchups, then even\n"
	.string "strong opponents will be a breeze for\l"
	.string "you to beat!$"
