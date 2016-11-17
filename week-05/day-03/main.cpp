//============================================================================
// Name        : Todolist.cpp
// Author      : robertwinke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <fstream>
#include <stdlib.h>
#include "Task.h"
#include "Taskhandler.h"

using namespace std;



void filePrint(string file) {

  ifstream my_file(file.c_str());
  string line;
  if(my_file.is_open()) {
    while(getline(my_file,line)) {
      cout << line << endl;
    }
  }
  else {
    cout << "you have nothing to do \n";
  }
  my_file.close();

}


int main(int argc, char* argv[]) {

  Taskhandler* todo = new Taskhandler;

  if (argc == 1) {
    filePrint("textFiles/usage.txt");
  }
  else {
    if (strcmp(argv[1], "-l") == 0) {
      filePrint("textFiles/newTasks.txt");
    }
    else if (strcmp(argv[1], "-a") == 0) {
      todo->addTask(argv[2], false);
    }
    else if (strcmp(argv[1], "-r") == 0) {
      cout << "removes task: \n";
    }
    else if (strcmp(argv[1], "-c") == 0) {
      todo->completeTask(atoi(argv[2]));
    }
    else {
      cerr << "invalid argument \n";
    }
  }

  delete todo;
	return 0;
}
