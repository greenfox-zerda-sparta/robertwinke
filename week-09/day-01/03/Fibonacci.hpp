/*
 * Fibonacci.hpp
 *
 *  Created on: Dec 19, 2016
 *      Author: robertwinke
 */

#ifndef FIBONACCI_HPP_
#define FIBONACCI_HPP_

int fibNumb(int index) {
  if (index == 0) {
    return 0;
  }
  else if (index == 1) {
    return 1;
  }
  else {
    return fibNumb(index-2) + fibNumb(index -1);
  }

}



#endif /* FIBONACCI_HPP_ */
