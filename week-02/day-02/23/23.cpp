/*
 * 23.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: robertwinke
 */


#include <iostream>
using namespace std;
//Create an array which is an 8x8 matrix. This is a checkers board.
//White squares are represented by '_', black squares are represented by '#'

//'W' represents white checkers, 'B' represents black checkers.
//Create a function that moves a certain checker from a position to an other. Should be called: "move"
//Create a function that gives You back the possible positions the checker can go to. Should be called: "possibleSteps"
//Create a function that takes down an other checker by letting the one jumping over the other. Should be called: "take"
//All checkers are represented by their indices.
//Print out the whole board. Make some moves and illustrate them by printing out the whole board again.
//Create a function to do so. it should be called "printBoard"

string board[8][8];

void fillboard(){
  for (int row = 0; row < 8; row++) {
    for (int column = 0; column < 8; column++) {
      if ((row+column)%2 == 0) {
        board[row][column] = "_";
      }
      else {
        if (row < 3){
          board[row][column] = "W";
        }
        else if (row > 4){
          board[row][column] = "B";
        }
        else {
        board[row][column] = "#";
        }
      }
    }
  }
}
void printboard() {
  cout << "01234567" << endl;
  for (int row = 0; row < 8; row++) {
    for (int column = 0; column < 8; column++) {
      cout << board[row][column];
    }
    cout << " " << row << endl;
  }
  cout << endl;
}

void move(int row, int column, int mrow, int mcolumn){
  if (board[mrow][mcolumn] == "#"){                           //why do i need "" instead of ' '???
    board[mrow][mcolumn] = board[row][column];
    board[row][column] = '#';
  }
}

int main(int argv, char** argc){

  fillboard();

  int row, column, mrow, mcolumn;

  while (1) {
    printboard();
    cout << "what (row x col) to where (row x col) from 0 to 7" << endl;
    cin >> row >> column >> mrow >> mcolumn;
    move(row, column, mrow, mcolumn);
  }


  return 0;
}

