/*
 * 06.cpp
 *
 *  Created on: Dec 13, 2016
 *      Author: robertwinke
 */



#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

// Write a program that creates a text file named alice_words.txt
// containing an alphabetical listing of all the words,
// and the number of times each occurs, in the text version of
// Alice’s Adventures in Wonderland.
// (You can obtain a free plain text version of the book,
// along with many others, from http://www.gutenberg.org.)
//
// The first 10 lines of your output file should look something like this:
//
// Word              Count
// =======================
// a                 631
// a-piece           1
// abide             1
// able              1
// about             94
// above             3
// absence           1
// absurd            2
//
// How many times does the word alice occur in the book?
// What is the longest word in Alice in Wonderland?
// How many characters does it have?
int wordCount(vector<string>& text, string word) {
  int counter = 0;
  for (unsigned int i = 0; i < text.size(); i++) {
    if (text[i] == word) {
      counter++;
    }
  }
  return counter;
}

map<string,int> wordCountInFile(const char* title) {
  map<string,int> myMap;
  vector<string> text;
  string temp;
  string word;
  ifstream myFile;
  myFile.open(title);

  while(myFile >> word) {

    transform(word.begin(), word.end(), word.begin(), ::tolower);

    for (int i = 0; i < word.length(); i++) {
      if (word[i] > 91 && word[i] < 123) {
        temp += word[i];
      }
    }
    text.push_back(temp);
    temp = "";
  }
  for (unsigned int i = 0; i < text.size(); i++) {
    myMap[text[i]] = wordCount(text, text[i]);
  }
  myFile.close();
  return myMap;
}

int main() {
  map<string,int> myMap;

  string title = "alice.txt";

  myMap = wordCountInFile(title.c_str());

  ofstream output;



  for (map<string,int>::iterator it = myMap.begin(); it != myMap.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }

  return 0;
}

