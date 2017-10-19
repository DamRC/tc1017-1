#include <iostream>
#include <string>
#include "BigIntegerLibrary.hh"
using namespace std;

int main(){
  BigInteger numint;
  string num;
  cout << "type in a number" << endl;
  getline(cin, num); // make the input a string so that it can happen
  numint = stringToBigInteger(num); //convert string to BigInteger to make operations

  int length = num.length(); //count so you can compare opposites
  int back = length - 1;

// checks if they're equal lenght/2 times (if it's an odd number, it won't need to check, so it doesn't do it)
  for (int i=0; i<(length/2); i++){
    int b = back - i;
    if (num[i] != num[b]){
      cout << "DIFFERENT!" << endl;
      goto iterate;
    }
  }

  iterate:

    string inverse;
    for (int i=0; i<=back; i++){
      int b = back - i;
      inverse[i] = num[b]; // reverses numbers in the string
      inverse = inverse + inverse[i] ; //build up the string
    }
    BigInteger invint;
    invint = stringToBigInteger(inverse);
    cout << "inverse: " << inverse << endl;
    BigInteger sum = numint + invint;
    cout << "sum: " << BigInteger(sum) << endl;


  cout << "input: " << num << endl;
  cout << "length: " << length << "  back: " << back << endl;

  return 0;
}
