//last updated: 3/3/2012
//Created by: Steven Adcock


#include <iostream>//Headers
#include <string>
#include "meleeWeapon.h"
#include "weekSix.h" //Class weekSix: Overloading

;using namespace std;

int main()//Main program.
{
	//Declarations
	meleeWeapon melee;
	imagineGun gun;
	int userChoice;
	string enemy;
	int enemyChoice;
	int weaponChoice;
	
	do //Main Part of main.cpp body is here.
	{
		//Pointer Data Type
		string bulletSelection();		//Function that returns string bullet.
		string bullet;					//Variable to store bulletChoice.
		string *p;						//p is a pointer of type string.
		p = &bullet;					//p = allocated with string bullet.
		weekSix specialNumbers(20, 60);	//Operator with parameters

		cout << "***Welcome to Battle-Arena sim 2.0***" << endl;
		cout << "This sim was built to train the greatest of warriors against enemys in a " << endl;
		cout << "realistic enviroment." << endl;
		cout << "***Beware: Your choices ride with or against you when you choose your sim " << endl;
		cout << "settings on this computer. " << endl;
		cout << "Now, which enemy do you want to face? " << endl;
		cout << endl;
		cout << "1 - Horde of Orcs" << endl;
		cout << "2 - Horde of Zombies" << endl;
		cout << "3 - Horde of Heartless" << endl;
		cout << "4 - Sephiroth - The One-Winged Angel" << endl;
		cout << "5 - Math" << endl;
		cout << "6 - exceptions" << endl;
		cout << "0 - Exit program." << endl;
		cin >> enemyChoice; //User Input for enemy selection.
		//
		try //Beginning of try/Catch block
		{
			if (enemyChoice == 0)
				throw 0;

			switch (enemyChoice)
			{ //EnemyChoice Switch start.
			case 1:
				enemy = "Horde of Orcs";
				break;
			case 2:
				enemy = "Horde of Zombies";
				break;
			case 3:
				enemy = "Horde of Heartless";
				break;
			case 4:
				enemy = "Sephiroth - The One-Winged Angel";
				break;
			case 5:
				cout << specialNumbers;
				break;
			case 6:
				int userNum;
				cout << "Would you like a demonstration of exceptions?" << endl;
				cout << "Come on, it'll be fun. Input a number to select your answer." << endl;
				cout << "1 - Yes" << endl;
				cout << "2 - No" << endl;
				cin >> userNum;
				try
				{
					if (userNum == 1)
						throw 1;

					cout << "Oh...Okay. I'll let you go back to your business." << endl;
					return 0;
				}
				catch(int)
				{
					cout << "Your number just got thrown and was caught by the catch block, thus generating this message." << endl;
					cout << endl;
				}
				break;
			default:
				cout << "***Invalid Entry***" << endl;
				return 0;
			}//EnemyChoice Switch end.
		}//end of Try block

		catch (int) //Catch block
		{
			cout << "Good Bye" << endl;
			return 0;
		}

		cout << "Now, what would you like to use:" << endl;
		cout << "1 - Projectile Weapon" << endl;
		cout << "2 - Melee Weapon" << endl;
		cout << "0 - Exit" << endl;
		cin >> weaponChoice; //User Input for weapon classification selection.

		try //Start of try/catch block
		{
			//
			if (weaponChoice == 0)
				throw 0;
			//
		switch (weaponChoice)
		{ //WeaponChoice Switch start.
		case 1:
			cout << "1 - Pistol? " << endl;
			cout << "2 - Revolver? " << endl;
			cout << "3 - Shotgun? " << endl;
			cout << "4 - Particle Cannon? " << endl;
			cout << "5 - Plasma Carbine? " << endl;
			cout << "6 - Rapid Fire Cosmic Arc Mortar? " << endl;
			cout << "0 - Exit Program." << endl;
			cin >> userChoice; //User Input on weapon selection.
			gun.gunSelection(userChoice); //calling void imagineGun::gunSelection(int userChoice) from imagineGun.h header file.
		

			if (userChoice == 1 || 2 || 3) //Where string bullet gets it's definition
				bullet = bulletSelection();

			cout << endl;
			cout << "The Battle-Arena sim 2.0 is set up as follows:: " << endl;
			cout << "Enemy on Field: " << enemy << "." << endl;
			cout << "Battle Level : 1 (for your safety)" << endl;

			cout << "Bullet Type : " << *p << " and the address to p is " << p << endl; //displays pointers

			cout << "Now that everything is set up, your weapon is dispensed next to the screen" << endl;
			cout << "Turn around and prepare to battle. The only exit is to be victorious. Good Luck!" << endl;
			cout << endl;
			cout << endl;
			break;
		case 2:
			cout << "1 - Atomic Brass Knuckles? " << endl;
			cout << "2 - Shovel? " << endl;
			cout << "3 - Katana? " << endl;
			cout << "4 - Frying Pan? " << endl;
			cout << "5 - Plasma Blade? " << endl;
			cout << "6 - Keyblade? " << endl;
			cout << "0 - Exit Program." << endl;
			cin >> userChoice; //User Input on weapon selection.
			melee.gunSelection(userChoice); //Calling void meleeWeapon::gunSelection(int userChoice) from meleeWeapon.h header file.
			cout << endl;
			cout << "The Battle-Arena sim 2.0 is set up as follows:: " << endl;
			cout << "Enemy on Field: " << enemy << "." << endl;
			cout << "Battle Level: 1 (for your safety)" << endl;
			cout << "Now that everything is set up, your weapon is dispensed next to the screen" << endl;
			cout << "Turn around and prepare to battle. The only exit is to be victorious. Good Luck!" << endl;
			cout << endl;
			cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
			cout << endl;
			system ("pause");
			cout << endl << endl;
			break;
		case 0:
			return 0;			break;
		default:
			cout << "***Invalid Entry***" << endl;
			return 0;
		}//WeaponChoice Switch start.
		}//end try block
		catch (int)// begin catch block
		{
			cout << "Good Bye!" << endl;
			return 0;
		}//end catch block
	} while (userChoice != 0); (enemyChoice != 0); (weaponChoice != 0); //End While.
	system ("pause");
return 0;
}//eof.

string bulletSelection()//Function to select type of bullet
{
	string bullet;
	int bulletChoice;
	cout << "What bullet would you like to use?" << endl;
	cout << "1 - lead." << endl;
	cout << "2 - mind control." << endl;
	cout << "3 - incendiary." << endl;
	cout << "4 - elctricity." << endl;
	cout << "5 - Black Hole-makers" << endl;
	cin >> bulletChoice;

	switch(bulletChoice)
	{
	case 1:
		bullet = "lead";
		return bullet;
		break;
	case 2:
		bullet = "mind control";
		return bullet;
		break;
	case 3:
		bullet = "incendiary";
		return bullet;
		break;
	case 4:
		bullet = "elctricity";
		return bullet;
		break;
	case 5:
		bullet = "Black Hole-makers";
		return bullet;
		break;
	default:
		cout << "***Invalid Input***" << endl;
		return " ";
		break;
	} // end switch
}//end function bulletSelection()