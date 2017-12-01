#include <iostream>
#include <iomanip>
using namespace std;

// function prototype for fastExponent
long double fastExponent(long double, int);

// main function
int main()
{
	// do not change the code inside this function!
	cout << "Testing fastExponent ..." << endl << endl;
	
	cout << fixed << setprecision(5);
	cout << "fastExponent(0,0) = " << fastExponent(0,0) << endl;
	cout << "fastExponent(1,0) = " << fastExponent(1,0) << endl;
	cout << "fastExponent(2,3) = " << fastExponent(2,3) << endl;
	cout << "fastExponent(3.3,2) = " << fastExponent(3.3,2) << endl;
	cout << "fastExponent(1.5,6) = " << fastExponent(1.5,6) << endl;
	cout << "fastExponent(-1,3) = " << fastExponent(-1,3) << endl;
	
	cout << "Enter a value for base: ";
	float base;
	cin >> base;
	cout << "Enter a positive integer for exponent: ";
	int exp;
	cin >> exp;
	cout << "fastExponent(" << base << ", " << exp;
	cout << ") = " << fastExponent(base,exp) << endl;
	
	return 0;
}


long double fastExponent(long double base, int exp)
{

if (base==0&&exp==0) return 0;

if (exp==0) return 1;     

if (exp==1) return base;

long double result = 1;

while (exp>=1) 
{
    if (exp%2==1) 
	result = result * base;
    exp = exp/2;
    base = base * base; 
}

return result;
}
