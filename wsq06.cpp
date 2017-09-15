#include <iostream>
#include <string>
using namespace std;


    int factorial (int n) // create a function of type integer that give the factorial value of n (n!)
    {
        if (n == 0) // when n is equal to 0 it't return 1
        {
            return 1; // to give that result to n!=0
        }
        else 
        {
            int recursion = factorial (n - 1); // when n = any other number, it'll run factorial again and again each time subtracting 1 from 1 until it's = 0
            int answer = n * recursion; // sets answer to n time the constant recursion (which is the factorial value)
            return answer;
        }
    }   


int main ()
{
    repeat:
    string again;
    
    int number; // creates the variable that the user will input
    int answer; // creates a variable answer, because the one defined of the factorial function isn't valid in this (a new) funtion
    cout << "type number" << endl;
    cin >> number;
    answer = factorial (number); // set the new "answer" to the return value of factorial
    cout << "The value for n! = " << answer << endl; // prints the answer
    
    
    ask:
    cout << "Do you wish to try again with another number?" << endl;
    cin >> again;
    
    if (again == "yes") goto repeat;
    if (again == "no")
    {
        cout << "Thank you! Have a nice day!" << endl;
    }
    else
    {
        cout << "That is not a valid answer, try again simply typing yes or no." << endl;
        goto ask;
    }
    
    return 0;
}

