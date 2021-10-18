#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 0;
    while (i < 10) {
      i++;
      if (i == 5) continue;
      printf("i: %d \n", i);
    }
    printf("end while\n\n");

    for (i = 0; i < 10; i++) {
      if (i == 4) continue;
      printf("i: %d\n", i);
    }
    printf("end for\n\n");
    return 0;
}
