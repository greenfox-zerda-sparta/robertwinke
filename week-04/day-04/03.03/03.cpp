//============================================================================
// Name        : week4d4ex3.cpp
// Author      : robertwinke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>
#include "ParentClass.h"
#include "ChildClass.h"
using namespace std;


// Destructors: Why we use them, and how they work. Illustration.
// Check what the code does. Read, understand!
// Correct the code, so that the destructors work as intended.
// i.e.: They clear up everything after themselves from the memory.


int main() {
  ParentClass* a = new ChildClass();
  string* stra = a->getStringAddress();
  string* strb = ((ChildClass*)a)->getChildStringAddress();
  cout << *stra << endl << *strb << endl;
  delete a;
  cout << "a deleted: ----------------------------------------" << endl;
  cout << *stra << endl << *strb << endl;
  return 0;
}
