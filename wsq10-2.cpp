#include <iostream>
#include <cmath> //include this library to be able to round
using namespace std;

int main(){
  int num;
  cout << "type in a number to get its square root: ";
  cin >> num;

  double squareroot;
  double divisor = 1;
  double memory, division;

  do{
    /* by rounding (multiply first because it rounds to whole NUMBERS)
    you specify the amount of decimals to consider for the conditional check
    !!! DON'T FORGET TO DIVIDE AT THE END TO GET THE REAL VALUE*/
    division = round((num/divisor)*100000000) /100000000;
    memory = round(divisor*100000000)/100000000;
    divisor = round(((division + memory)/2)*100000000)/100000000;
  /*  cout << "division: " << division << endl;
    cout << "memory: " << memory << endl;
    cout << "new divisor: " << divisor << endl;
    cout << endl;
  */ // these are to ckeck the process
  }while(division != divisor);

  cout << "stop" << endl;

  squareroot = divisor;
  cout << "the square root of " << num << " is " << squareroot << endl;

  return 0;
}
