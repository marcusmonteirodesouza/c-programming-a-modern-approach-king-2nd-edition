#include <errno.h>
#include "4.h"

int TaxValue(const double amount, double *result) {
  if (amount < 0) {
    return EINVAL;
  }
  
  *result = amount * 0.05;
  return 0;
}
