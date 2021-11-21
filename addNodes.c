#include "dll.h"

void append(Node **head) {
  Node *newNode = (Node *)malloc(sizeof(Node));

  if (*head == NULL) {
    printf("\nLa lista esta vacia. Se agrega el primer nodo\n");
    addFirstNode(head, newNode);
    addData(*head);
  
  } else {
    printf("\nSe agrega un nodo mas al final de la lista\n");
    Node *current = (*head), *tail = newNode;

    while (current->next != NULL) {
      current = current -> next;
    }

    current -> next = tail;
    tail -> prev = current;
    tail -> next = NULL;

    addData(tail);
  }
}

void push(Node **head) {
  Node *newNode = (Node *)malloc(sizeof(Node));

  if (*head == NULL) {
    printf("\nLa lista esta vacia. Se agrega el primer nodo\n");
    addFirstNode(head, newNode);
    addData(*head);

  } else {
    printf("\nSe agrega un nodo mas al principio de la lista\n");
    /* make links */
    Node *aux = (*head);
    aux -> prev = newNode;
    (*head) = newNode;
    (*head) -> prev = NULL;
    (*head) -> next = aux;
    
    addData(*head);
  }
}

void addData(Node *n) {
  int data;
  printf("\nAgrege el contedido del nodo: ");
  scanf(" %d", &data);

  n -> data = data;
}

void addFirstNode(Node **head, Node *newNode) {
    (*head) = newNode;
    (*head) -> next = NULL;
    (*head) -> prev = NULL;
}