// Sum of numbers

#include <iostream>
using namespace std;

int main ()
{
    int Low;
    int High;
    int Sum;
    int Total;
    
    cout << "Please type in a range of numbers" << endl;
    cout << "Type lower value" << endl;
    cin >> Low;
    cout << "Type higher value" << endl;
    cin >> High;
    
    if (High == Low)
    {
        cout << "The sum of the range bewtween " << High << " and " << Low << " is: " << High + Low << endl;
    }
    else if (High < Low)
    {
        cout << "User input error. Please try again typing the lower value first and the higher value second." << endl;
    }
    else
    {
        for (Sum = Low; Sum <= High; Sum++) // (set the initial value for "x" to the lower value, while this value is smaller or equal to the higher value repeat this loop, at the end of each loop increase the value of x by 1)
        {
            Total = Total + Sum;
        }
        cout << "The sum of the range that you provided is: " << Total << endl;
    }
    
    return 0; 
}
