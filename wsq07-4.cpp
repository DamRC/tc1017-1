// Vectors
#include <iostream>
#include <cmath>
#include <vector> //include vector library
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;
using std::getline;

double total (double newlist[], int m)
{
  int n;
  double result;
    for (n = 0; n <= m; ++n)
    {
        result = result + newlist[n];
    }
    return result;
}

double average (double sum,int m)
{
  double avg;
    avg = sum / m;
    return avg;
}

double standarddeviation (double sum, double avg, double newlist[], int m)
{
  int n;
  double x;
  double sumatory;
  double stddev;
    // x = nvalue - avg
    for (n = 0; n < m; ++n) // needs to be smaller than n
    {
        x = pow ((newlist[n] - avg), 2);
        sumatory = sumatory + x;
    }
    stddev = sqrt (sumatory / m);
    return stddev;
}


int main ()
{
  cout << "Please type in as many values as you want" << endl;
  cout << "When you're done, write any letter" << endl;
  vector<double> list; // initialization of vector
  double x;

  do{
      cin >> x;
      if (cin.fail()){
        goto question;
        }
      list.push_back (x);
  }while (!cin.fail()); // as long as the input is correct

  question:
  cout << "The values that you provided are: ";
  for (int n=0; n<list.size(); n++){
    cout << list.at(n) << ", ";
  }
  cout << "\n";
  int num = list.size();
  cout << "There was a total of " << num << " values" << endl;

  double newlist[num];
  for (int n=0; n<num; n++){
    newlist[n] = list.at(n);
  }

  double sum;
  sum = total (newlist, num);
  cout << "The sum of those values is: " << sum << endl;
  double avg = average(sum,num);
  cout << "The average of the values is: " << avg << endl;
  cout << "The standard deviation of the values provided is: " << standarddeviation (sum, avg, newlist, num) << endl;


  return 0;
}
