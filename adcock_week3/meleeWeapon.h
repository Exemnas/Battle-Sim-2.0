//declaration
#include "imagineGun.h"

//class meleeWeapon.h deviates from imagineGun.h
class meleeWeapon: public imagineGun
{
public:
	void gunSelection(int userChoice);//Switch function
	void keychain(int keySelect);//Uses imagineGun.h Protected member int keyChain.
	meleeWeapon();//constructor
private:
	int selection; //holds userChoice variable
};