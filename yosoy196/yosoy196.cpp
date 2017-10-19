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
bool is_palindrome(BigInteger n){
  string num;
  num = bigIntegerToString(n);
  int lenght = num.legth();


  return true; // You need to fix this, this is not right
}

/*
 * This function receives a BigInteger n and returns the value of n plus the inverse of n.
 */
BigInteger apply196(BigInteger n){
  return n; // you need to replace this with code that works
}

/*
 * Your main program goes below and should use the two functions above
 */
int main() {
  cout << "Hola mundo" << endl;
  cout << "Holaaa" << endl;
  BigInteger n;
  cout << "type in a number" << endl;
  getline(cin, n);
  string num;
  num = bigIntegerToString(n);
  int length = num.length();

  cout << "length: " << length << endl;
  return 0;
}
