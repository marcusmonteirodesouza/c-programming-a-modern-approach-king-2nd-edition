#include <errno.h>
#include "unity.h"
#include "8.h"

void setUp() {
}

void tearDown() {
}

void test_RemainingBalances_should_returnTheCorrectResult() {
  double loan_amount = 20000.0;
  double interest_rate = 6.0;
  double monthly_payment = 386.66;
  int number_of_months = 3;
  double result0[number_of_months];
  TEST_ASSERT_EQUAL(0, RemainingBalances(loan_amount, interest_rate, monthly_payment, number_of_months, result0));
  TEST_ASSERT_EQUAL_DOUBLE(19713.34, result0[0]);
  TEST_ASSERT_EQUAL_DOUBLE(19425.25, result0[1]);
  TEST_ASSERT_EQUAL_DOUBLE(19135.71, result0[2]);

  loan_amount = 0.0;
  interest_rate = 6.0;
  monthly_payment = 386.66;
  number_of_months = 3;
  double result1[number_of_months];
  TEST_ASSERT_EQUAL(0, RemainingBalances(loan_amount, interest_rate, monthly_payment, number_of_months, result1));
  TEST_ASSERT_EQUAL_DOUBLE(0.0, result1[0]);
  TEST_ASSERT_EQUAL_DOUBLE(0.0, result1[1]);
  TEST_ASSERT_EQUAL_DOUBLE(0.0, result1[2]);
}

void test_RemainingBalances_given_negativeLoanAmount_should_returnEINVAL() {
  double loan_amount = -1;
  double interest_rate = 6.0;
  double monthly_payment = 386.66;
  int number_of_months = 3;
  double result[number_of_months];
  TEST_ASSERT_EQUAL(EINVAL, RemainingBalances(loan_amount, interest_rate, monthly_payment, number_of_months, result));
}

void test_RemainingBalances_given_negativeInterestRate_should_returnEINVAL() {
  double loan_amount = 20000.00;
  double interest_rate = -1.0;
  double monthly_payment = 386.66;
  int number_of_months = 3;
  double result[number_of_months];
  TEST_ASSERT_EQUAL(EINVAL, RemainingBalances(loan_amount, interest_rate, monthly_payment, number_of_months, result));
}

void test_RemainingBalances_given_negativeMonthlyPayment_should_returnEINVAL() {
  double loan_amount = 20000.00;
  double interest_rate = 6.0;
  double monthly_payment = -1.0;
  int number_of_months = 3;
  double result[number_of_months];
  TEST_ASSERT_EQUAL(EINVAL, RemainingBalances(loan_amount, interest_rate, monthly_payment, number_of_months, result));
}

int main() {
  UNITY_BEGIN();
  RUN_TEST(test_RemainingBalances_should_returnTheCorrectResult);
  return UNITY_END();
}
