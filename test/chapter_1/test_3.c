#include <math.h>
#include "unity.h"
#include "3.h"

void setUp() {
}

void tearDown() {
}

void test_SphereVolume_should_returnTheVolumeOfASphere() {
  TEST_ASSERT_EQUAL_DOUBLE(0.0, SphereVolume(0.0));
  TEST_ASSERT_EQUAL_DOUBLE(4.1887902047863905, SphereVolume(1.0));
  TEST_ASSERT_EQUAL_DOUBLE(33.510321638291124, SphereVolume(2.0));
}

void test_SphereVolume_given_negativeRadius_should_returnMinus1() {
  TEST_ASSERT_EQUAL_DOUBLE(-1, SphereVolume(-0.1));
  TEST_ASSERT_EQUAL_DOUBLE(-1, SphereVolume(-1.0));
}

int main() {
  UNITY_BEGIN();
  RUN_TEST(test_SphereVolume_should_returnTheVolumeOfASphere);
  RUN_TEST(test_SphereVolume_given_negativeRadius_should_returnMinus1);
  return UNITY_END();
}
