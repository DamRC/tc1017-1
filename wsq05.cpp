#include <iostream>
using namespace std;

void Sum (int Val1, int Val2)
{
    cout << "The sum of the given values is: " << Val1 + Val2 << endl;
}

void Subst (int Val1, int Val2) // It doesn't matter that the name is the same because they're 2 different functions, they don't overlap
{
    if (Val1 > Val2)
    {
        cout << "The difference of the given values is: " << Val1 - Val2 << endl;
    }
    else
    {
        cout << "The difference of the given values is: " << Val2 - Val1 << " (taking the highest value as the first one)" << endl;
    }
}

void Prod (int Val1, int Val2)
{
    cout << "The product of the given values is: " << Val1 * Val2 << endl;
}

void Div (int Val1, int Val2)
{
    cout << "The integer division of the given values is: " << Val1 / Val2 << endl;
}

void Rem (int Val1, int Val2)
{
    cout << "The remainder of the previous division is: " << Val1 % Val2 << endl;
}

int main ()
{
    int x;
    int y;
    
    cout << "Please enter 2 numbers" << endl;
    cin >> x;
    cin >> y;
    
    Sum (x, y); // asign the values provided by the user (x and y) to the parameters of the function (Val1 and Val2)
    Subst (x, y);
    Prod (x, y);
    Div (x, y);
    Rem (x, y);
    
    return 0;
}
