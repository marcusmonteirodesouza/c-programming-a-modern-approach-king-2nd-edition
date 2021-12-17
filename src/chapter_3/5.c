#include "5.h"

NumbersSquare MakeNumbersSquare(int *numbers) {
  NumbersSquare numbers_square = {};

  for(int i = 0; i < 4; i++) {
    numbers_square.rows[0][i] = numbers[i];
    numbers_square.rows[1][i] = numbers[i + 4];
    numbers_square.rows[2][i] = numbers[i + 8];
    numbers_square.rows[3][i] = numbers[i + 12];
  }

  for(int i = 0; i < 4; i++) {
    numbers_square.row_sums[i] = numbers_square.rows[i][0] + numbers_square.rows[i][1] + numbers_square.rows[i][2] + numbers_square.rows[i][3];
    numbers_square.column_sums[i] = numbers_square.rows[0][i] + numbers_square.rows[1][i] + numbers_square.rows[2][i] + numbers_square.rows[3][i]; 
  }

  numbers_square.diagonal_sums[0] = numbers_square.rows[0][0] + numbers_square.rows[1][1] + numbers_square.rows[2][2] + numbers_square.rows[3][3];
  numbers_square.diagonal_sums[1] = numbers_square.rows[0][3] + numbers_square.rows[1][2] + numbers_square.rows[2][1] + numbers_square.rows[3][0];

  return numbers_square;
}
