#include "dll.h"

void printList(Node *head) {
  Node *current = head;

  if (head == NULL) {
    printf("\nLa lista esta vacia, no hay nada que mostrar");
  
  } else {
    int count = 0;
    while (current != NULL) {
      printf("\n%d. contiene: %d", count, current -> data);

      current = current -> next;
      count++;
    }
  }
  
  printf("\n\n");
}