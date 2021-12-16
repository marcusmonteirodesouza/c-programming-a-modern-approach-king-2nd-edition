#include <stdio.h>
#include <string.h>
#include "3.h"

int main() {
  double radius;
  printf("Enter the sphere's radius, in meters: ");
  scanf("%lf", &radius);

  double sphere_volume;
  const int errorCode = SphereVolume(radius, &sphere_volume);
  if (errorCode != 0) {
    strerror(errorCode);
    return errorCode;
  }

  printf("The volume of the sphere is: %f", sphere_volume);
}
