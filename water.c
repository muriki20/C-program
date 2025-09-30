// c program 
/*
Name:moses
reg:CT100/G/26258/25
description:water
*/


#include <stdio.h>

int main() {
    int units;
   double bill = 0.0;    const double service_charge = 50.0;

    printf("Enter water units consumed: ");
    if (scanf("%d", &units) != 1) {
  printf("Invalid input.\n");
    return 1;
    }

    if (units < 0) {
    printf("Number of units cannot be negative.\n");
    return 1;
    }

    if (units <= 30) {
    bill = units * 20.0;
    } else if (units <= 60) {
   bill = 30 * 20.0 + (units - 30) * 25.0;
    } else {
  bill = 30 * 20.0 + 30 * 25.0 + (units - 60) * 30.0;
  }

  bill += service_charge;

  printf("Total water bill: %.2f KES\n", bill);

  return 0;
}
