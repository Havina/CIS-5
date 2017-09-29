/*
 *            PROGRAMMER: Hector Avina
 *         PROBLEM TITLE: Calculating Semester Final
 *    PROBLEM DEFINITION: Calculating your final grade for the semster
 *                  DATE: 9/16/17
 *     SYSTEM - HARDWARE: Macbook Pro, intel i5, 8gb ram, 128 ssd
 *            - SOFTWARE: Mac OS Sierra
 *         Input Devices: Keyboard
 *        Output Devices: Screen
 *                                                                          
 *   PROGRAM ASSUMPTIONS:                                                         
 */

#include <iostream>
using namespace std;

int main()
{
	float ASSIGNMENT_WEIGHT;
	float DISCUSSION_BOARD_WEIGHT; 
	float QUIZ_WEIGHT;
	float FINAL_WEIGHT;
	
	 
	cout << "Enter the value of your Assignment Weight" << endl;
	cin >> ASSIGNMENT_WEIGHT;
	
	cout << "Enter the value of your Discussion Board Wieght" << endl;
	cin >> DISCUSSION_BOARD_WEIGHT;
	
	cout << "Enter the value of your Quiz Weight" << endl;
	cin >> QUIZ_WEIGHT;
	
	cout << "Enter the value of your Final Weight" << endl;
	cin >> FINAL_WEIGHT;
	
	float assignment_percentage;
	float discussion_board_percentage;
	float quizzes_percentage;
	float final_percentage;
	
	cout << "Enter your Assignment Percentage" << endl;
	cin >> assignment_percentage;
	
	cout << "Enter your Discussion Percentage" << endl;
	cin >> discussion_board_percentage;
	
	cout << "Enter your Quiz Percentage" << endl;
	cin >> quizzes_percentage;
	
	cout << "Enter your Final Percentage" << endl;
	cin >> final_percentage;
	
	float grade; 
	grade = assignment_percentage * ASSIGNMENT_WEIGHT; 
	grade = grade + discussion_board_percentage * DISCUSSION_BOARD_WEIGHT;
	grade = grade + quizzes_percentage * QUIZ_WEIGHT;
	grade = grade + final_percentage * FINAL_WEIGHT;
	
	cout << "Your grade for this semester is " << grade << endl;
	return 0;
	
	

}

