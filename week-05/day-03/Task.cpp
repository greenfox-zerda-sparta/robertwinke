/*
 * Task.cpp
 *
 *  Created on: Nov 16, 2016
 *      Author: robertwinke
 */
#include "Task.h"



Task::Task(std::string task) {
  description = task;
  completed = false;
}
void Task::set_description(std::string text) {
  description = text;
}

void Task::complete() {
  completed = true;
}
void Task::setCompleted(bool isit) {
  completed = isit;
}

std::string Task::get_descriptipn() {
  return description;
}
bool Task::getCompleted() {
  return completed;
}
Task::~Task() {

}
