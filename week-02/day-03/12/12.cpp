/*
 * 12.cpp
 *
 *  Created on: Oct 26, 2016
 *      Author: robertwinke
 */


#include <iostream>
using namespace std;

bool includes (int *result, int l, int b){
  for (int i = 0; i < l; i++){
    if (result[i] == b){
      return true;
    }
  }
  return false;
}

void safeUnion(int *a, int l_a, int *b, int l_b, int *result, int l_res) {
  // Implement this function to create the union of a and b into the array result!

  for (int i = 0; i < l_a; i++){
    result[i] = a[i];
  }

  int x = 0;
  for (int j = 0; j < l_b; j++){
    if (!includes(result, l_res, b[j])){
      result[x+l_a] = b[j];
      x++;
    }
  }
}

int numberOfRepeats(int *a, int l_a, int *b, int l_b){
  int counter = 0;
  for (int i = 0; i < l_a; i++){
    for (int j = 0; j < l_b; j++){
      if(a[i] == b[j]){
        counter++;
      }
    }
  }
  return counter;
}

int main(int argc, char** argv) {
  int a[3] = {1,2,3};
  int b[3] = {4,3,1};

  int number = 6 - numberOfRepeats(a,3,b,3);
  int c[number];

  safeUnion(a,3,b,3,c,number);
  for (int i = 0; i<number; i++) cout <<c[i] << endl;

}

