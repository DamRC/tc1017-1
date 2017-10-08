// ARRAYS 
#include <iostream>
#include <cmath>
using namespace std;

double total (int n, double result, double list[])
{
    for (n = 0; n <= 10; ++n) // this sums up until n = 10 (which is 11 values for the array, but since there isn't an 11th value it is equal to 0)
    {
        result = result + list[n]; 
    }
    return result;
}

double average (double sum, double avg)
{
    avg = sum / 10; 
    return avg;
}

double standarddeviation (int n, double x, double sumatory, double sum, double avg, double list[], double stddev)
{
    // x = nvalue - avg
    for (n = 0; n < 10; ++n) // needs to be smaller than ten, else it'll also take in 11
    {
        x = pow ((list[n] - avg), 2); // pow (base, exponent)
        sumatory = sumatory + x;
    }
    stddev = sqrt (sumatory / 10);
    return stddev;
}

int main ()
{
    double a, b, c, d, e, f, g, h, i, j;
    cout << "Please type in 10 float values" << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;
    cin >> g;
    cin >> h;
    cin >> i;
    cin >> j;
    
    double list[10] = {a, b, c, d, e, f, g, h, i, j}; // assign the inputs to the array
    
    cout << "The sum of those values is: " << total (0, 0, list) << endl; // assigns value "0" to n and result and the array list to the parameter list
    double sum = total (0, 0, list);
    cout << "The average of the values is: " << average (sum, 0) << endl; // this gives the sum in the previous function as parameter for the average
    double avg = average(sum, 0);
    cout << "The standard deviation of the values provided is: " << standarddeviation (0, 0, 0, sum, avg, list, 0) << endl;
    
    return 0;   
}
