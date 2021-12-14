#include <stdio.h>
#include <math.h>
#include "6.h"

int main() {
  double x;
  printf("Enter the x value: ");
  scanf("%lf", &x);
  printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %f", F(x));
}

double F(const double x) {
  return ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
}
