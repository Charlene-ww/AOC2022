#include <iostream>
#include <fstream>
using namespace std;

int main() {

  int data[2266];

  int largestelev = 0;
  string mytxt;
  int myint;

  ifstream cfile("calories.txt");

  int i =0;
  while (getline(cfile, mytxt)){
    while (mytxt != ' ') {
      myint = stoi(mytxt);
      i = i + myint;
    }
    if (i > largestelev)
        largestelev = i;
  }
  cout << largestelev << endl;
  return 0;
}