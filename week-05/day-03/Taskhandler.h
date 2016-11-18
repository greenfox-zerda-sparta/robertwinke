/*
 * Taskhandler.h
 *
 *  Created on: Nov 16, 2016
 *      Author: robertwinke
 */
#include <fstream>

#include "Task.h"

#ifndef TASKHANDLER_H_
#define TASKHANDLER_H_

class Taskhandler {
private:
  int taskCount;
  Task** tasks;

public:
  Taskhandler();
  void addTask(std::string, bool);
  void completeTask(int);
  void completeAll();
  void removeTask(int);
  ~Taskhandler();
};



#endif /* TASKHANDLER_H_ */
