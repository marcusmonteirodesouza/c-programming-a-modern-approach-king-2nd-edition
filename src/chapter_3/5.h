struct NumbersSquare {
  int rows[4][4];
  int row_sums[4];
  int column_sums[4];
  int diagonal_sums[2];
};

typedef struct NumbersSquare NumbersSquare;

/**
 * @brief Returns a NumberSquare
 * 
 * @param numbers An Array with 16 numbers
 * @return NumberSquare 
 */
NumbersSquare MakeNumbersSquare(int *numbers);
