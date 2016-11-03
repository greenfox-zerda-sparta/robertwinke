/*
 * 04.cpp
 *
 *  Created on: Nov 3, 2016
 *      Author: robertwinke
 */

#include <string>
#include <iostream>

using namespace std;

struct Pirate {
  string name;
  bool has_wooden_leg;
  short int gold_count;
};

// Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates

// Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate

// Create a function that takes an array of pirates (and it's length) then returns the name of the
// richest that has wooden leg

int gold_sum(Pirate pirates[], int length) {
  int sum = 0;

  for (int i = 0; i < length; i++){
    sum += pirates[i].gold_count;
  }

  return sum;
}

float gold_average(Pirate pirates[], int length) {
  int sum = gold_sum(pirates, length);

  float average = float(sum) / length;
  return average;
}

string richest_woodenlegged(Pirate pirates[], int length){
  int index , gold;
  index = gold = 0;

  for (int i = 0; i < length; i++){
    if (pirates[i].has_wooden_leg){
      if (pirates[i].gold_count > gold) {
        gold = pirates[i].gold_count;
        index = i;
      }
    }
  }
  return pirates[index].name;
}

int main() {
  Pirate pirates[] = {
    {"Jack", false, 18},
    {"Uwe", true, 8},
    {"Hook", true, 12},
    {"Halloween kid", false, 0},
    {"Sea Wolf", true, 14},
    {"Morgan", false, 1}
  };

  cout << gold_sum(pirates, 6) << endl;
  cout << gold_average(pirates, 6) << endl;
  cout << richest_woodenlegged(pirates, 6) << endl;
  return 0;
}


