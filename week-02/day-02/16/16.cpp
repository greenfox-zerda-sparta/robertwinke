/*
 * 16.cpp
 *
 *  Created on: Oct 25, 2016
 *      Author: robertwinke
 */


#include <iostream>
using namespace std;

void rowprint(int array[3][3], int l){
	for (int i = 0; i < l; i++){
		for (int k = 0; k < l; k++){
			cout << array[i][k];
		}
		cout << endl;
	}
}

void columnprint(int array[3][3], int l){
	for (int i = 0; i < l; i++){
		for (int k = 0; k < l; k++){
			cout << array[k][i];
		}
		cout << endl;
	}
}

void onerowprint(int array[3][3], int l){
	for (int i = 0; i < l; i++){
		for (int k = 0; k < l; k++){
			cout << array[i][k] << '|';
		}
	}
}

void onecolumnprint(int array[3][3], int l){
	for (int i = 0; i < l; i++){
		for (int k = 0; k < l; k++){
			cout << array[i][k];
			cout << endl;
		}
	}
}

int main(){
	int m[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
	//This is an array of arrays. Print it out as a 3x3 matrix. Using each inner array as
	//a.) a row
	//b.) a column
	//c.) all in one line separated by the character '|'
	//d.) all in one column

	rowprint(m,3);
	cout << endl;

	columnprint(m,3);
	cout << endl;

	onerowprint(m,3);
	cout << endl;

	onecolumnprint(m,3);
	cout << endl;


	return 0;
}

