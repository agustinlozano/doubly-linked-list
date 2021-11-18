#ifndef DLL
#define DLL

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  char *data;
  struct node *next;
  struct node *prev;
} Node;

#endif