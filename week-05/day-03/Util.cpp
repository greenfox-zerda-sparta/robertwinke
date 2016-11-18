/*
 * Util.cpp
 *
 *  Created on: Nov 18, 2016
 *      Author: robertwinke
 */

#include "Util.h"

int taskCounter(){
  std::ifstream newTasks("textFiles/newTasks.txt");
  std::string line;
  int indexOfLine = 0;

  while(getline(newTasks, line)) {
    indexOfLine++;
  }
  newTasks.close();

  return indexOfLine;
}

void taskPrint(std::string file) {
  std::ifstream my_file(file.c_str());
  std::string line;
  int counter = 1;
  if(my_file.is_open()) {
    while(getline(my_file,line)) {
      std::cout <<counter <<". " << line << std::endl;
      counter++;
    }
  }
  else {
    std::cout << "You have nothing to do :)\n";
  }
  my_file.close();
}
void filePrint(std::string file) {
  std::ifstream my_file(file.c_str());
  std::string line;
  if(my_file.is_open()) {
    while(getline(my_file,line)) {
      std::cout << line << std::endl;
    }
  }
  my_file.close();

}
