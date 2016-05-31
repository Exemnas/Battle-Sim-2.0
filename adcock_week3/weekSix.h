
#include <iostream>
using namespace std;

class weekSix
{
	friend ostream& operator<< (ostream&, const weekSix &);
	//friend istream& operator>> (istream&, weekSix &);

public:
	double getNumOne() const;
	double getNumTwo() const;
	void printNum() const;
	weekSix();
	weekSix(double one, double two);

private:
	double numOne;
	double numTwo;
}