/*
 * Student.h

 *
 *  Created on: Nov 8, 2016
 *      Author: robertwinke
 */
#include <iostream>
#include <string>
using namespace std;

#ifndef STUDENT_H_
#define STUDENT_H_


class Student {
public:
  Student(string name);
  ~Student();
  void add_grade(int grade);
  double get_average();

private:
  string name;
  int array_size = 16;
  int* grades = new int[array_size];
  int grade_count = 0;
};
#endif /* STUDENT_H_ */
