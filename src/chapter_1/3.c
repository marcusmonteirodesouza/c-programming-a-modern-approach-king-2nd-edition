#include <errno.h>
#include <math.h>
#include "3.h"

int SphereVolume(const double radius, double *result) {
  if (radius < 0) {
    return EINVAL;
  }
  
  *result = (4.0 / 3.0) * M_PI * pow(radius, 3);
  return 0;
}
