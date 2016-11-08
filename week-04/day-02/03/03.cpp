/*
 * 03.cpp
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
    Student(string name, unsigned int age) {
      this->age = age;
      this->name = name;
    }
    string greet() {
      return "Hello my name is: " + name;
    }
};

int main() {
  // Create a method on the Student class called "greet" that returns a string
  // like: "Hello my name is: <student name>"

  Student student1("john", 21);

  cout << student1.greet();

  return 0;
}


