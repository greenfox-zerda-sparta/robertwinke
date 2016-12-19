/*
 * Calculator.hpp
 *
 *  Created on: Dec 19, 2016
 *      Author: robertwinke
 */

#include <vector>
#include <algorithm>
#include <numeric>

#ifndef CALCULATOR_HPP_
#define CALCULATOR_HPP_

class Calculator {
public:
  int sum(std::vector<int>& numbers) {
    return std::accumulate(numbers.begin(), numbers.end(), 0);
  }
};



#endif /* CALCULATOR_HPP_ */
