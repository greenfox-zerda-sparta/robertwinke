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
  void addTask(std::string);
  void completeTask(std::string);
  void removeTask();
  ~Taskhandler();
};



#endif /* TASKHANDLER_H_ */
