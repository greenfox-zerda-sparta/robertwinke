/*
 * 18.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: robertwinke
 */

int number_of_even(int array[], int l){
  int sum = 0;
  for (int i = 0; i < l; i++) {
    if (array[i] % 2 == 0){
      sum += 1;
    }
  }
  return sum;
}


#include <iostream>
using namespace std;

int main(){
  int numbers[] = {4, 5, 6, 2, 3, 8, 6, 5};
  // create a function that takes an array and it's length as an agrument
  // and returns a number that states how many even numbers are in the array
  int length = sizeof(numbers) / sizeof(int);

  cout << number_of_even(numbers,length) << endl;
  return 0;
}
