/*
 * 19.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: robertwinke
 */


#include <iostream>
using namespace std;

bool is_prime(int n) {
  if (n <= 2) {
    return false;
  }
  else {
    for (int i = 2; i < n; i++) {
      if (n % i == 0) {
        return false;
      }
      else {
        return true;
      }
    }
  }
}

int main(){
  int number = 121;
  // create a function that decides if a number is a prime number.
  // It should take a number as an argument and return true if it is prime and
  // false otherwise.

  cout << is_prime(number) << endl;
  return 0;
}

