#include "4.h"

double TaxValue(const double amount) {
  if (amount < 0) {
    return -1;
  }
  
  return amount * 0.05;
}
