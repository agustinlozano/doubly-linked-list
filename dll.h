#ifndef DLL
#define DLL

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node *next;
  struct node *prev;
} Node;

/* menu */
int runMenu(void);

/* add nodes */
void append(Node **head);
void push(Node **head);
  void addData(Node *n);
  void addFirstNode(Node **head, Node *newNode);

/* print */
void printList(Node *head);
  void showAscending(Node *head);
  void showDescending(Node *head);

/* delete nodes */
void deleteNode(Node **head);
  Node * getTail(Node *head);
  Node * findNode(Node *head);

#endif