//============================================================================
// Name        : week8day3.cpp
// Author      : robertwinke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Color.hpp"
#include <iostream>
using namespace std;

int main() {
  Color black;



  Color red(200,0,0);
  Color red2(200,0,0);

  Color ize;
  Color vmi;

  ize = ++red;
  vmi = red2++;

  //vmi = vmi*0.1;

  if(red <= red2) {
    cout << "sfgf";
  }

//  cout <<  (int)red.red_ << "|" <<(int)red.green_<< "|" << (int)red.blue_ << endl;
//  cout <<  (int)ize.red_ << "|" <<(int)ize.green_<< "|" << (int)ize.blue_ << endl;
//
//  cout << endl;
//  cout <<  (int)red2.red_ << "|" <<(int)red2.green_<< "|" << (int)red2.blue_ << endl;
//  cout <<  (int)vmi.red_ << "|" <<(int)vmi.green_<< "|" << (int)vmi.blue_ << endl;

	return 0;
}
