#include <stdio.h>

int main() {
  int item_number;
  printf("Enter item number: ");
  scanf("%d", &item_number);

  double unit_price;
  printf("Enter unit price: ");
  scanf("%lf", &unit_price);

  char purchase_date[11];
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%s", purchase_date);

  printf("%-9s\t%-10s\tPurchase Date\n", "Item", "Unit Price");
  printf("%-9d\t$%9.2lf\t%-s", item_number, unit_price, purchase_date);
}
