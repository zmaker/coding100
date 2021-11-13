#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char saluto[6] = "hello";
    printf("%s\n", saluto);

    printf("carattere: %c\n", saluto[1]);

    char s1[40], s2[40];
    gets(s1);
    gets(s2);
    printf("s1: %s\ns2: %s\n", s1, s2);
    printf("s1: %d\ns2: %d\n", strlen(s1), strlen(s2));

    if (!strcmp(s1, s2)) {
      printf("sono uguali\n");
    } else {
      printf("non sono uguali\n");
    }

    strcpy(s1, "nel mezzo del cammin...");
    printf("strcpy: %s\n", s1);

    strcat(s1, s2);
    printf("strcat: %s\n", s1);

    if (strchr(s1, 'm')) {
      printf("trovato m\n");
    }
    if (strstr(s1, "cam")) {
      printf("trovato cam\n");
    }

    return 0;
}
