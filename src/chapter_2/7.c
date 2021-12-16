#include <errno.h>
#include <stdlib.h>
#include "7.h"

int ConvertToBills(const int amount, DollarBills *result) {
  if (amount < 0) {
    return EINVAL;
  }

  result->twenties = amount / 20;
  int remainder = amount % 20;
  result->tens = remainder > 0 ? remainder / 10 : 0;
  remainder = remainder % 10;
  result->fives = remainder > 0 ? remainder / 5 : 0;
  remainder = remainder % 5;
  result->ones = remainder;

  return 0;
}
