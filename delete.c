#include "dll.h"

void deleteNode(Node **head) {
  if (*head != NULL) {
    Node *tail = getTail(*head);
    Node *output = findNode(*head);

    if (output == NULL) {
      printf("\nNo se encontro elemento\n\n");

    } else if (output == *head && output == tail) {
      printf("Eliminar el unico nodo de la lista\n\n");
      
      free(*head);
      *head = NULL;

    } else if (output == *head) {
      printf("Eliminar head\n\n");
      
      Node *aux = (*head);
      (*head) = (*head) -> next;
      (*head) -> prev = NULL;
      free(aux);

    } else if (output == tail) {
      printf("Eliminar tail\n\n");

      Node *aux = tail;
      tail = tail -> prev;
      tail -> next = NULL;
      free(aux);

    } else {
      Node *prevNode = output -> prev;
      Node *nextNode = output -> next;

      free(output);

      prevNode -> next = nextNode;
      nextNode -> prev = prevNode;
    }

  } else {
    printf("\nLa lista esta vacia. No hay nada que eliminar\n\n");
  }
}

Node * findNode(Node *head) {
  Node *current = head; 
  int value;

  printf("\nIngrese el valor del nodo: ");
  scanf(" %d", &value);

  while (current) {
    if (value == current->data) {
      printf("\nExito, elemento encontrado\n");
      break;

    } else {
      current = current -> next;
    }
  }

  return current;
}

Node * getTail(Node *head) {
    Node *current = head;

    while (current->next != NULL) {
      current = current -> next;
    }

    return current;
}

