/*
 * 06.cpp
 *
 *  Created on: Nov 3, 2016
 *      Author: robertwinke
 */


#include <string>
#include <iostream>

using namespace std;

enum Subject {MATH, HISTORY, ENGLISH, SCIENCE};

struct Grade {
  Subject subject;
  int value;
};

struct Student {
  string name;
  int age;
  Grade* grades;
  int grade_count;
};


// Create a function the constructs a Student (returns a pointer to a new student)
// It should take it's name and it's age as parameter
// It should allocate 5 grades
// It should set the grade_count to 0

Student* student_constructor(string name, int age) {
  Student* new_student = new Student;

  new_student->name = name;
  new_student->age = age;
  new_student->grades = new Grade[5];
  new_student->grade_count = 0;

  return new_student;
}

// Create a function that takes 3 parameters:
// A reference to a Student
// A Subject
// An int (1-5)
// It should set the last grade's values with the given arguments

void set_grade(Student& stud, Subject sub, int grade) {
  int index = stud.grade_count;
  stud.grades[index].subject = sub;
  stud.grades[index].value = grade;

  stud.grade_count += 1;
}

// Create a function that takes a Student as a reference and returns the subject
// that the student has worst grade in

Subject worst_subject(Student& stud) {
  int worst = stud.grades[0].value;
  int worst_index  = 0;
  for (int i = 1; i < stud.grade_count; i++) {
    if (worst > stud.grades[i].value) {
      worst = stud.grades[i].value;
      worst_index++;
    }
  }
  return stud.grades[worst_index].subject;
}

// Create a function that deconstructs a Student
// It should take a pointer that points to the student
// It should deallocate each Grade and the Student itself

void student_deconstructor(Student* stud) {

  delete[] stud->grades;
  stud->grades = NULL;
  delete stud;
  stud = NULL;

}

int main() {

  Student* kristof = student_constructor("Kristof", 26);

  set_grade(*kristof, MATH, 5);
  set_grade(*kristof, HISTORY, 4);
  set_grade(*kristof, ENGLISH, 2);
  set_grade(*kristof, SCIENCE, 4);

  cout << worst_subject(*kristof) << endl;

  student_deconstructor(kristof);

  return 0;
}

