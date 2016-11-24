/*
 * 08.cpp
 *
 *  Created on: Nov 23, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>

using namespace std;

template <class T>
class Calculator {
private:
  T item;
  T item1;
public:
  Calculator(T,T);
  double add();
  double subtract();
  double multiply();
  double divide();
};


template <class T>
Calculator<T>::Calculator(T mitem, T mitem1){
  this->item = mitem;
  this->item1 = mitem1;
}
template <class T>
double Calculator<T>::add() {
  return item + item1;
}

template <class T>
double Calculator<T>::subtract() {
  return item - item1;
}
template <class T>
double Calculator<T>::multiply() {
  return item * item1;
}
template <class T>
double Calculator<T>::divide() {
  if (item1 == 0) {
    throw "division by zero";
  }
  else {
    return item / item1;
  }
}



int main() {
  //Create a class template for a calculator
        //it should have all the basic methods: add, subtract, multiply, divide
        //use exceptions to handle errors in special cases! (find the special cases!)

  try {
    Calculator<float> alma(3,4.5);
    cout << alma.add() << endl;
    cout << alma.subtract() << endl;
    cout << alma.multiply() << endl;
    cout << alma.divide() << endl;
  }
  catch(const char* err){
    cout << err << endl;
  }

  return 0;
}


