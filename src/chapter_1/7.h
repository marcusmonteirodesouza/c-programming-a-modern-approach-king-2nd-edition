struct DollarBills { // Keep on falling for me, I love the way it feels
  int twenties;
  int tens;
  int fives;
  int ones;
};

typedef struct DollarBills DollarBills;

/**
 * @brief Returns how to pay the amount with the smallest
 * number of bills
 * @param amount The amount to be converted
 * @param result A pointer to the address where the result is stored
 * @return 0 if successful otherwise errno
 */
int ConvertToBills(int amount, DollarBills *result);
