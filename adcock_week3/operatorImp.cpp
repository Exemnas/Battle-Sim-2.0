
#include "weekSix.h"

;using namespace std;

ostream& operator<< (ostream& osObject, const weekSix& numbers)
{
	osObject << "The special operator numbers are :: " << numbers.numOne << " and " << numbers.numTwo << "." <<endl;
	return osObject;
}

//istream& operator>> (istream& isObject, weekSix& numbers)
//{
//	isObject >> numbers.numOne >> numbers.numTwo;
//	return isObject;
//}

weekSix::weekSix(double one, double two)
{
	numOne = one;
	numTwo = two;
	return;
}