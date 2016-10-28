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
  if (board[mrow][mcolumn] == "#"){
    board[mrow][mcolumn] = board[row][column];
    board[row][column] = '#';
  }
  else {
    cout << "WRONG MOVE! try again!" << endl << endl;
  }
}

void askStep(int& row, int& column, int& mrow, int& mcolumn){   //passing by reference
  cout << "Which piece would you like to move and where? (row x col) from 0 to 7" << endl;
  cin >> row >> column >> mrow >> mcolumn;
}

void askRemove(int& row, int& col){
  cout << "Which piece do you want to remove?" << endl;
  cin >> row >> col;
  cout << endl;
}

void removePiece(int& row, int& col){
  if (board[row][col] == "W" || board[row][col] == "B"){
    board[row][col] = "#";
  }
  else {
    cout << "No piece in that place" << endl << endl;
  }
}

int main(int argv, char** argc){

  int row, column, mrow, mcolumn;
  char ans;

  fillboard();

  while (1) {
    printboard();
    cout << "Would you like to remove a piece?[y/n] To Esc press[e]" << endl;
    cin >> ans;
    if (ans == 'y') {
      askRemove(row,column);
      removePiece(row, column);
    }
    else if (ans == 'n') {
      askStep(row, column, mrow, mcolumn);
      move(row, column, mrow, mcolumn);
    }
    else if (ans == 'e') {
      break;
    }
    else {
      cout << "Invalid answer" << endl;
    }
  }

  return 0;
}
