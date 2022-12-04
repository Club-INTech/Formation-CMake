#include <stdio.h>

#include <compute.h>

void print(int n) {
  switch(add(n, 2)) {
    case 7:
      printf("Exercice réussi !\n");
      return;
    case 13:
      printf("Exercice FetchContent réussi !\n");
      return;
    default:
      return;
  }
}
