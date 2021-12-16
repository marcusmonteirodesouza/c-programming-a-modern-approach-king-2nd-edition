#include <stdio.h>
#include <string.h>
#include "7.h"

int main() {
  int amount;
  printf("Enter the amount you want to exchange for bills value (no cents are allowed): $");
  scanf("%d", &amount);

  DollarBills dollar_bills = {};
  const int errorCode = ConvertToBills(amount, &dollar_bills);
  if (errorCode != 0) {
    strerror(errorCode);
    return errorCode;
  }

  printf("You are going to need %d twenties, %d tens, %d fives, and %d ones", dollar_bills.twenties, dollar_bills.tens, dollar_bills.fives, dollar_bills.ones);
}
