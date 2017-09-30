/*
 *
 *            PROGRAMMER: Hector Avina		
 *         PROBLEM TITLE: Finding Interest Earned 
 *    PROBLEM DEFINITION: Write a program that asks for the principle,
 * 						the interest rate, and the number of times the interest in compounded.
 *                  DATE: 9/25/17
 *     SYSTEM - HARDWARE: intel i5,8gb ram, 128 ssd
 *            - SOFTWARE: macos high sierra 
 *         Input Devices: Keyboard
 *        Output Devices: Screen
 *                    
 *                                                              
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	float PRINCIPLE;
	float INTEREST_RATE; 
	int   TIMES_COMPOUNDED;
	float AMOUNT_IN_SAVINGS;
	
	int width = 8;
	
	 
	cout << "Enter the balance of your savings account: " << endl;
	cin >> PRINCIPLE;
	
	cout << "Enter your interest rate: " << endl;
	cin >> INTEREST_RATE;
	
	cout << "Enter the number of times the interest is compounded during a year. " << endl;
	cin >> TIMES_COMPOUNDED;
	
	float int_rate = INTEREST_RATE/100;
		
	AMOUNT_IN_SAVINGS = (PRINCIPLE * pow((1+(int_rate/TIMES_COMPOUNDED)),TIMES_COMPOUNDED));
	float INTEREST = AMOUNT_IN_SAVINGS - PRINCIPLE;
	
	cout << fixed;
	cout << setprecision (2);
	
	
	cout << " Interest Rate:      " << right << setw(width) << INTEREST_RATE << "%" << endl;
	cout << " Times Compounded:   " << right << setw(width) << TIMES_COMPOUNDED << endl;
	cout << " Principle:         $" << right << setw(width) << PRINCIPLE << endl;
	cout << " Interest:          $" << right << setw(width) << INTEREST << endl;
	cout << " Amount In Savings: $" << right << setw(width) << AMOUNT_IN_SAVINGS << endl;

	
	return 0;
	
}

