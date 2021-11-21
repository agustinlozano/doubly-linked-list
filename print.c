#include "dll.h"

void printList(Node *head) {
  if (head == NULL) {
    printf("\nLa lista esta vacia. No hay nada que mostrar");
  
  } else {
    int choice;
    while (choice) {
      printf("\n1. Imprimir de forma descentente");
      printf("\n2. Imprimir de forma ascentente");
      printf("\nSu respuesta: ");
      scanf(" %d", &choice);

      if (choice == 1 || choice == 2) {
        (choice == 1 ? showDescending : showAscending)(head);
        break;

      } else {
        printf("Ingresa una opcion valida\n");
      }
    }
  }
  
  printf("\n\n");
}


void showAscending(Node *head) {
  Node *current = head;
  int count = 0;

  while (current != NULL) {
    printf("\n%d. contiene: %d", count, current -> data);

    current = current -> next;
    count++;
  }
}

void showDescending(Node *head) {
  Node *tail = getTail(head);
  Node *current = tail;
  int count = 0;

  while (current != NULL) {
    printf("\n%d. contiene: %d", count, current -> data);

    current = current -> prev;
    count++;
  }
}