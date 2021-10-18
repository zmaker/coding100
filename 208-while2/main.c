#include <stdio.h>

int main() {

  int i = 0;
  while (i < 10) {
    printf("i: %d\n", i);
    i++;
  }


  char ch = '\0';

  printf("Premi q per terminare\n");
  while ((ch = getchar()) != 'q');
  printf("ok\n");

  return 0;
}
