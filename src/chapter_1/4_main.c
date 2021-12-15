#include <stdio.h>
#include <string.h>
#include "4.h"

int main() {
  double amount;
  printf("Enter the amount in dollars: $");
  scanf("%lf", &amount);

  double tax_value;
  const int errorCode = TaxValue(amount, &tax_value);
  if (errorCode != 0) {
    strerror(errorCode);
    return errorCode;
  }
  const double tax_added_amount = amount + tax_value;

  printf("The tax-added amount is: $%f", tax_added_amount);
}
