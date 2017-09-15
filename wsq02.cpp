// Temperature

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the temperature in Fahrenheit:" << endl;
    
    int fahr;
    cin >> fahr;
    
    int cel;
    cel = (fahr-32)*5/9;
    
    cout << "The temperature of " << fahr << " in Fahrenheit is equal to " << cel << " in Celsius" << endl;
    
    if (cel >= 100)
    {
        cout << "Water boils at this temperature (under typical conditions)" << endl;
    }
    else
    {
        cout << "Water doesn't boil at this temperature (under typical conditions)" << endl;
    }
    
}
