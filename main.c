#include "dll.h"

int main(void) {
  Node *head = NULL;
  Node *tail = NULL;

  printf("Doubly Linked List\n");

  int choice = 1;

  while (choice != 0) {
    choice = runMenu();
    
    switch (choice) {
      case 1:
        printf("\n\t- Agregar un elemento al principio");
        push(&head);
      break;

      case 2:
        printf("\n\t- Agregar un elemento al final");
        //append();
      break;

      case 3:
        printf("\n\t- Agregar un elemento seguido de otro");
        //insertAfter();
      break;

      case 4:
        printf("\n\t- Imprimir lista");
        printList(head);
      break;

      case 0:
        printf("\n\t- Terminar programa\n\n");
      break;

      default:
        printf("\nUps! Parece que elegiste una opcion incorrecta\n\n");
      break;
    }
  }
  
  return EXIT_SUCCESS;
}