/*
 * 05.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: robertwinke
 */


#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <iterator>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

using namespace std;

bool diffChecker(vector<string>& v, vector<string>& newVector) {
  for (unsigned int i = 0; i < v.size(); i++) {
    if (v[i] == newVector[i]) {
      return true;
    }
  }
  return false;
}
map<string,string> santaPairer (vector<string>& v) {
  map<string,string> pairs;
  vector<string> newVector = v;

  while(diffChecker(v, newVector)) {
    random_shuffle (newVector.begin(), newVector.end() );
  }
  for (unsigned int i = 0; i < v.size(); i++) {
    pairs[v[i]] = newVector[i];
  }
  return pairs;
}


void readNames(vector<string>& v) {
  string temp;
  cin >> temp;
  while(temp != "exit") {
    v.push_back(temp);
    temp = "";
    cin >> temp;
  }
}

int main() {
  srand(time(NULL));
  vector<string> names;
  map<string,string> pairs;
  cout << "gimme names" << endl;
  readNames(names);

  pairs = santaPairer(names);


  for (map<string,string>::iterator it = pairs.begin(); it != pairs.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }

  return 0;
}

