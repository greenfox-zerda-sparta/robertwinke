/*
 * 05.cpp
 *
 *  Created on: Nov 3, 2016
 *      Author: robertwinke
 */


#include <string>
#include <iostream>

using namespace std;

// Create a struct that represents a House
// It should store:
//  - The address of the house
//  - The price in EUR
//  - The number of rooms
//  - The area of the house in square meters
//
// The market price of the houses is 400 EUR / square meters
// Create a function that takes a refrence to a house and decides if it's worth to buy
// (if the price is lower than the calculated price from it's area)
//
// Create a function that takes an array of houses (and it's length), and counts the
// houses that are worth to buy.
//
// Create a function that takes an array of houses (and it's length),
// then it creates a new array that consists new houses with the calculated price,
// but all the other properties are the same.

struct House {
  string address;
  int price;
  int number_of_rooms;
  int area;
};

bool is_worth(House& wohnung) {
  bool isit = false;
  if (wohnung.price < wohnung.area * 400) {
    isit = true;
  }
  return isit;
}

int count_worth(House houses[], int length) {
  int count = 0;

  for (int i = 0; i < length; i++){
    if (is_worth(houses[i])) {
      count += 1;
    }
  }

  return count;
}

House* newly_priced_houses(House houses[], int length) {
  House* new_houses = new House[length];
  for (int i = 0; i < length; i++) {
    new_houses[i] = houses[i];
    new_houses[i].price = houses[i].area * 400;
  }

  return new_houses;
}

int main() {
  House my_house = {"4031 db", 4000, 4, 200};

  House houses[] = {
      {"sfgdfg", 20000, 3, 150},
      {"sgaaf", 300000000, 4, 210},
      {"gdhfkjhk", 123110, 2, 120},
      {"sdfsdss", 12342, 3, 300}
  };

  cout << is_worth(my_house) << endl;
  cout << count_worth(houses, 4) << endl;

  House* houses_pointer = newly_priced_houses(houses, 4);

  cout << houses_pointer[1].price << endl;

  delete[] houses_pointer;


  return 0;
}

