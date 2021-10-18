#include <stdio.h>

int main() {
  int numero;

  do {
    scanf("%d", &numero);
  } while (numero > 10);
  printf("ok\n");

  return 0;
}
