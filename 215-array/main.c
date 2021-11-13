#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeri[100];

    for (int i = 0; i < 100; i++) {
      numeri[i] = 0;
    }

    numeri[0] = 12;

    for (int i = 0; i < 100; i++) {
      printf("%d ", numeri[i]);
      if ((i%10) == 9) printf("\n");
    }

    int memarray = sizeof(int) * 100;
    printf("mem: %d\n", memarray);

    return 0;
}
