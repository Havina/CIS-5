/*
 *            PROGRAMMER: Hector Avina
 *         PROBLEM TITLE: Geometry Calculator
 *    PROBLEM DEFINITION: Write a program that displays the following menu: Geometry Calculator
 *                       1.Calculate the Area of a Circle
 *                       2. Calculate the Area of a Rectangle
 *                       3. Calculate the Area of a Triangle
 *                       4. Quit
 *                       Enter your choice (1-4):
 *                  DATE: 10/7/17
 *     SYSTEM - HARDWARE: Macbook Pro, intel i5, 8gb ram, 128 ssd
 *            - SOFTWARE: Mac OS Sierra
 *         Input Devices: Keyboard
 *        Output Devices: Screen
 *
 */

#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{

	const double PI = 3.14159;
	
	const int CIRCLE_CHOICE = 1;
	const int RECTANGLE_CHOICE = 2;
	const int TRIANGLE_CHOICE = 3;
	const int QUIT_CHOICE	= 4;

	int choice; 
	double radius;  
	double length;  
	double width;  
	double base;  
	double height; 
	double area; 


	cout << "Geometry Calculator" << endl;
    cout << "Select one of the shapes to calculate their area:" << endl;
	cout << "\t1. Calculate the area of a Circle\n";
	cout << "\t2. Calculate the area of a Rectangle.\n";
	cout << "\t3. Calculate the area of a Triangle.\n";
	cout << "\t4. Quit. \n";
	
    cout << "Enter your choice (1-4) : ";	 
	cin >> choice;
	
	
	switch (choice)
	{
		case CIRCLE_CHOICE:
			cout << "\nEnter the circle's radius: " << endl;
			cin >> radius;

			if (radius < 0)
			{		
				cout << "\nThe radius can not be less than zero.\n";
			}	
			else
			{
				area = PI * radius * radius; 
                                cout << "\nThe area is " << area << endl;
			}
			break;

		case RECTANGLE_CHOICE:
			cout << "Enter the rectangle's length: ";
			cin >> length;
            cout << "Enter the rectangle's width: ";
            cin >> width;
			
			if (length < 0 or width <  0)
			{			
				cout << "\nOnly enter positive values for " << "length and width.\n";
				
			}
	
			else
			{
                            area = length * width;
                            cout << "\nThe area is " << area << endl;
			}
			break;

		case TRIANGLE_CHOICE:
			cout << "Enter the triangle's base: " << endl;
			cin >> base;
                        cout << "Enter the triangle's height: " << endl;
			cin >> height;

			if (base < 0 or height < 0)
			{		
				cout << "\nOnly enter positive values for " << "base and height.\n";
			}
					
			else
			{
                            area = base * height * 0.5;
                            cout << "\nThe area is " << area << endl;
                        }
                            break;

		case QUIT_CHOICE:
			cout << "Program ending. \n";
			break;
		
		default:
			cout << "The valid choices are 1 through 4. Run the\n"
				 		<< "program again and select one of those choices.\n";
                        break;
                        return 0;
	}
} 
	
