#include <iostream>
#include <iomanip>
using namespace std;

float num;

float division(float num, float divisor){
  setprecision(8);
  float answer;
  answer = num / divisor;
  return answer;
}

bool isanswer(float num, float divisor){
  if ((num/divisor) - .000001 == divisor || (num/divisor) + .000001 == divisor || (num/divisor) == divisor){
    return false;
  }
  return true;
}

float average(float divisor, float division){
  setprecision(8);
  float avg;
  avg = (divisor + division)/2;
  return avg;
}

int main(){
  cout << "Type in a number to get the square root: ";
  cin >> num;

  float divisor = 1.000000;
  float squareroot;


  do {
      divisor = average(divisor, division(num, divisor));
      cout << "new divisor: " << divisor << endl;  // to check if it's working
      cout << "new division: " << division(num, divisor) << endl; // to check if it's working
  } while(isanswer(num, division(num, divisor))==false);

  // needs to be outside of loop because loop only runs while isanswer() == false
  if (isanswer(num, divisor)==true){
    squareroot = division(num, divisor);
    cout << "The square root of " << num << " is " << squareroot << endl;
  }

  return 0;
}

// MAYBE TRY CONVERTING TO STRING TO MAKE VALID FOR BIGGER NUMBERS
