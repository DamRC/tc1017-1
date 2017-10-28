#include <fstream>
#include <iostream>
#include <string>
using namespace std;


struct lincha{
  int lines;
  int chars;
};

int main(){
  lincha count = {0, 0};
  string line;
  int length;
  fstream filetoread;
  filetoread.open("data.txt");

  if (!filetoread.is_open()){
    cout << "Fail opening file." << endl;
  }

  /*
  while (getline(filetoread,line)){
    cout << line << endl;
  }
  */ //to check if it's actually reading the file

  int blanks = 0;

  while (getline(filetoread, line)){
    count.lines ++;
    length = line.length() - 1;
    // cout << "line length: " << length << endl; // see the length of each line (it counts spaces as well)

  /*  for(int n=0; n<=length; n++){
      if(isalnum(line[n])){
        // cout << line[n]; // to see if it's reading the alnum chars (doesn't count symbols)
        count.chars ++;
      }
    }
  */
    // cout << "alphanumeric chars in line: " << count.chars << endl;

    /* another option would be to count the spaces with isblank() and subtract
      that number from length */
    for(int n=0;n<=length; n++){
      if(isblank(line[n])){
        blanks ++;
      }
    }
    count.chars = count.chars + length;
  }
  count.chars = count.chars - blanks;

  // cout << "blanks: " << blanks << endl; // check if the space count is correct

  cout << "Done reading file!" << endl;
  cout << "There are " << count.lines << " lines" << endl;
  cout << "and " << count.chars << " characters" << endl;

  filetoread.close(); //closes the file that's open, doesn't need parameter
  return 0;
}
