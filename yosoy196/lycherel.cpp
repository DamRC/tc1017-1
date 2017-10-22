#include <iostream>
#include <string>
#include "BigIntegerLibrary.hh"
using namespace std;

BigInteger lower;
BigInteger higher;

string l;
string h;

BigInteger lycherels; // count of lycherels
BigInteger nolycherels; // count of non-lycherels

/* This function checks char by char if it's a digit,
it'll return false if the string contains a "-", a
symbol or a letter (it only returns true for numbers) */
bool isnumber(string boundary){
  for (int i = 0; i < boundary.length(); i++){
    if (isdigit(boundary[i]) == false){
      return false;
    }
  }
  return true;
}


/* This function checks for the palondromicity of a number.
It's called by the function islycherel(). */
bool ispalindrome(BigInteger n){
  string num = bigIntegerToString(n);
  int length = num.length();
  int back = length - 1;

  for (int i=0; i<(length/2); i++){
    int b = back - i;
    if (num[i] != num[b]){
      return false;
    }
  }
  return true;
}

/*This function does the process of reversing the argument and adding
the inverse to the argument to check palondromicity of the new number.
It's called by the function islycherel() after ispalindrome() returns false*/
BigInteger Iterate(BigInteger n){
  string num = bigIntegerToString(n);
  int back = num.length() - 1;
  BigInteger numint = n;
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

bool islycherel(BigInteger n){
  for (int i=1; i<=30; i++){
      if (ispalindrome(n) == true){
        return false;
      }
      else{
        n = Iterate(n);
      }
    }
    return true;
}

/*This function is similar to the one that checks for lycherels, but it
doesn't iterate and check 30 times, so it only increases if the number is
a natural palindrome*/
BigInteger naturalpals(BigInteger lower, BigInteger higher){ //count of natural palindromes
  int count = 0;
  for (BigInteger num=lower; num<=higher; num++){
    if (ispalindrome(num)==true){
      count++;
    }
  }
  return count;
}

int main(){
  asklow:
    cout << "Please type in a lower boundary: ";
    getline(cin, l);
    cout << endl;
    if (isnumber(l) == false){
      cout << "ERROR. Please type in a non-negative integer." << endl;
      goto asklow;
    }
    else{
      lower = stringToBigInteger(l);
    }

  askhigh:
    cout << "Please type in an upper boundary: ";
    getline(cin, h);
    cout << endl;
    if (isnumber(h) == false){
      cout << "ERROR. Please type in a non-negative integer." << endl;
      goto askhigh;
    }
    else{
      higher = stringToBigInteger(h);
    }
    if (higher < lower){
      cout << "ERROR. Upper must be greater than lower." << endl;
      goto askhigh;
    }


    for (BigInteger num=lower; num<=higher; num++){
      if (islycherel(num)==false){
        nolycherels++;
      }
      if (islycherel(num)==true){
        lycherels++;
        cout << "We found a lycherel number and it's " << num << endl;
      }
    }

  nolycherels = nolycherels - naturalpals(lower, higher);

  cout << endl;
  cout << "All done! Here is the analysis for range " << lower << " to " << higher << endl;
  cout << "Natural Palindromes: " << naturalpals(lower, higher) << endl;
  cout << "Non-lycherels: " << nolycherels << endl;
  cout << "Lycherels: " << lycherels << endl;

  return 0;
}
