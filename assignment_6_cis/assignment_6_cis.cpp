/*
 *            PROGRAMMER: Hector Avina
 *         PROBLEM TITLE: Babylonian Method for Square Root
 *    PROBLEM DEFINITION: Write a C++ program to compute the square root of a number 
 * 							without using the sqrt function found in the cmath library.
 *                  DATE: 10/13/17
 *     SYSTEM - HARDWARE: Macbook Pro, intel i5, 8gb ram, 128 ssd
 *            - SOFTWARE: Mac OS Sierra
 *         Input Devices: Keyboard
 *        Output Devices: Screen
 *
 */

#include <iostream>
using namespace std;
float abs(float val){
	return (val>=0? val : -val);
}

int main ()
{


float N;

bool invalidEntry; 
do {
	cout << "Square Root Calculator\n" << endl;
	cout << "Enter a value for N (Must be positive):  ";
	cin >> N;
	invalidEntry = N <=0;
	
	
	if (invalidEntry) 
	{
	cout << "invalid Entry! \n";
	cin.clear();
	cin.ignore(1000, '\n'); 
	}
} while (invalidEntry) ;
	float S=N;
	float T;
	
	do
	{
		T = S;
		S = ((N/T+T)/2);
	}
	while ( abs(T-S) > 0.0000000000000000000000000000000001);
	cout << "The square root of " << N << " is " << S << endl;
	cout << "The square of the square root is " << N << "  Error = " << N - S * S << endl;
}




