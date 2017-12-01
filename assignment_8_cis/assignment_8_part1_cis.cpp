#include <iostream>
#include <fstream>
#include <iomanip>
#include <limits>
using namespace std;

float inval ()
{
float value;

bool invalidEntry;
do 
{
	invalidEntry = 0;
	cout << "(Greater than or equal to 1): ";
	cin >> value;
	bool cingood = cin.good(); 
	
	if (value < 1 || !cingood) 
	{
		invalidEntry = 1;
		cout << "invalid Entry! \n";
		cin.clear();
		cin.ignore(1000, '\n'); 
	}
} while (invalidEntry) ;
	return value;
}

float matrixentry()
{
float value;

bool invalidEntry;
do 
{
	invalidEntry = 0;
	//cout << "(Greater than or equal to 1): ";
	cin >> value;
	bool cingood = cin.good(); 
	
	if (!cingood) 
	{
		invalidEntry = 1;
		cout << "invalid Entry! \n";
		cin.clear();
		cin.ignore(1000, '\n'); 
	}
} while (invalidEntry) ;
	return value;
}


int main()
{
string filename;

	cout << "Enter the name of the file in which you would like to create: ";
	cin >> filename;
	
	ofstream outfile;
	outfile.open(filename.c_str());
	
	 
	int rows;
	int cols;
	if (outfile)
	{
	 cout << "How many rows do you want";
	 rows =inval();
	 cout << "How many columns do you want" ;
	 cols =inval();
	 
	
	float m[rows][cols];
	for (int r = 0; r < rows; r++) // iterate through the rows 
	{
		for ( int c = 0; c < cols; c++) // iterate through the columns 
		{
			cout << "Please enter a value for row " << r+1 << " collumn " << c+1 <<" : ";
			m[r][c] = matrixentry();
		}
	}
		//cout << filename << " was sucessflly created." << endl;
		
		outfile << rows << endl;
		outfile << cols << endl;
		for (int i = 0; i < rows; i++) // iterate through the rows 
		{
			for ( int a = 0; a < cols; a++) // iterate through the columns 
			{
				outfile << m[i][a] << "     ";
			}
			outfile << endl;

		}
		
		
		
	outfile.close();	 
		return 0;
	}
	else
	{
		cout << "Error: Could not write the file: " << filename << endl;
		return 0;	
	}
	 
}

