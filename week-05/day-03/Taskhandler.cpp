/*
 * Taskhandler.cpp
 *
 *  Created on: Nov 16, 2016
 *      Author: robertwinke
 */
#include "Taskhandler.h"
#include "Util.h"
#include <fstream>
#include <iostream>


Taskhandler::Taskhandler() {

  std::ifstream newTasks("textFiles/newTasks.txt");
  std::string line;
  std::string word;
  int indexOfLine = taskCounter();

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
  if (index > taskCount || index < 1) {
    std::cerr << "Unable to complete: Index is out of range\n";
  }
  else if (tasks != NULL) {
    tasks[index-1]->complete();
  }
}
void Taskhandler::completeAll() {
  if (tasks != NULL) {
    for (int i = 0; i < taskCount; i++) {
      tasks[i]->complete();
    }
  }
}
void Taskhandler::removeTask(int index) {
  if (index > taskCount || index < 1) {
    std::cerr << "Unable to remove: Index is out of range\n";
  }
    else {
    taskCount--;
    Task** temp = new Task*[taskCount];

    for (int i = 0; i < index-1; i++) {
      temp[i] = tasks[i];
    }
    for (int i = index-1; i < taskCount; i++) {
      temp[i] = tasks[i+1];
    }
    delete[] tasks;
    tasks = temp;
  }
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
