#include <errno.h>
#include "unity.h"
#include "4.h"

void setUp() {
}

void tearDown() {
}

void test_TaxValue_should_returnFivePercentOfTheAmount() {
  double result;

  TEST_ASSERT_EQUAL(0, TaxValue(0.0, &result));
  TEST_ASSERT_EQUAL_DOUBLE(0.0, result);

  TEST_ASSERT_EQUAL(0, TaxValue(1.0, &result));
  TEST_ASSERT_EQUAL_DOUBLE(0.05, result);

  TEST_ASSERT_EQUAL(0, TaxValue(2.0, &result));
  TEST_ASSERT_EQUAL_DOUBLE(0.1, result);
}

void test_F_given_negativeAmount_should_return_EINVAL() {
  double result;

  TEST_ASSERT_EQUAL(EINVAL, TaxValue(-0.1, &result));

  TEST_ASSERT_EQUAL(EINVAL, TaxValue(-1, &result));
}

int main() {
  UNITY_BEGIN();
  RUN_TEST(test_TaxValue_should_returnFivePercentOfTheAmount);
  RUN_TEST(test_F_given_negativeAmount_should_return_EINVAL);
  return UNITY_END();
}
