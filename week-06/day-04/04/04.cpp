/*
 * 04.cpp
 *
 *  Created on: Nov 24, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>
#include <vector>

using namespace std;

void addElement(vector<char>& b) {
  char input;
  cout << "add en element, escape with '~'" << endl;
  cin >> input;
  while (input != '~') {
    b.push_back(input);
    cin >> input;
  }
}

void printVector(vector<char>& b) {
  for (unsigned int i = 0; i < b.size(); i++) {
    cout << b[i] << endl;
  }
}


int main() {
  //create a vector of chars with the size of zero;
  //write a function where the user can add characters to the end of this vector

  vector<char> v;

  addElement(v);
  printVector(v);



  return 0;
}
