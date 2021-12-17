#include "3.h"
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdio.h>

int ParseISBN(char *s, ISBN *result) {
  char *s_copy = NULL;
  s_copy = strdup(s);

  int parsed_tokens[5];
  char *token;

  token = strtok(s_copy, "-");

  if (token == NULL) {
    return EINVAL;
  }

  char *endptr;
  errno = 0;
  long token_number = strtoul(token, &endptr, 10);
  if (errno != 0) {
    return errno;
  }

  parsed_tokens[0] = token_number;

  for (int i = 1; i <= 4; i++) {
    token = strtok(NULL, "-");

    if (token == NULL) {
      return EINVAL;
    }

    endptr = NULL;
    errno = 0;
    token_number = strtoul(token, &endptr, 10);
    if (errno != 0) {
      return errno;
    }

    parsed_tokens[i] = token_number;
  }

  result->prefix = parsed_tokens[0];
  result->registration_group = parsed_tokens[1];
  result->registrant = parsed_tokens[2];
  result->publication = parsed_tokens[3];
  result->check_digit = parsed_tokens[4];

  return 0;
}
