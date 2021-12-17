#include <stdio.h>
#include "5.h"

int main() {
  int numbers[16];
  printf("Enter the numbers from 1 to 16 in any order\n");
  for (int i = 0; i <= 15; i++) {
    scanf("%d", &numbers[i]);
  }
  NumbersSquare numbers_square = MakeNumbersSquare(numbers);
  for (int i = 0; i <= 4; i++) {
    printf("%d %d %d %d\n", numbers_square.rows[i][0], numbers_square.rows[i][1], numbers_square.rows[i][2], numbers_square.rows[i][3]);
  }
  printf("Row sums: %d %d %d %d\n", numbers_square.row_sums[0], numbers_square.row_sums[1], numbers_square.row_sums[2], numbers_square.row_sums[3]);
  printf("Column sums: %d %d %d %d\n", numbers_square.row_sums[0], numbers_square.row_sums[1], numbers_square.row_sums[2], numbers_square.row_sums[3]);
  printf("Diagonal sums: %d %d", numbers_square.diagonal_sums[0], numbers_square.diagonal_sums[1]);
}
