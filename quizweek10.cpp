#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

// better as unsigned since it cannot be negative.
unsigned int countChars(string userInput, char theChar){
  int count = 0;
  int stringLength = userInput.length();
  for (int n=0; n<stringLength; n++){
      if (userInput[n]==theChar){
        count = count + 1;
      }
  }
  // do the work here to get the right count.
  return count;
}

int main(){
  string s = "Hey, this is a cool assignment.";
  char theChar = 'o';
  int count = countChars(s,theChar);
  // so this should print 2, right?
  cout << "We found " << count << " of " << theChar << endl;
  return 0;
}
