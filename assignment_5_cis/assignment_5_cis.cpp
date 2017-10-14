/*
 *            PROGRAMMER: Hector Avina
 *         PROBLEM TITLE: Sum of Numbers, Sum of Squares and Square of Sum
 *    PROBLEM DEFINITION: Write a program that asks the user for a positive integer value. The program should use
 *							a loop to get the sum of all the integers from 1 up to the number entered, along with the
 *							sum of the squares of all integers from 1 up to the number entered, and the square of the
 *							sum of all the integers from 1 up to the number entered. 
 *                  DATE: 10/13/17
 *     SYSTEM - HARDWARE: Macbook Pro, intel i5, 8gb ram, 128 ssd
 *            - SOFTWARE: Mac OS Sierra
 *         Input Devices: Keyboard
 *        Output Devices: Screen
 *
 */

#include <iostream>
using namespace std;
int main ()
{


int value;
int sum = 0;
int sum_squares = 0;

bool invalidEntry; 
do {
	cout << "Enter a positive integer larger than 1: ";
	cin >> value;
	invalidEntry = value <=1;
	
	if (invalidEntry) 
	{
	cout << "invalid Entry! \n";
	cin.clear();
	cin.ignore(1000, '\n'); 
	}
} while (invalidEntry) ;


for (int count= 1;  count <= value; count++ )
{
	sum = sum + count;
	sum_squares += (count * count);
}

cout << "\nThe sum of numbers from 1 to " << value << " is " << sum << ".\n";
cout << "\nThe sum of squares of numbers from 1 to " <<value<< " is " 
			<<sum_squares<< ".\n";
cout << "\nThe square of the sum of numbers from 1 to " <<value<< " is "
			<< sum*sum << ".\n";

	
return 0;
}

