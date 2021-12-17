struct ISBN {
  int prefix;
  int registration_group;
  int registrant;
  int publication;
  int check_digit;
};

typedef struct ISBN ISBN;

/**
 * @brief Try to parse a string into a ISBN struct. See https://www.isbn-international.org/content/what-isbn
 * 
 * @param s The string to parse
 * @param result A pointer to the address where the result is stored
 * @return int 0 if the parsing was successful otherwise errno
 */
int ParseISBN(char *s, ISBN *result);
