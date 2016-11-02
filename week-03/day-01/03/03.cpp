/*
 * 03.cpp
 *
 *  Created on: Nov 2, 2016
 *      Author: robertwinke
 */


#include <iostream>

using namespace std;

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it shoud print the average of the nubmers.
 * It should delete any dynamically allocated resource before the program exits.
 *
 *
 */
void getNumbers(int* count, float* array) {

  for (int i = 0; i < *count; i++) {
    cout << "gimme a number" << endl;
    cin >> array[i];
  }
}

float average(int* count, float* array) {
  float sum = 0;

  for (int i = 0; i < *count; i++) {
    sum += array[i];
  }
  return sum / *count;
}

int main() {
  int* countPointer;
  countPointer = new int;

  cout << "how many numbers will u give?" << endl;
  cin >> *countPointer;

  float* arrayPointer;
  arrayPointer = new float[*countPointer];

  getNumbers(countPointer, arrayPointer);

  cout << "the average is: " << average(countPointer, arrayPointer) << endl;

  delete countPointer;
  delete[] arrayPointer;
  countPonter = nullptr;
  arrayPointer = nullptr;

  return 0;
}

