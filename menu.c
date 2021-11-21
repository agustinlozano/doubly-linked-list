#include "dll.h"

int runMenu(void) {
  int choice;

  printf("\n\t1. Agregar un elemento al principio");
  printf("\n\t2. Agregar un elemento al final");
  printf("\n\t3. Imprimir la lista");
  printf("\n\t4. Eliminar elemento");
  printf("\n\t0. Salir");
  printf("\nSu eleccion: ");
  scanf(" %d", &choice);

  return choice;
}