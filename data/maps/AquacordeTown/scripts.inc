AquacordeTown_MapScripts::
	.byte 0


AquacordeTown_ObjectScript_Woman::
# 5 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 6 "data/maps/AquacordeTown/scripts.pory"
	faceplayer
# 7 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_Woman_Text_0, MSGBOX_YESNO
# 8 "data/maps/AquacordeTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq AquacordeTown_ObjectScript_Woman_2
# 11 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_Woman_Text_2
AquacordeTown_ObjectScript_Woman_1:
# 13 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 14 "data/maps/AquacordeTown/scripts.pory"
	releaseall
	return

AquacordeTown_ObjectScript_Woman_2:
# 9 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_Woman_Text_1
	goto AquacordeTown_ObjectScript_Woman_1


AquacordeTown_ObjectScript_MartEmployeeWander::
# 18 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 19 "data/maps/AquacordeTown/scripts.pory"
	faceplayer
# 20 "data/maps/AquacordeTown/scripts.pory"
	goto_if_unset FLAG_AQUACORDE_MART_EMPLOYEE, AquacordeTown_ObjectScript_MartEmployeeWander_2
# 25 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_MartEmployeeWander_Text_1
AquacordeTown_ObjectScript_MartEmployeeWander_1:
# 27 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 28 "data/maps/AquacordeTown/scripts.pory"
	releaseall
	return

AquacordeTown_ObjectScript_MartEmployeeWander_2:
# 21 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_MartEmployeeWander_Text_0
# 22 "data/maps/AquacordeTown/scripts.pory"
	giveitem ITEM_POTION
# 23 "data/maps/AquacordeTown/scripts.pory"
	setflag FLAG_AQUACORDE_MART_EMPLOYEE
	goto AquacordeTown_ObjectScript_MartEmployeeWander_1


AquacordeTown_ObjectScript_LittleGirl::
# 32 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 33 "data/maps/AquacordeTown/scripts.pory"
	faceplayer
# 34 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_LittleGirl_Text_0
# 35 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 36 "data/maps/AquacordeTown/scripts.pory"
	release
	return


AquacordeTown_ObjectScript_LittleBoy::
# 40 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 41 "data/maps/AquacordeTown/scripts.pory"
	faceplayer
# 42 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_LittleBoy_Text_0
# 43 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 44 "data/maps/AquacordeTown/scripts.pory"
	release
	return


AquacordeTown_ObjectScript_FatMan::
# 49 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 50 "data/maps/AquacordeTown/scripts.pory"
	faceplayer
# 51 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_FatMan_Text_0
# 52 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_FatMan_Text_1
# 53 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 54 "data/maps/AquacordeTown/scripts.pory"
	release
	return


AquacordeTown_ObjectScript_GayMan1::
# 58 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 59 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_GayMan1_Text_0
# 60 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 61 "data/maps/AquacordeTown/scripts.pory"
	release
	return


AquacordeTown_ObjectScript_GayMan2::
# 65 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 66 "data/maps/AquacordeTown/scripts.pory"
	faceplayer
# 67 "data/maps/AquacordeTown/scripts.pory"
	goto_if_unset FLAG_DRACULA_FLOW, AquacordeTown_ObjectScript_GayMan2_2
# 72 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_GayMan2_Text_1
AquacordeTown_ObjectScript_GayMan2_1:
# 74 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 75 "data/maps/AquacordeTown/scripts.pory"
	release
	return

AquacordeTown_ObjectScript_GayMan2_2:
# 68 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_GayMan2_Text_0
# 69 "data/maps/AquacordeTown/scripts.pory"
	giveitem ITEM_COVERT_CLOAK
# 70 "data/maps/AquacordeTown/scripts.pory"
	setflag FLAG_DRACULA_FLOW
	goto AquacordeTown_ObjectScript_GayMan2_1


AquacordeTown_ObjectScript_PokeballMart::
# 79 "data/maps/AquacordeTown/scripts.pory"
	lock
# 80 "data/maps/AquacordeTown/scripts.pory"
	message AquacordeTown_ObjectScript_PokeballMart_Text_0
# 81 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 82 "data/maps/AquacordeTown/scripts.pory"
	pokemart PokeballMartItems
# 83 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_PokeballMart_Text_1
# 84 "data/maps/AquacordeTown/scripts.pory"
	release
	return


	.align 2
# 87 "data/maps/AquacordeTown/scripts.pory"
PokeballMartItems:
# 88 "data/maps/AquacordeTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 89 "data/maps/AquacordeTown/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 90 "data/maps/AquacordeTown/scripts.pory"
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_NONE

AquacordeTown_ObjectScript_MartLittleGirl::
# 94 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 95 "data/maps/AquacordeTown/scripts.pory"
	faceplayer
# 96 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_MartLittleGirl_Text_0
# 97 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 98 "data/maps/AquacordeTown/scripts.pory"
	release
	return


AquacordeTown_ObjectScript_MartGirl::
# 102 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 103 "data/maps/AquacordeTown/scripts.pory"
	faceplayer
# 104 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_MartGirl_Text_0
# 105 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_MartGirl_Text_1
# 106 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 107 "data/maps/AquacordeTown/scripts.pory"
	release
	return


AquacordeTown_ObjectScript_PotionMart::
# 111 "data/maps/AquacordeTown/scripts.pory"
	lock
# 112 "data/maps/AquacordeTown/scripts.pory"
	message AquacordeTown_ObjectScript_PotionMart_Text_0
# 113 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 114 "data/maps/AquacordeTown/scripts.pory"
	pokemart PotionMartItems
# 115 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_PokeballMart_Text_1
# 116 "data/maps/AquacordeTown/scripts.pory"
	release
	return


	.align 2
# 119 "data/maps/AquacordeTown/scripts.pory"
PotionMartItems:
# 120 "data/maps/AquacordeTown/scripts.pory"
	.2byte ITEM_POTION
# 121 "data/maps/AquacordeTown/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 122 "data/maps/AquacordeTown/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 123 "data/maps/AquacordeTown/scripts.pory"
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_NONE

AquacordeTown_ObjectScript_PotionMartGirl::
# 127 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 128 "data/maps/AquacordeTown/scripts.pory"
	faceplayer
# 129 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_PotionMartGirl_Text_0
# 130 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 131 "data/maps/AquacordeTown/scripts.pory"
	release
	return


AquacordeTown_ObjectScript_PotionMartLittleBoy::
# 135 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 136 "data/maps/AquacordeTown/scripts.pory"
	faceplayer
# 137 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_PotionMartLittleBoy_Text_0
# 138 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 139 "data/maps/AquacordeTown/scripts.pory"
	release
	return


AquacordeTown_ObjectScript_Girl::
# 143 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 144 "data/maps/AquacordeTown/scripts.pory"
	faceplayer
# 145 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_Girl_Text_0
# 146 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_Girl_Text_1
# 147 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 148 "data/maps/AquacordeTown/scripts.pory"
	release
	return


AquacordeTown_ObjectScript_Hiker::
# 152 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 153 "data/maps/AquacordeTown/scripts.pory"
	faceplayer
# 154 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_Hiker_Text_0
# 155 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_ObjectScript_Hiker_Text_1
# 156 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 157 "data/maps/AquacordeTown/scripts.pory"
	release
	return


AquacordeTown_SignScript_PokeballShop::
# 161 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 162 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_SignScript_PokeballShop_Text_0
# 163 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 164 "data/maps/AquacordeTown/scripts.pory"
	release
	return


AquacordeTown_SignScript_PokeCenter::
# 168 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 169 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_SignScript_PokeCenter_Text_0
# 170 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 171 "data/maps/AquacordeTown/scripts.pory"
	release
	return


AquacordeTown_SignScript_PotionShop::
# 175 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 176 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_SignScript_PotionShop_Text_0
# 177 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 178 "data/maps/AquacordeTown/scripts.pory"
	release
	return


AquacordeTown_SignScript_Bridge::
# 182 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 183 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_SignScript_Bridge_Text_0
# 184 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_SignScript_Bridge_Text_1
# 185 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 186 "data/maps/AquacordeTown/scripts.pory"
	release
	return


AquacordeTown_SignScript_Town::
# 190 "data/maps/AquacordeTown/scripts.pory"
	lockall
# 191 "data/maps/AquacordeTown/scripts.pory"
	msgbox AquacordeTown_SignScript_Town_Text_0
# 192 "data/maps/AquacordeTown/scripts.pory"
	waitmessage
# 193 "data/maps/AquacordeTown/scripts.pory"
	release
	return


AquacordeTown_ObjectScript_Woman_Text_0:
# 7 "data/maps/AquacordeTown/scripts.pory"
	.string "Do you love Pokemon?$"

AquacordeTown_ObjectScript_Woman_Text_1:
# 9 "data/maps/AquacordeTown/scripts.pory"
	.string "Me too! Aren't they great?$"

AquacordeTown_ObjectScript_Woman_Text_2:
# 11 "data/maps/AquacordeTown/scripts.pory"
	.string "kys$"

AquacordeTown_ObjectScript_MartEmployeeWander_Text_0:
# 21 "data/maps/AquacordeTown/scripts.pory"
	.string "Take this!$"

AquacordeTown_ObjectScript_MartEmployeeWander_Text_1:
# 25 "data/maps/AquacordeTown/scripts.pory"
	.string "Potions can heal Pokemon, wherever and\n"
	.string "whenever!$"

AquacordeTown_ObjectScript_LittleGirl_Text_0:
# 34 "data/maps/AquacordeTown/scripts.pory"
	.string "I play with my Pokemon and pet it!$"

AquacordeTown_ObjectScript_LittleBoy_Text_0:
# 42 "data/maps/AquacordeTown/scripts.pory"
	.string "My Pokemon and I are going to train\n"
	.string "really hard!$"

AquacordeTown_ObjectScript_FatMan_Text_0:
# 51 "data/maps/AquacordeTown/scripts.pory"
	.string "You really think I'm just gonna hand\n"
	.string "over an item to you for free?$"

AquacordeTown_ObjectScript_FatMan_Text_1:
# 52 "data/maps/AquacordeTown/scripts.pory"
	.string "Get the hell out of my house.$"

AquacordeTown_ObjectScript_GayMan1_Text_0:
# 59 "data/maps/AquacordeTown/scripts.pory"
	.string "scrubscrubscrubscrubscrubscrubscrubscrub$"

AquacordeTown_ObjectScript_GayMan2_Text_0:
# 68 "data/maps/AquacordeTown/scripts.pory"
	.string "I’m moving different. This shit ain’t\n"
	.string "nothing to me man, I’m a dog. I’m biting\l"
	.string "the fart bubbles in the bath We smoking\l"
	.string "Symbiote Smoking that Whoopi Goldberg\l"
	.string "South Egyptian fur burger Deluxe Mega\l"
	.string "Millions scratcher skunk bubba kush We\l"
	.string "smoking dung beetle I’m on 12 vicodins,\l"
	.string "smoking on Scooby-Doo dick We smoking\l"
	.string "Sequoia banshee boogers We snorting\l"
	.string "that good Buffalo Soldier tamarind\l"
	.string "Jordanian gibbies They must have\l"
	.string "amnesia, they forgot that I’m him.$"

AquacordeTown_ObjectScript_GayMan2_Text_1:
# 72 "data/maps/AquacordeTown/scripts.pory"
	.string "This shit ain't nothing to me you stupid\n"
	.string "piece of shit Step the wrong way and\l"
	.string "you will perish That pussy feel like\l"
	.string "Biscoff Butter You think I care about\l"
	.string "this shit? Ask me if I care about this\l"
	.string "shit, cause I don't give a shit If I had\l"
	.string "a dollar for every time they said I gave\l"
	.string "a shit, I'd be broke cause I don't give a\l"
	.string "shit My bitch look like David Hasselhoff\l"
	.string "I balled so hard they thought I was a\l"
	.string "fucking nutsack This shit ain't nothing\l"
	.string "to me man, I'll kill you, you stupid piece\l"
	.string "of shit$"

AquacordeTown_ObjectScript_PokeballMart_Text_0:
# 80 "data/maps/AquacordeTown/scripts.pory"
	.string "Welcome! This is a specialized shop that\n"
	.string "sells only Poke Balls.$"

AquacordeTown_ObjectScript_PokeballMart_Text_1:
# 83 "data/maps/AquacordeTown/scripts.pory"
	.string "Please come again!$"

AquacordeTown_ObjectScript_MartLittleGirl_Text_0:
# 96 "data/maps/AquacordeTown/scripts.pory"
	.string "Pokemon you catch in a Pokeball become\n"
	.string "your friends!$"

AquacordeTown_ObjectScript_MartGirl_Text_0:
# 104 "data/maps/AquacordeTown/scripts.pory"
	.string "Bags are mysterious! Bags are great!$"

AquacordeTown_ObjectScript_MartGirl_Text_1:
# 105 "data/maps/AquacordeTown/scripts.pory"
	.string "They automatically sort items put in\n"
	.string "them by the kind of item!$"

AquacordeTown_ObjectScript_PotionMart_Text_0:
# 112 "data/maps/AquacordeTown/scripts.pory"
	.string "Welcome! We sell only the best Potions!$"

AquacordeTown_ObjectScript_PotionMartGirl_Text_0:
# 129 "data/maps/AquacordeTown/scripts.pory"
	.string "The Pokemon Center just past\n"
	.string "Santalune Forest will fix up your\l"
	.string "Pokemon for free!$"

AquacordeTown_ObjectScript_PotionMartLittleBoy_Text_0:
# 137 "data/maps/AquacordeTown/scripts.pory"
	.string "Give Potions to weakened Pokemon!$"

AquacordeTown_ObjectScript_Girl_Text_0:
# 145 "data/maps/AquacordeTown/scripts.pory"
	.string "If you want to be more fashionable, you\n"
	.string "might want to go to Santalune City!$"

AquacordeTown_ObjectScript_Girl_Text_1:
# 146 "data/maps/AquacordeTown/scripts.pory"
	.string "I've been buying the newest fashions\n"
	.string "at the boutique in Santalune City.$"

AquacordeTown_ObjectScript_Hiker_Text_0:
# 154 "data/maps/AquacordeTown/scripts.pory"
	.string "Hey there! Looks like you found\n"
	.string "somebody at home to help you pack!$"

AquacordeTown_ObjectScript_Hiker_Text_1:
# 155 "data/maps/AquacordeTown/scripts.pory"
	.string "Oh, and make sure you bring a bunch of\n"
	.string "Pokeballs and Potions, all right?$"

AquacordeTown_SignScript_PokeballShop_Text_0:
# 162 "data/maps/AquacordeTown/scripts.pory"
	.string "Pokeball Shop$"

AquacordeTown_SignScript_PokeCenter_Text_0:
# 169 "data/maps/AquacordeTown/scripts.pory"
	.string "PokeCenter$"

AquacordeTown_SignScript_PotionShop_Text_0:
# 176 "data/maps/AquacordeTown/scripts.pory"
	.string "Potion Shop$"

AquacordeTown_SignScript_Bridge_Text_0:
# 183 "data/maps/AquacordeTown/scripts.pory"
	.string "Trainer Tips!$"

AquacordeTown_SignScript_Bridge_Text_1:
# 184 "data/maps/AquacordeTown/scripts.pory"
	.string "Use the Endless Candy to level your\n"
	.string "Pokemon to the level cap!$"

AquacordeTown_SignScript_Town_Text_0:
# 191 "data/maps/AquacordeTown/scripts.pory"
	.string "Aquacorde Town\n"
	.string "Water and civilization in harmony.$"
