

#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {


  try {
    throw 2;

  }
  catch(int e) {
    cout << e;
  }

  return 0;
}


