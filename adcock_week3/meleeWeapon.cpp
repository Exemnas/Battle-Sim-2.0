//Declarations
#include <iostream>
#include "meleeWeapon.h"
using namespace std;

//Definitions

void meleeWeapon::gunSelection(int userChoice) //Function for weapon selection
{
	meleeWeapon un;

	selection = userChoice;
	cout << "You have chosen ";
	switch (selection)
	{ //switch starts
	case 1:
		cout << "Atomic Brass Knuckles." << endl;
		break;
	case 2:
		cout << "a Shovel." << endl;
		break;
	case 3:
		cout << "a Katana." << endl;
		break;
	case 4:
		cout << "a Frying Pan." << endl;
		break;
	case 5:
		cout << "the Plasma Blade." << endl;
		break;
	case 6:
		cout << "the Keyblade." << endl;
		cout << "What Keyblade would you use? " << endl;
		cout << "1 - Kingdom Key" << endl;
		cout << "2 - Pumpkin Head" << endl;
		cout << "3 - Oathkeeper" << endl;
		cout << "4 - Oblivion" << endl;
		cout << "5 - Oathkeeper/Oblivion combo" << endl;
		cout << "6 - Ultima Weapon" << endl;
		cout << "7 - Diamond Dust" << endl;
		cout << "8 - Fenrir" << endl;
		int keySelect;
		un.keychain(keySelect); //Pulling the protected member from imagineGun.h and using functions from meleeWeapon.h
		break;
	case 0:
		return;
	default:
		cout << "***Invalid Entry***" << endl;
		break;
		return;
	};//end switch
};//end definition

void meleeWeapon::keychain(int keySelect) //Function for keyblade types
{
	cin >> keySelect;

	keyChain = keySelect;

	switch (keyChain)
	{//switch starts
	case 1:
		cout << "The Kingdom Key was summoned to your hand." << endl;
		break;
	case 2:
		cout << "The Pumpkin Head Keyblade was summoned to your hand." << endl;
		break;
	case 3:
		cout << "The Oathkeeper Keyblade was summoned to your hand." << endl;
		break;
	case 4:
		cout << "The Oblivian Keyblade was summoned to your hand." << endl;
		break;
	case 5:
		cout << "The Oathkeeper and Oblivian Keyblades was summoned to your hands." << endl;
		break;
	case 6:
		cout << "The Ultima Weapon Keyblade was summoned to your hand." << endl;
		break;
	case 7:
		cout << "The Diamond Dust Keyblade was summoned to your hand." << endl;
		break;
	case 8:
		cout << "The Fenrir Keyblade was summoned to your hand." << endl;
		break;
	default:
		cout << "***Invalid Entry***" << endl;
		break;
	};//end switch
}; //end definition

meleeWeapon::meleeWeapon()//constructor
{
	selection = 0;
};//end definition