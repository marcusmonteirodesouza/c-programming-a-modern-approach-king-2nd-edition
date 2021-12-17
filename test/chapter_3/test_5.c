#include <errno.h>
#include "unity.h"
#include "5.h"

void setUp() {
}

void tearDown() {
}

void test_MakeNumberSquare_should_returnNumberSquare() {
  int numbers[16] = {16, 3, 2, 13, 5, 10, 11, 8, 9, 6, 7, 12, 4, 15, 14, 1};
  int row_0[4] = {16, 3, 2, 13};
  int row_1[4] = {5, 10, 11, 8};
  int row_2[4] = {9, 6, 7, 12};
  int row_3[4] = {4, 15, 14, 1};
  int row_sums[4] = {34, 34, 34, 34};
  int column_sums[4] = {34, 34, 34, 34};
  int diagonal_sums[2] = {34, 34};
  NumbersSquare result = MakeNumbersSquare(numbers);
  TEST_ASSERT_EQUAL_INT_ARRAY(row_0, result.rows[0], 4);
  TEST_ASSERT_EQUAL_INT_ARRAY(row_1, result.rows[1], 4);
  TEST_ASSERT_EQUAL_INT_ARRAY(row_2, result.rows[2], 4);
  TEST_ASSERT_EQUAL_INT_ARRAY(row_3, result.rows[3], 4);
  TEST_ASSERT_EQUAL_INT_ARRAY(row_sums, result.row_sums, 4);
  TEST_ASSERT_EQUAL_INT_ARRAY(column_sums, result.column_sums, 4);
  TEST_ASSERT_EQUAL_INT_ARRAY(diagonal_sums, result.diagonal_sums, 2); 
}

int main() {
  UNITY_BEGIN();
  RUN_TEST(test_MakeNumberSquare_should_returnNumberSquare);
  return UNITY_END();
}
