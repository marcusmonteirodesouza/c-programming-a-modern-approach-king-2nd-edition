#include <stdio.h>

int main() {
  // See https://en.wikipedia.org/wiki/Telephone_numbers_in_Canada
  int area_code;
  int central_office_code;
  int station_code;
  
  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d)%d-%d", &area_code, &central_office_code, &station_code);

  printf("You entered %d.%d.%d", area_code, central_office_code, station_code);
}
