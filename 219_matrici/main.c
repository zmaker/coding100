#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4][3]; //row, col

    for (int r = 0; r < 4; r++)
      for (int c = 0; c < 3; c++) mat[r][c] = 0;


    for (int r = 0; r < 4; r++) {
      for (int c = 0; c < 3; c++) {
          printf("%d ", mat[r][c]);
      }
      printf("\n");
    }

    int mat2[3][2] = {
      11, 22,
      33, 44,
      45, 78
    };

     for (int r = 0; r < 3; r++) {
      for (int c = 0; c < 2; c++) {
          printf("%d ", mat2[r][c]);
      }
      printf("\n");
    }

    return 0;
}
