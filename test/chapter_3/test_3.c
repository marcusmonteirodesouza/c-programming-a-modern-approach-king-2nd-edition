#include <errno.h>
#include "unity.h"
#include "3.h"

void setUp() {
}

void tearDown() {
}

void test_parseISBN_should_returnTheCorrectResult() {
  char isbn[17] = "978-92-95055-02-5";
  ISBN result = {};

  TEST_ASSERT_EQUAL(0, Parse_ISBN(isbn, &result));
  TEST_ASSERT_EQUAL(978, result.prefix);
  TEST_ASSERT_EQUAL(92, result.registration_group);
  TEST_ASSERT_EQUAL(95055, result.registrant);
  TEST_ASSERT_EQUAL(2, result.publication);
  TEST_ASSERT_EQUAL(5, result.check_digit);
}

void test_parseISBN_given_ISBNIsInvalidFormat_should_returnEINVAL() {
  char isbn[17] = "97892-95055-02-5";
  ISBN result = {};

  TEST_ASSERT_EQUAL(EINVAL, Parse_ISBN(isbn, &result));
}

int main() {
  UNITY_BEGIN();
  RUN_TEST(test_parseISBN_should_returnTheCorrectResult);
  return UNITY_END();
}
