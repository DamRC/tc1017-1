#include <iostream>
#include <string>
using namespace std;

int main (){
  cout << "give me a name" << endl;
  string n;
  getline(cin, n);
  cout << "you wrote: " << n << endl;


  return 0;
}
