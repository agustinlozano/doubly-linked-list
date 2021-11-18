#include "dll.h"

int runMenu(void) {
  int choice;

  printf("\n\t1. Agregar un elemento al principio");
  printf("\n\t2. Agregar un elemento al final");
  printf("\n\t3. Agregar un elemento seguido de otro");
  printf("\n\t4. Imprimir la lista");
  printf("\n\t0. Salir");
  printf("\nSu eleccion: ");
  scanf(" %d", &choice);

  return choice;

}