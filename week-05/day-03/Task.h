/*
 * Task.h
 *
 *  Created on: Nov 16, 2016
 *      Author: robertwinke
 */
#include <string>


#ifndef TASK_H_
#define TASK_H_

class Task {
private:
  std::string* description;
  bool completed;

public:
  Task(std::string);
  void set_description(std::string);
  void complete();
  std::string get_descriptipn();
  bool getCompleted();
  ~Task();
};



#endif /* TASK_H_ */
