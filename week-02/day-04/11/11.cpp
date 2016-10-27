/*
 * 11.cpp
 *
 *  Created on: Oct 27, 2016
 *      Author: robertwinke
 */




#include <iostream>
#include <string>


using namespace std;

void rotate_right(char matrix[5][5], char rotated_matrix[5][5]){
  for (int i = 0; i < 5; i++){
    for (int j = 0; j < 5; j++){
      rotated_matrix[j][i] = matrix[4-i][j];      //we give the row in a backwards order to rotated_matrix
    }
  }

}

int main() {
  char matrix[5][5] = {
//co  A    B    C    D    E              //row
    {' ', ' ', '#', ' ', ' '},           //0
    {' ', '#', ' ', '#', ' '},           //1
    {' ', '#', '#', '#', ' '},           //2
    {' ', '#', ' ', '#', ' '},           //3
    {' ', '#', ' ', '#', ' '}            //4
  };

  char rotated_matrix[5][5];

  rotate_right(matrix, rotated_matrix);

  // write the rotate_right function that rotates the matrix to the left
  // so the program should print this:
//co 01234    row
  //          A
  // ####     B
  //   # #    C
  // ####     D
  //          E
//co 43210

  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      cout << rotated_matrix[i][j];
    }
    cout << endl;
  }

  return 0;
}
