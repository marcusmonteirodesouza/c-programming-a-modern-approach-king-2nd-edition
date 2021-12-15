#include <math.h>
#include "unity.h"
#include "4.h"

void setUp() {
}

void tearDown() {
}

void test_TaxValue_should_returnFivePercentOfTheAmount() {
  TEST_ASSERT_EQUAL_DOUBLE(0.0, TaxValue(0.0));
  TEST_ASSERT_EQUAL_DOUBLE(0.05, TaxValue(1.0));
  TEST_ASSERT_EQUAL_DOUBLE(0.1, TaxValue(2.0));
}

void test_F_given_negativeAmount_should_returnMinus1() {
  TEST_ASSERT_EQUAL_DOUBLE(-1, TaxValue(-0.1));
  TEST_ASSERT_EQUAL_DOUBLE(-1, TaxValue(-1.0));
}

int main() {
  UNITY_BEGIN();
  RUN_TEST(test_TaxValue_should_returnFivePercentOfTheAmount);
  RUN_TEST(test_F_given_negativeAmount_should_returnMinus1);
  return UNITY_END();
}
