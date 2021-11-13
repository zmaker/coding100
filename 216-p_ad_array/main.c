#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sample[12];
    sample[0] = 11;

    printf("valore: %d \n", sample[0]);
    printf("addr: %d \n", &sample[0]);

    int *p;
    p = sample;
    printf("addr: %d \n", p);

    printf("addr: %d \n", sample);


    return 0;
}
