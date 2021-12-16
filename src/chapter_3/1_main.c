#include <stdio.h>
#include <time.h>

int main() {
  char user_date[11];
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%s", user_date);

  struct tm date;
  const char *strptime_result = strptime(user_date, "%m/%d/%Y", &date);
  if (strptime_result == NULL) {
    fprintf(stderr, "strptime error. user_date: %s", user_date);
    return -1;
  }

  printf("%s, %d", user_date, date.tm_year);
  printf("You entered the date %d%02d%02d", date.tm_year + 1900, date.tm_mon + 1, date.tm_mday);

  return 0;
}
