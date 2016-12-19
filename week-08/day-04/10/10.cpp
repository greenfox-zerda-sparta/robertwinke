/*
 * 10.cpp
 *
 *  Created on: Dec 15, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

int fibonacciNum(int num) {
  if (num == 0) {
    return 0;
  }
  if (num == 1) {
    return 1;
  }
  return fibonacciNum(num-1) + fibonacciNum(num-2);
}

int main() {
// The fibonacci sequence is a famous bit of mathematics, and it happens to
// have a recursive definition. The first two values in the sequence are
// 0 and 1 (essentially 2 base cases). Each subsequent value is the sum of the
// previous two values, so the whole sequence is: 0, 1, 1, 2, 3, 5, 8, 13, 21
// and so on. Define a recursive fibonacci(n) method that returns the nth
// fibonacci number, with n=0 representing the start of the sequence.

  cout << fibonacciNum(6);

  return 0;
}

