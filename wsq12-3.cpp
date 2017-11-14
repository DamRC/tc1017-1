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

double calculate_e(double precision){
  double memory;
  double valueofe = 0;
  int n = 0;
  cout.precision(10);
  do{
    memory = valueofe;
    valueofe = valueofe + (1.0/factorial(n));
    // cout << "memory: " << memory << endl;
    // cout << "value of e: " << valueofe << endl;
    n++;
  }while((valueofe-memory)>precision);
  return valueofe;
}

int main(){
  cout << "Type in precision: ";
  double precision;
  cin >> precision;

  if(cin.fail()){
    cout << "Input error.";
    return 0;
  }


  cout << "value of e with precision of " << precision << " is " << calculate_e(precision) << endl;

  return 0;
}

// change precision to double
// stop loop when difference between last and new value is precision (.1-.00001)
// it's not precision of output, but of value
