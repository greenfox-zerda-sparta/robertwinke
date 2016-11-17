/*
 * Taskhandler.cpp
 *
 *  Created on: Nov 16, 2016
 *      Author: robertwinke
 */
#include "Taskhandler.h"
#include <fstream>
#include <iostream>


Taskhandler::Taskhandler() {

  std::ifstream newTasks("textFiles/newTasks.txt");
  std::string line,noline;
  std::string word;
  int indexOfLine = 0;

  while(getline(newTasks, noline)) {
    indexOfLine++;
  }
  newTasks.close();

  newTasks.open("textFiles/newTasks.txt");
  if (newTasks.is_open()) {
    taskCount = 0;
    for(int j=0; j < indexOfLine; j++) {
      getline(newTasks,word,',');
      getline(newTasks,line);
      if (word[1] == 'X') {
        addTask(line, true);
      }
      else  {
        addTask(line, false);
      }
    }
  }
  else {
    taskCount = 0;
    tasks = NULL;
  }
  newTasks.close();
}

void Taskhandler::addTask(std::string task, bool done) {
  Task* new_task = new Task(task);

Task** temp = new Task*[taskCount + 1];
  for (int i = 0; i < taskCount; i++) {
    temp[i] = tasks[i];
  }
  if (done) {
    new_task->complete();
  }
  temp[taskCount] = new_task;
  delete[] tasks;
  tasks = temp;
  taskCount++;
}

void Taskhandler::completeTask(int index) {
  if (tasks != NULL) {
    tasks[index-1]->complete();
  }
}
void Taskhandler::removeTask() {

}
Taskhandler::~Taskhandler() {
  std::ofstream newTasks("textFiles/newTasks.txt");
  for (int i = 0; i < taskCount; i++) {
    if (!tasks[i]->getCompleted()) {
      newTasks << "[ ]," << tasks[i]->get_descriptipn() <<"\n";
    }
    else {
      newTasks << "[X]," << tasks[i]->get_descriptipn() <<"\n";
    }
  }

  newTasks.close();

  delete[] tasks;
}
