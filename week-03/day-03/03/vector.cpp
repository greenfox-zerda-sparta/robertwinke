/*
 * vector.cpp
 *
 *  Created on: Nov 4, 2016
 *      Author: robertwinke
 */


#include <iostream>
using namespace std;

struct Vector {
  unsigned int size;
  double* array = NULL;
};

Vector* vector_construct(double input[], int size){
  Vector* new_vector = new Vector;
  new_vector->size = size;

  double* arr = new double[size];

  for (int i = 0; i < size; i++) {
    arr[i] = input[i];
  }

  new_vector->array = arr;

  return new_vector;
}

double vector_at(Vector& v, unsigned int index){
  if (index >= v.size) {
    return 0;
  }
  else {
    return v.array[index];
  }
}

void vector_insert(Vector& v, unsigned int index, double value) {
  double* arr = new double[v.size + 1];

  for (unsigned int i = 0; i < index; i++) {
      arr[i] = v.array[i];
  }

  arr[index] = value;

  for (unsigned i = index+1; i < v.size+1; i++) {
    arr[i] = v.array[i-1];
  }

  delete[] v.array;
  v.array = arr;
  v.size++;

}

int vector_find(Vector& v, double value) {
  for(unsigned int i = 0; i < v.size; i++){
    if (v.array[i] == value) {
      return i;
    }
  }
  return -1;
}

void vector_remove(Vector& v, unsigned int index) {
  double* arr = new double[v.size - 1];

  for (unsigned int i = 0; i < index; i++) {
    arr[i] = v.array[i];
  }
  for (unsigned int i = index; i < v.size - 1; i++) {
    arr[i] = v.array[i + 1];
  }
  delete[] v.array;
  v.array = arr;
  v.size--;
}

Vector* vector_concat(Vector& v1, Vector v2){
  Vector* new_vector = new Vector;
  new_vector->size = v1.size + v2.size;
  double* array = new double[new_vector->size];

  for (unsigned int i = 0; i < v1.size; i++) {
    array[i] = v1.array[i];
  }
  for (unsigned int i = v1.size; i < new_vector->size; i++) {
    array[i] = v2.array[i-v1.size];
  }
  new_vector->array = array;

  return new_vector;
}

void print_vector(Vector& v) {
  for (unsigned int i = 0; i < v.size; i++) {
    cout << v.array[i] << endl;
  }
}

int main() {
  double array[] = {1,2,3};
  Vector* vect = vector_construct(array, 3);
  double array2[] = {6,5,4};
  Vector* vect2 = vector_construct(array2, 3);
  print_vector(*vect);

  cout << endl;

  cout << vector_at(*vect, 2) << endl;

  cout << endl;

  vector_insert(*vect, 2, 8);
  print_vector(*vect);

  cout << endl << vector_find(*vect, 3) << endl << endl;

  vector_remove(*vect, 2);
  print_vector(*vect);

  cout << endl;

  Vector* vect3 = vector_concat(*vect, *vect2);
  print_vector(*vect3);

  delete[] vect->array;
  delete vect;

  delete[] vect2->array;
  delete vect2;

  delete[] vect3->array;
  delete vect3;

  return 0;
}

