#include "dll.h"

void push(Node **head) {
  Node *newNode = (Node *)malloc(sizeof(Node));

  if (*head == NULL) {
    printf("\nLa lista esta vacia se crea el primer nodo\n");
    /* make links */
    (*head) = newNode;
    (*head) -> next = NULL;
    (*head) -> prev = NULL;
    
    /* add data */
    addData(*head);

  } else {
    printf("\nSe agrega un nodo mas a la lista\n");
    /* make links */
    Node *aux = (*head);
    aux -> prev = newNode;
    (*head) = newNode;
    (*head) -> prev = NULL;
    (*head) -> next = aux;
    
    /* add data */
    addData(*head);
  }
}

void addData(Node *n) {
  int data;
  printf("\nAgrege el contedido del nodo: ");
  scanf(" %d", &data);

  n -> data = data;
  printf("\nEl contenido agrado es: %d\n", n->data);
}