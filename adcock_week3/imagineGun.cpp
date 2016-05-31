//Base Class Declarations
#include <iostream>
#include "imagineGun.h"
using namespace std;

//Definitions
void imagineGun::gunSelection(int userChoice) //Function for weapon selection
{
	selection = userChoice;
	cout << "You have chosen ";

		switch (selection)
		{ //switch starts.
		case 1:
			cout << "a Pistol." << endl;
			break;
		case 2:
			cout << "a Revolver." << endl;
			break;
		case 3:
			cout << "a Shotgun." << endl;
			break;
		case 4:
			cout << "the Particle Cannon." << endl;
			break;
		case 5:
			cout << "the Plasma Carbine." << endl;
			break;
		case 6:
			cout << "the Rapid Fire Cosmic Arc Mortar." << endl;
			break;
		//case 0:
		//return;
		default:
			cout << "***Invalid Entry***" << endl;
			break;
			return;
	};//switch ends
};//end Definition.

imagineGun::imagineGun()
{
	selection = 0;
};//end Definition