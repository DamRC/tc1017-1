#include <iostream>
#include <vector>
using namespace std;

void printDisplay(vector<char> line){
  cout << endl;
  cout << "\t" << "\t"  << line.at(0) << "\t" << line.at(1) << "\t" << line.at(2) << endl;
  cout << endl;
  cout << "\t"  << "\t" << line.at(3) << "\t" << line.at(4) << "\t" << line.at(5) << endl;
  cout << endl;
  cout << "\t" << "\t"  << line.at(6) << "\t" << line.at(7) << "\t" << line.at(8) << endl;
  cout << endl;
}

bool checkavailable(char space, vector<char> line){
  if(space == 'x' || space == 'o'){
    cout << "not a valid input, please try again: ";
    return false;
  }
  for (int n=0; n<9; n++){
    if(line.at(n)==space){
      return true;
    }
  }
  cout << "not a valid input, please try again: ";
  return false;
}


bool Horizontal(string letter, vector<string> line){

  for (int i = 0; i < 9; i+2) {

    if(line.at(i)==letter && line.at(i+4)==letter && line.at(i+8)==letter){
      return true;
    }
  }
  return false;
}

bool Vertical(string letter, vector<string> line){
  for (int i = 0; i < 9; i+3) {
    if(line.at(i)==letter && line.at(i+1)==letter && line.at(i+2)==letter){
      return true;
    }
  }
  return false;
}

bool Diagonal(string letter, vector<string> line){
  for (int i = 0; i < 9; i+3) {
    if(line.at(i)==letter || line.at(i+1)==letter || line.at(i+2)==letter){
          cout <<"Diagonal" << endl;
      return true;
    }
  }
  return false;
}

int main(){
  vector<char> line;
  char space;

  line.push_back('a');
  line.push_back('b');
  line.push_back('c');

  line.push_back('d');
  line.push_back('e');
  line.push_back('f');

  line.push_back('g');
  line.push_back('h');
  line.push_back('i');

  cout << "Hello! Let's play Tic Tac Toe" << endl;
  printDisplay(line);


  cout << "X goes first, please select the space you want to mark by" << endl;
  cout << "typing the letter on the keyboard: ";

  xinput:
  cin >> space;
  if(cin.fail()){
    cout << "invalid input" << endl;
    goto xinput;
  }
  if(!checkavailable(space, line)){
    goto xinput;
  }

  for (int n=0; n<9; n++){
    if(line.at(n)==space){
      line.at(n) = 'X';
    }
  }
  printDisplay(line);
  cout << "O's turn, type in the space you want to mark: ";

  oinput:
  cin >> space;
  if(cin.fail() || !checkavailable(space, line)){
    goto oinput;
  }
  for (int n=0; n<9; n++){
    if(line.at(n)==space){
      line.at(n) = 'O';
    }
  }
  printDisplay(line);
  cout << "X's turn, type in the space you want to mark: ";
  goto xinput;


  return 0;
}
