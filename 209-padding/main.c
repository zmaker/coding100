#include <stdio.h>
#include <string.h>

int main (){
  char str[10];
  strcpy(str, "hello");
  printf(str);

  int l = strlen(str);
  printf("\nlen: %d\n", l);

  while (l < 10) {
    str[l] = '#';
    l++;
  }
  str[l] = '\0';
  printf(str);

  return 0;
}
