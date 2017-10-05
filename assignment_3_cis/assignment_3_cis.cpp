#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    
    float weight;
    float rate;
    float distance;
    float ship;
    
    cout << "Enter your desired weight to be shipped, but it cannot be equal to 0 or be more than 25lbs: " << endl;
    cin >> weight;
    
    if ( weight > 0 && weight <= 3)  rate = 1.25;
    
    else if (weight <= 0) { cout << "Error! You cannot input a weight of 0 or less!" << endl; return 0; }
    else if (weight <= 7)  rate = 2.35;
    else if (weight <= 12) rate = 3.75;
    else if (weight <= 25) rate = 4.90;
    else {cout << "Error! You cannot input a weight greater than 25lbs" << endl; return 0;}
    
    
    cout << "Enter your desired distance but it cannot be\nless than 5 miles or larger than 3500" << endl;
    cin >> distance;
    
    
    if (distance < 5)
    {
        cout << "Error! You cannot have a distance less than 5 miles! " << endl; return 0;
    }
    
    else if (distance > 3500)
    {
        cout << "Error! You cannot have a distance more than 3500 miles!" << endl; return 0;
        
    }
    
    ship = (rate + ((int)( distance -1 ) / 750 ) * rate );
    cout <<"$"<<fixed<<setprecision(2)<< ship << " is the shipping charge." << endl;
    return 0;
}

