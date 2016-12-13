//============================================================================
// Name        : week8day2.cpp
// Author      : robertwinke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  for (int i = 0; i < 10; ++i) {
    v.push_back(i);
  }

  // Print the first 5 elements of the vector using iterators

  for (vector<int>::iterator it = v.begin(); it != v.begin() + 5; it++) {
    cout << *it << endl;
  }

  return 0;
}
