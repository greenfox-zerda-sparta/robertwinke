/*
 * 08.cpp
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
  string word = "GREENFOX";
  cout << "type in GREENFOX" << endl;

  for (int i = 0; i < 8; i++) {
    cin >> input;
    if (input != word[i]) {
      cout << "wrong letter try again" << endl;
      i--;
    }
    else {
      b.at(i) = input;
    }
  }
}

void printVector(const vector<char>& b) {
  for (unsigned int i = 0; i < b.size(); i++) {
    cout << b[i];
  }
}


int main() {
  //create a vector of characters with the size of 8
  //ask the user to fill this vector with characters one by one
  //at the end make sure the vector holds the letters of "GREENFOX"
  //so correct the user if he/she gives a different letter from the one we want them to give :)

  vector<char> v(8);

  addElement(v);

  printVector(v);


  return 0;
}
