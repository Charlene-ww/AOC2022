#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  
  int current = 0;
  int newtotal = 0; 
  string mytxt;

  ifstream nFile("calories.txt");
  while (getline(nFile, mytxt)) {
    
    if (mytxt.empty()) {   
      
      if (current == 0){ 
        current = newtotal; 
        }
      else if (current > newtotal) {
        newtotal = current;
        }
        
      current = 0;
        
      }
    else 
      current += stoi(mytxt);
      
    }  
     
   
  cout << newtotal;
  return 0;
  }




