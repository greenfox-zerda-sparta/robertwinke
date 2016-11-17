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
  std::string line;
  if (newTasks.is_open()) {
    taskCount = 0;
    while(getline(newTasks,line)) {
      addTask(line);
    }
  }
  else {
    taskCount = 0;
    tasks = NULL;
  }
  newTasks.close();
}

void Taskhandler::addTask(std::string task) {
  Task* new_task = new Task(task);

  Task** temp = new Task*[taskCount + 1];
  if (tasks != NULL) {
    for (unsigned int i = 0; i < taskCount+1; i++) {
      temp[i] = tasks[i];
    }
  }
  temp[taskCount] = new_task;
  delete[] tasks;
  tasks = temp;
  taskCount++;
}

void Taskhandler::completeTask(std::string task) {
  if (tasks != NULL) {
    for (unsigned int i = 0; i < taskCount; i++) {
      if (tasks[i]->get_descriptipn() == task) {
        tasks[i]->complete();
      }
    }
  }
}
void Taskhandler::removeTask() {

}
Taskhandler::~Taskhandler() {
  std::ofstream newTasks("textFiles/newTasks.txt");
  for (unsigned int i = 0; i < taskCount; i++) {
    newTasks << tasks[i]->get_descriptipn() << "\n";
  }

  newTasks.close();

  delete[] tasks;
}
