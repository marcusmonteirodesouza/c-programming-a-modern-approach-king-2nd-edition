/**
 * @brief Calculates the remaining balance after each month
 * 
 * @param loan_amount
 * @param interest_rate The yearly interest rate. 1.0 means 1% interest rate, 5.5 means 5.5%, etc.
 * @param monthly_payment
 * @param number_of_months Number of months to be calculated
 * @param result An array where each index contains the respective remaining balance, rounded to the nearest two digits. Index 0 contains the balance after 1 month, index 1 contains the balance after 2 months, etc.
 * @return 0 if successful otherwise errno
 */
int RemainingBalances(const double loan_amount, const double interest_rate, const double monthly_payment, const int number_of_months, double *result);
