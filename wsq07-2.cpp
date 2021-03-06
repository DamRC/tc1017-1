// ARRAYS with user input variation
#include <iostream>
#include <cmath>
using namespace std;

int numfac (int n, double list[], int m) // create a variable m that'd be the number of factors, because n will continue to be modified until 101 even if list[n] == 0
{
    for (n = 0; n <= 100; ++n){
        if (list[n] != 0){
            m = m + 1;
        }
    }    
    return m;
}

double total (int n, double result, double list[])
{
    for (n = 0; n <= 100; ++n) 
    {
        result = result + list[n];
    }
    return result;
}

double average (double sum, double avg, int m)
{
    avg = sum / m; 
    return avg;
}

double standarddeviation (int n, double x, double sumatory, double sum, double avg, double list[], double stddev, int m)
{
    // x = nvalue - avg
    for (n = 0; n < m; ++n) // needs to be smaller than n
    {
        x = pow ((list[n] - avg), 2); 
        sumatory = sumatory + x;
    }
    stddev = sqrt (sumatory / 10);
    return stddev;
}


int main ()
{
    cout << "Please type in as many values as you like and press enter after each;" << endl;
    cout << "when you're done, please write 'I'm done' " << endl; 
    // because the input type is a double, any string input will terminate the loop
    
    
    double list[100];
    double x;
    int n = 0;
    
    for (n=0; n<=100; ++n)
    {
        cin >> x;
        list [n] = x;
    }
    
    int m = numfac (0, list, 0);
    cout << "The sum of those values is: " << total (0, 0, list) << endl; // assigns value "0" to n and result and the array list to the parameter list
    double sum = total (0, 0, list);
    cout << "The average of the values is: " << average (sum, 0, m) << endl; // this gives the sum in the previous function as parameter for the average
    double avg = average(sum, 0, m);
    cout << "The standard deviation of the values provided is: " << standarddeviation (0, 0, 0, sum, avg, list, 0, m) << endl;

    return 0;
}
