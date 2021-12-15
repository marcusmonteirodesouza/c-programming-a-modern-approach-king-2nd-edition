#include <stdio.h>
#include "3.h"

int main() {
  double radius;
  printf("Enter the sphere's radius, in meters: ");
  scanf("%lf", &radius);
  double sphere_volume = SphereVolume(radius);
  printf("The volume of the sphere is: %f", sphere_volume);
}
