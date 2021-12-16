#include <errno.h>
#include <math.h>
#include "8.h"

int RemainingBalances(const double loan_amount, const double interest_rate, const double monthly_payment, const int number_of_months, double *result) {
  if (loan_amount < 0) {
    return EINVAL;
  }

  if (interest_rate < 0) {
    return EINVAL;
  }

  if (monthly_payment < 0) {
    return EINVAL;
  }

  double remaining_balance = loan_amount;
  const double monthly_interest_rate = interest_rate / 100.0 / 12.0;
  for (int i = 0; i <= number_of_months - 1; i++) {
    remaining_balance += (remaining_balance * monthly_interest_rate);
    remaining_balance -= monthly_payment;
    if (remaining_balance <= 0) {
      result[i] = 0;
    } else {
      result[i] = roundf(remaining_balance * 100.0) / 100.0;
    }
  }

  return 0;
}
