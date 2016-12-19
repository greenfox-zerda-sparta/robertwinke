//============================================================================
// Name        : week8d4.cpp
// Author      : robertwinke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

void countDown(int n) {
  if (n == 0) {
    return;
  }
  cout << n << endl;
  countDown(n-1);
}

int main() {
// write a recursive function
// that takes one parameter: n
// and counts down from n

  countDown(6);

  return 0;
}
