#include "dll.h"

int main(void) {
  Node *head = NULL;
  Node *tail = NULL;

  printf("Doubly Linked List\n");

  int choice = runMenu();

  while (choice != 0) {
    switch (choice) {
      case 1:
        printf("\n\t- Agregar un elemento al principio");
        //push();
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
        //printList();
      break;

      case 0:
        printf("\n\t- Terminar programa");
      break;

      default:
        printf("\nUps! Parece que elegiste una opcion incorrecta\n\n");
      break;
    }
  }
  
  return EXIT_SUCCESS;
}