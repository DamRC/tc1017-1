#include <iostream>
#include <limits> // needed to get infinity
#include <cmath> // needed to round
#include <iomanip>
using namespace std;

double calculate_e(int precision){
  setprecision(8);
  double valueofe;
  double answer = 0;
  int n = numeric_limits<int>::max(); //to set "n" to infinity
  valueofe = pow((1+n),1/n);
  answer = round(valueofe * (pow(10, precision))) / pow(10, precision);
  cout << valueofe << endl;

  return answer;
}

int main(){
  int precision;

  cout << "Hello, please type in how many decimals you want for e: ";
  cin >> precision;
  cout << setprecision(precision+1);

  // to ensure correct input
  if(cin.fail()){
    cout << "Input error" << endl;
    return 0;
  }

  int n = numeric_limits<int>::max();
  cout << "e with " << precision << " decimals is " << calculate_e(precision) << endl;
  cout << "n: " << n << endl;

  return 0;
}
