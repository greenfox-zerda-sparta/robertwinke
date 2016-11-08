/*
 * 01.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: robertwinke
 */




#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
};

int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21

  Student student1;
  student1.name = "John";
  student1.age = 21;

  cout << student1.name;


  return 0;
}
