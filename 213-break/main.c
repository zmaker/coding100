#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 0;
  while (i < 10) {
    i++;
    printf("i: %d \n", i);
    if (i == 5) break;
  }
  printf("fine while\n\n");

  for (i = 0; i < 10; i++) {
    printf("i: %d \n", i);
    if (i == 4) break;
  }
  printf("fine for\n");

  return 0;
}
