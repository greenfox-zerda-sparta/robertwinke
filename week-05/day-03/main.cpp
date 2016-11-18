//============================================================================
// Name        : Todolist.cpp
// Author      : robertwinke
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <stdlib.h>
#include "Util.h"
#include "Task.h"
#include "Taskhandler.h"

using namespace std;


int main(int argc, char* argv[]) {

  Taskhandler* todo = new Taskhandler;

  if (argc == 1) {
    filePrint("textFiles/usage.txt");
  }
  else {
    if (strcmp(argv[1], "-l") == 0) {
      taskPrint("textFiles/newTasks.txt");
    }
    else if (strcmp(argv[1], "-a") == 0) {
      if (argc < 3) {
        cerr << "Unable to add: No task is provided\n";
      }
      else {
        todo->addTask(argv[2], false);
      }
    }
    else if (strcmp(argv[1], "-r") == 0) {
      if (argc < 3) {
        cerr << "Unable to remove: No index is provided\n";
      }
      else {
        todo->removeTask(atoi(argv[2]));
      }
    }
    else if (strcmp(argv[1], "-c") == 0) {
      if (argc < 3) {
        cerr << "Unable to complete: No index is provided\n";
      }
      else {
        todo->completeTask(atoi(argv[2]));
      }
    }
    else if (strcmp(argv[1], "-ca") == 0) {
      todo->completeAll();
    }
    else {
      cerr << "invalid argument \n";
    }
  }

  delete todo;
	return 0;
}
