#include <iostream>
#include <fstream>
#include <iomanip>
#include <limits>
using namespace std;

int main()
{
	string filename;

	cout << "Hello! Open the file you wish to open: " << endl;
	cin >> filename;
	
	ifstream matrix_reader;
	matrix_reader.open(filename.c_str());
	int rows;
	matrix_reader >> rows;
	int cols; 
	matrix_reader >> cols;
	if (matrix_reader)
	{
	
	
	float m[rows][cols];
	
		cout << filename << " was sucessflly opened." << endl;
		for (int i = 0; i < rows; i++) // iterate through the rows 
		{
			for ( int a = 0; a < cols; a++) // iterate through the columns 
			{
				
				matrix_reader >> m[i][a];
				cout << m[i][a]<< "        " ;
			}
			cout << endl;
		}
	matrix_reader.close();	 
		return 0;
	}
	else
	{
		cout << "Error: Could not open the file: " << filename << endl;
		return 0;	
	};
 
  
   
}
