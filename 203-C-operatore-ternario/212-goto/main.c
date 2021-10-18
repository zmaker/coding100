#include <stdio.h>

int main() {
  int x = 0;
  loop:
    printf("%d \n", x);
    x++;
    if (x < 10) goto loop;
  printf("ok");
  return 0;
}
