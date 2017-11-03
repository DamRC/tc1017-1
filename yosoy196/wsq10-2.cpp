#include <iostream>
using namespace std;

int main(){
  int num;
  cout << "type in a number to get its square root: ";
  cin >> num;

  double squareroot;
  double divisor = 1;
  do{
    if(num/divisor == divisor){
      squareroot = divisor;
      cout << "the square root of " << num << " is " << squareroot << endl;
      return 0;
    }
    else{
      divisor = ((num/divisor) + divisor)/2;
    }
  }while(num/divisor != divisor);

  return 0;
}
