#include "unity.h"
#include "7.h"

void setUp() {
}

void tearDown() {
}

void test_ConvertToBills_should_returnTheCorrectResult() {
  DollarBills result = {};

  TEST_ASSERT_EQUAL(0, ConvertToBills(0, &result));
  TEST_ASSERT_EQUAL(0, result.twenties);
  TEST_ASSERT_EQUAL(0, result.tens);
  TEST_ASSERT_EQUAL(0, result.fives);
  TEST_ASSERT_EQUAL(0, result.ones);

  TEST_ASSERT_EQUAL(0, ConvertToBills(1, &result));
  TEST_ASSERT_EQUAL(0, result.twenties);
  TEST_ASSERT_EQUAL(0, result.tens);
  TEST_ASSERT_EQUAL(0, result.fives);
  TEST_ASSERT_EQUAL(1, result.ones);

  TEST_ASSERT_EQUAL(0, ConvertToBills(4, &result));
  TEST_ASSERT_EQUAL(0, result.twenties);
  TEST_ASSERT_EQUAL(0, result.tens);
  TEST_ASSERT_EQUAL(0, result.fives);
  TEST_ASSERT_EQUAL(4, result.ones);

  TEST_ASSERT_EQUAL(0, ConvertToBills(5, &result));
  TEST_ASSERT_EQUAL(0, result.twenties);
  TEST_ASSERT_EQUAL(0, result.tens);
  TEST_ASSERT_EQUAL(1, result.fives);
  TEST_ASSERT_EQUAL(0, result.ones);

  TEST_ASSERT_EQUAL(0, ConvertToBills(9, &result));
  TEST_ASSERT_EQUAL(0, result.twenties);
  TEST_ASSERT_EQUAL(0, result.tens);
  TEST_ASSERT_EQUAL(1, result.fives);
  TEST_ASSERT_EQUAL(4, result.ones);

  TEST_ASSERT_EQUAL(0, ConvertToBills(10, &result));
  TEST_ASSERT_EQUAL(0, result.twenties);
  TEST_ASSERT_EQUAL(1, result.tens);
  TEST_ASSERT_EQUAL(0, result.fives);
  TEST_ASSERT_EQUAL(0, result.ones);

  TEST_ASSERT_EQUAL(0, ConvertToBills(14, &result));
  TEST_ASSERT_EQUAL(0, result.twenties);
  TEST_ASSERT_EQUAL(1, result.tens);
  TEST_ASSERT_EQUAL(0, result.fives);
  TEST_ASSERT_EQUAL(4, result.ones);

  TEST_ASSERT_EQUAL(0, ConvertToBills(15, &result));
  TEST_ASSERT_EQUAL(0, result.twenties);
  TEST_ASSERT_EQUAL(1, result.tens);
  TEST_ASSERT_EQUAL(1, result.fives);
  TEST_ASSERT_EQUAL(0, result.ones);

  TEST_ASSERT_EQUAL(0, ConvertToBills(19, &result));
  TEST_ASSERT_EQUAL(0, result.twenties);
  TEST_ASSERT_EQUAL(1, result.tens);
  TEST_ASSERT_EQUAL(1, result.fives);
  TEST_ASSERT_EQUAL(4, result.ones);

  TEST_ASSERT_EQUAL(0, ConvertToBills(20, &result));
  TEST_ASSERT_EQUAL(1, result.twenties);
  TEST_ASSERT_EQUAL(0, result.tens);
  TEST_ASSERT_EQUAL(0, result.fives);
  TEST_ASSERT_EQUAL(0, result.ones);

  TEST_ASSERT_EQUAL(0, ConvertToBills(21, &result));
  TEST_ASSERT_EQUAL(1, result.twenties);
  TEST_ASSERT_EQUAL(0, result.tens);
  TEST_ASSERT_EQUAL(0, result.fives);
  TEST_ASSERT_EQUAL(1, result.ones);

  TEST_ASSERT_EQUAL(0, ConvertToBills(24, &result));
  TEST_ASSERT_EQUAL(1, result.twenties);
  TEST_ASSERT_EQUAL(0, result.tens);
  TEST_ASSERT_EQUAL(0, result.fives);
  TEST_ASSERT_EQUAL(4, result.ones);

  TEST_ASSERT_EQUAL(0, ConvertToBills(25, &result));
  TEST_ASSERT_EQUAL(1, result.twenties);
  TEST_ASSERT_EQUAL(0, result.tens);
  TEST_ASSERT_EQUAL(1, result.fives);
  TEST_ASSERT_EQUAL(0, result.ones);

  TEST_ASSERT_EQUAL(0, ConvertToBills(29, &result));
  TEST_ASSERT_EQUAL(1, result.twenties);
  TEST_ASSERT_EQUAL(0, result.tens);
  TEST_ASSERT_EQUAL(1, result.fives);
  TEST_ASSERT_EQUAL(4, result.ones);

  TEST_ASSERT_EQUAL(0, ConvertToBills(30, &result));
  TEST_ASSERT_EQUAL(1, result.twenties);
  TEST_ASSERT_EQUAL(1, result.tens);
  TEST_ASSERT_EQUAL(0, result.fives);
  TEST_ASSERT_EQUAL(0, result.ones);

  TEST_ASSERT_EQUAL(0, ConvertToBills(40, &result));
  TEST_ASSERT_EQUAL(2, result.twenties);
  TEST_ASSERT_EQUAL(0, result.tens);
  TEST_ASSERT_EQUAL(0, result.fives);
  TEST_ASSERT_EQUAL(0, result.ones);
}

int main() {
  UNITY_BEGIN();
  RUN_TEST(test_ConvertToBills_should_returnTheCorrectResult);
  return UNITY_END();
}
