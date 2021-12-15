#include <stdio.h>
#include "6.h"

int main() {
  double x;
  printf("Enter the x value: ");
  scanf("%lf", &x);
  printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %f", F(x));
}
