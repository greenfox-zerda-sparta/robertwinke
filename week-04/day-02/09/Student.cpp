/*
 * Student.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: robertwinke
 */
#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(string name) {
  this->name = name;
}

Student::~Student() {
  delete[] grades;
}

void Student::add_grade(int grade) {
  if (grade > 5 || grade < 0) {
    cerr << "invalid grade";
    return;
  }
  else {
    grades[grade_count] = grade;
    ++grade_count;

    if (grade_count == array_size*0.8) {
      array_size *= 2;
      int* new_grades = new int[array_size];
      for (int i = 0; i < grade_count; i++) {
        new_grades[i] = grades[i];
      }
      delete[] grades;
      grades = new_grades;
    }
  }
}

double Student::get_average() {
  double sum = 0;
  for (int i = 0; i < grade_count; i++) {
    sum += grades[i];
  }
  return sum / grade_count;
}


