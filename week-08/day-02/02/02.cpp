/*
 * 02.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <vector>

using namespace std;

// create a function that prints a vector using iterators
void display(vector<int>& v) {
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    cout << *it << endl;
  }
}

int main() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }
  display(v);
  return 0;
}
