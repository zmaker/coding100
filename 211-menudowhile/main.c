#include <stdio.h>

int main() {
  char ch;

  printf("1. file\n");
  printf("2. edit\n");
  printf("3. help\n");
  printf("cosa scegli?\n");

  do {
    ch = getchar();
    switch(ch){
      case '1':
        printf("comando file\n");
        break;
      case '2':
        printf("comando edit\n");
        break;
      case '3':
        printf("comando help\n");
        break;
    }

  } while ((ch != '1') && (ch != '2') && (ch != '3'));
  printf("ok");

  return 0;
}

