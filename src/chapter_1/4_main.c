#include <stdio.h>
#include "4.h"

int main() {
  double amount;
  printf("Enter the amount in dollars: $");
  scanf("%lf", &amount);
  double tax_added_amount = amount + TaxValue(amount);
  printf("The tax-added amount is: $%f", tax_added_amount);
}
