#include <math.h>
#include "unity.h"
#include "6.h"

void setUp() {
}

void tearDown() {
}

void test_F_should_returnTheCorrectResult() {
  TEST_ASSERT_EQUAL_DOUBLE(-48, F(-2.0));
  TEST_ASSERT_EQUAL_DOUBLE(-10, F(-1.0));
  TEST_ASSERT_EQUAL_DOUBLE(-6.0, F(0.0));
  TEST_ASSERT_EQUAL_DOUBLE(0.0, F(1.0));
  TEST_ASSERT_EQUAL_DOUBLE(92.0, F(2.0));
}

int main() {
  UNITY_BEGIN();
  RUN_TEST(test_F_should_returnTheCorrectResult);
  return UNITY_END();
}
