/*
 * 07.cpp
 *
 *  Created on: Nov 23, 2016
 *      Author: robertwinke
 */




#include <iostream>
#include <string>

using namespace std;

template <class T,class U>
class Simple_class {
private:
  T item;
  U item1;
public:
  void setItem(T);
  T getItem();
  void setItem1(U);
  U getItem1();
};

template <class T, class U>
void Simple_class<T,U>::setItem(T item) {
  this->item = item;
}

template <class T,class U>
T Simple_class<T,U>::getItem() {
  return item;
}
template <class T, class U>
void Simple_class<T,U>::setItem1(U item) {
  this->item1 = item;
}

template <class T,class U>
U Simple_class<T,U>::getItem1() {
  return item1;
}

int main() {
  //Create a simple class template which contains 2 item and has both a get and a set method for these!
  Simple_class<string,float> a;
  a.setItem("dfgd");
  a.setItem1(2.0);
  cout << a.getItem() << endl;
  cout << a.getItem1() << endl;

  return 0;
}
