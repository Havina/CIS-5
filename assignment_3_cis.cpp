#include <iostream>
using namespace std;

int main ()
{
	int weight = 0;
	float rate;
	int distance = 0;
	
	cout << "Enter your desired weight to be shipped, but it cannot be equal to 0: " << endl;
	cin >> weight;

	if ( weight > 0 && weight <= 3) { rate = 1.25; }
	else if (weight <= 7)  {2.35;}
	else if (weight <= 12) {3.75;}
	else if (weight <= 25) {4.90;}
    else { cout << "The weight should more be more than zero but less than 25." ; }
	
	cout << "Enter your desired distance but it cannot be less than 5 miles or larger than 3500" << endl;


}
