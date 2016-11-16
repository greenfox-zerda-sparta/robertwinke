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
#include "Task.h"
#include "Taskhandler.h"

using namespace std;

int taskNumber = 1;

string toString(int number) {
  stringstream ss;
  ss << number;
  string str = ss.str();
  return str;
}

void filePrint(string file) {

  ifstream my_file(file.c_str());
  string line;

  while(getline(my_file,line)) {
    cout << line << endl;
  }
  my_file.close();

}

void addTask(string task) {

  string fileName = "textFiles/task_" + toString(taskNumber) + ".txt";
  taskNumber++;

  ofstream newTask(fileName.c_str());
  ofstream contents("textFiles/tableOfContents.txt");

  contents << fileName;

  newTask << task;

  newTask.close();
}

int main(int argc, char* argv[]) {

  Taskhandler todo;

  if (argc == 1) {
    filePrint("textFiles/usage.txt");
  }
  else {
    if (strcmp(argv[1], "-l") == 0) {
      cout << "lists all the tasks: \n";
    }
    else if (strcmp(argv[1], "-a") == 0) {
      todo.addTask(argv[2]);
    }
    else if (strcmp(argv[1], "-r") == 0) {
      cout << "removes task: \n";
    }
    else if (strcmp(argv[1], "-c") == 0) {
      cout << "completes a task: \n";
    }
    else {
      cerr << "invalid argument \n";
    }
  }

	return 0;
}
