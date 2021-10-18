#include <stdio.h>

int main() {
  char ch;

  ch = '\0';
  while (ch != 'q') {
    ch = getchar();
  }
  printf("OK");

  return 0;
}
