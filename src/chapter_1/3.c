#include <math.h>
#include "3.h"

double SphereVolume(const double radius) {
  if (radius < 0) {
    return -1;
  }
  
  return (4.0 / 3.0) * M_PI * pow(radius, 3);
}
