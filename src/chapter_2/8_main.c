#include <stdio.h>
#include <string.h>
#include "8.h"

int main() {
  double loan_amount;
  printf("Enter amount of loan: $");
  scanf("%lf", &loan_amount);

  double interest_rate;
  printf("Enter interest rate: ");
  scanf("%lf", &interest_rate);

  double monthly_payment;
  printf("Enter monthly payment: $");
  scanf("%lf", &monthly_payment);

  int number_of_months;
  printf("Enter number of months: ");
  scanf("%d", &number_of_months);

  double result[number_of_months];
  const int errorCode = RemainingBalances(loan_amount, interest_rate, monthly_payment, number_of_months, result);
  if (errorCode != 0) {
    strerror(errorCode);
  }

  for (int i = 0; i < sizeof(result) / sizeof(result[0]); i++) {
    printf("Balance remaining after month %d: $%f\n", i + 1, result[i]);
  }
}
