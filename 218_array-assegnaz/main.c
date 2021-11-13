#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num[5] = {1,3,5,7,9};
    for (int i = 0; i < 5; i++) printf("%d\n", num[i]);

    char str[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", str);

    char saluto[6] = "hello";
    printf("%s\n", saluto);

    char msg[] = "errore irreversibile di sistema";
    printf("msg: %s\n", msg);
    printf("len: %d\n", strlen(msg));


    return 0;
}
