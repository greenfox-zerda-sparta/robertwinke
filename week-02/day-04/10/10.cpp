/*
 * 10.cpp
 *
 *  Created on: Oct 27, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <string>

// Create a game that figures a number that the user picked between 0 and 10
// It should ask questions like:
//  - Is the number greater than 5? [y/n]
//  - Is the number smaller than 4? [y/n]
// (don't have to ask both kind)
//
// It should wait for input after the question
//
// If the answer is not "y" or "n" it should re-ask the question;
//
// If the program knows enough it should tell the picked number like:
// Your number is: 8

int average(int min, int max){
  int av = (min + max) / 2;
  return av;
}

using namespace std;

int main() {
  int min;
  int max;
  char input;

  cout << "set a min and a max" << endl;
  cin >> min >> max;


  cout << "is it smaller than " << average(min, max) << endl;
  cin >> input;

      while (min != max){
        if (input == 'n'){
          min = average(min, max);
          cout << "is it smaller than " << average(min, max) << endl;
          cin >> input;
        }
        else if (input == 'y') {
          max = average(min, max);
          cout << "is it smaller than " << average(min, max) << endl;
          cin >> input;
        }
        else {
          cout << "wrong input try again [y/n]" << endl;
          cin >> input;
        }
      }

  cout << "you thoguht of "<< max << endl;
  return 0;
}

