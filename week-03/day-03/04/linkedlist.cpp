/*
 * linkedlist.cpp
 *
 *  Created on: Nov 4, 2016
 *      Author: robertwinke
 */

#include <iostream>
using namespace std;

struct Node {
  double value;
  Node* next = NULL;
};

Node* list_construct_one(double value){
  Node* new_node = new Node;
  new_node->value = value;
  new_node->next = NULL;
  return new_node;
}

unsigned int list_length(Node& head) {
  int length = 1;
  Node* temp = head.next;
  while(temp != NULL) {
    temp = temp->next;
    length++;
  }

  return length;
}

Node* list_get_last(Node& head) {
  Node* temp = head.next;
  while(temp->next != NULL) {
    temp = temp->next;
  }
  return temp;
}

void list_append(Node& head, double value) {
  Node* temp = &head;
  while(temp->next != NULL) {
    temp = temp->next;
  }

  Node* new_node = list_construct_one(value);
  temp->next = new_node;

}

Node* list_at(Node& head, unsigned int index) {
  Node* temp = &head;

  for (unsigned int i = 0; i < index; i++) {
    temp = temp->next;
  }
 return temp;
}

void list_insert_aka_linzert(Node& head, unsigned int index, double value) {
  Node* temp = &head;
  Node* new_node = list_construct_one(value);
  for (unsigned int i = 0; i < index; i++) {
    temp = temp->next;

  }
  new_node->next = temp->next;
  temp->next = new_node;
}

unsigned int list_find(Node& head, double value) {
  unsigned int index = 0;
  Node* temp = &head;
  while (temp->value != value) {
    temp = temp->next;
    index++;
  }
  return index;
}

void list_remove(Node& head, double value) {    //removes element after value :(
  Node* temp = &head;
  while (temp->value != value) {
    temp = temp->next;
  }
  temp->next = temp->next->next;
}

void list_concat(Node& head, Node& other_list) {
  Node* temp = &head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = &other_list;
}

void list_print(Node& head) {
  cout << "your list: " ;
  Node* temp = &head;
  while(temp != NULL) {
    cout << temp->value << " ";
    temp = temp->next;

  }
  cout << endl;
}

void list_destruct(Node& head) {
  Node* temp = &head;
  while (temp != NULL) {
    Node* old = temp;
    temp = temp->next;
    delete old;
  }
}

int main() {

  Node* head = list_construct_one(5);
  Node* temp = head;
  Node* second = list_construct_one(3);
  temp->next = second;                      //first 2 elements manually linked


  list_append(*head, 8);

  cout << list_length(*head) << endl;

  Node* last = list_get_last(*head);
  cout << "current last element: " << last->value << endl;

  cout << "list at index 0: " << list_at(*head, 0)->value << endl;

  list_print(*head);

  list_insert_aka_linzert(*head, 2, 9);

  list_print(*head);

  cout << "8 is at index: " << list_find(*head, 8) << endl;

  list_remove(*head, 3);

  list_print(*head);


  Node* head2 = list_construct_one(11);
  list_append(*head2, 13);
  list_append(*head2, 15);
  list_append(*head2, 17);

  list_print(*head2);

  list_concat(*head, *head2);
  list_print(*head);


  list_destruct(*head2);

  cout << second->value << endl;

  list_destruct(*head);

  cout << "destruct check " << second->value << endl;
  return 0;
}


