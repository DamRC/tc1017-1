// quiz week 10 with actual user input
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

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
  cout << "Please type in a sentence and press enter when you're done" << endl;
  string s;
  getline(cin, s);
  cout << "Which character do you want me to count?" << endl;
  char theChar;
  cin >> theChar;
  int count = countChars(s,theChar);

  cout << "We found " << count << " of " << theChar << endl;
  return 0;
}
