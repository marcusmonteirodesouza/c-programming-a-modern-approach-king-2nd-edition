#include <stdio.h>
#include <string.h>
#include "3.h"

int main() {
  char isbn[17];
  printf("Enter ISBN: ");
  scanf("%s", isbn);

  ISBN parsed_isbn = {};
  const int errorCode = Parse_ISBN(isbn, &parsed_isbn);
  if (errorCode != 0) {
    strerror(errorCode);
    return errorCode;
  }

  printf("GS1 prefix: %d\n", parsed_isbn.prefix);
  printf("Group identifier: %d\n", parsed_isbn.registration_group);
  printf("Publisher code: %d\n", parsed_isbn.registrant);
  printf("Item number: %d\n", parsed_isbn.publication);
  printf("Check digit: %d", parsed_isbn.check_digit);
}
