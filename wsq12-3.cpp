#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n){
  if(n==0){
    return 1;
  }
  else{
    int recursion = factorial(n-1);
    int answer = n*recursion;
    return answer;
  }
}

double calculate_e(int precision){
  double answer;
  double valueofe = 0;
  for(int n=0; n<100; n++){
    valueofe = valueofe + (1/factorial(n));
  }
  answer = round(valueofe*pow(10, precision))/pow(10, precision);
  return answer;
}

int main(){
  cout << "Type in precision: ";
  int precision;
  cin >> precision;

  if(cin.fail()){
    cout << "Input error.";
    return 0;
  }

  cout << "factorial: " << factorial(10) << endl;
  cout << "value of e with " << precision << " decimals is " << calculate_e(precision) << endl;

  return 0;
}
