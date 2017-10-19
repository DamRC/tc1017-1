// Solving Problems with Programming
// Professor Ken Bauer
//
// Valeria CT
// A01229266

// Standard libraries
#include <string>
#include <iostream>

using namespace std;

// `BigIntegerLibrary.hh' includes all of the library headers.
#include "BigIntegerLibrary.hh"

/*
 * This function receives a BigInteger n and checks if it is a palindrome
 * Return true if n is a palindrome, return false otherwise
 */
bool is_palindrome(string num, int length, int back){

  for (int i=0; i<(length/2); i++){
    int b = back - i;
    if (num[i] != num[b]){
      return false;
    }
  }
  return true; // You need to fix this, this is not right
}

/*
 * This function receives a string n and returns a BigInteger sum (new value to check palindromicity).
 */
BigInteger Iterate(string num, int back, BigInteger numint){
  string inverse;
  for (int i=0; i<=back; i++){
    int b = back - i;
    inverse[i] = num[b];
    inverse = inverse + inverse[i];
  }
  BigInteger invint = stringToBigInteger(inverse);
  BigInteger sum;
  sum = numint + invint;

  return sum;
}

/*
 * Your main program goes below and should use the two functions above
 */
int main() {
  string num;
  BigInteger numint;
  cout << "type in a number: ";
  getline(cin, num);
  numint = stringToBigInteger(num);

  int length = num.length(); //count so you can compare opposites
  int back = length - 1;


  recurse:
  if (is_palindrome(num, length, back) == true){
    cout << num << " is a palindrome" << endl;
    goto next;
  }
  else{
    cout << num << " is NOT  a palindrome" << endl;
    BigInteger sum = Iterate(num, back, numint);
    num = bigIntegerToString(sum);
    goto recurse;
  }

  next:
  cout << "done" << endl; //erase later

  return 0;
}
