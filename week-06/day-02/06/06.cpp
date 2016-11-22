/*
 * 06.cpp
 *
 *  Created on: Nov 22, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
  srand(time(NULL)); // This initializes the random generator.
  int rnd = 0;
  for (int i=0; i<20; i++) {
    rnd = rand() % 5; // generate a random number in the range [0, 4]
    try {
      switch (rnd) {
        case 0:
          throw 3.2f;
          break;
        case 1:
          throw double(43.56);
          break;
        case 3:
          throw "Abrakadabra";
          break;
        case 4:
          throw false;
          break;
        default:
          throw 12;
          break;
      }
    }
    catch(float err) {
      cout << "float: " << err << endl;
    }
    catch(double err) {
      cout << "double: " << err << endl;
    }
    catch(const char* err) {
      cout << "string: " << err << endl;
    }
    catch(bool err) {
      cout << "bool: " << err << endl;
    }
    catch(int err) {
      cout << "int: " << err << endl;
    }
// Write catch blocks for each possibly thrown exception.
// In each catch block write out what the exception's type was. And what the exceptions value was.

  }

  return 0;
}

