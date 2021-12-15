#include <errno.h>
#include "unity.h"
#include "3.h"

void setUp() {
}

void tearDown() {
}

void test_SphereVolume_should_returnTheVolumeOfASphere() {
  double result;

  TEST_ASSERT_EQUAL(0, SphereVolume(0.0, &result));
  TEST_ASSERT_EQUAL_DOUBLE(0.0, result);

  TEST_ASSERT_EQUAL(0, SphereVolume(1.0, &result));
  TEST_ASSERT_EQUAL_DOUBLE(4.1887902047863905, result);

  TEST_ASSERT_EQUAL(0, SphereVolume(2.0, &result));
  TEST_ASSERT_EQUAL_DOUBLE(33.510321638291124, result);
}

void test_SphereVolume_given_negativeRadius_should_returnEINVAL() {
  double result;

  TEST_ASSERT_EQUAL(EINVAL, SphereVolume(-0.1, &result));
  TEST_ASSERT_EQUAL(EINVAL, SphereVolume(-1.0, &result));
}

int main() {
  UNITY_BEGIN();
  RUN_TEST(test_SphereVolume_should_returnTheVolumeOfASphere);
  RUN_TEST(test_SphereVolume_given_negativeRadius_should_returnEINVAL);
  return UNITY_END();
}
