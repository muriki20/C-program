// c program 
/*
Name:moses
reg:CT100/G/26258/25
Program: Shop Daily Sales
Description: Reads sales amounts from sales.txt and calculates
 the total sales for the day.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    float amount, total = 0;

    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read all transactions
    while (fscanf(fp, "%f", &amount) == 1) {
        total += amount;
    }

    printf("Total sales for the day: %.2f\n", total);

    fclose(fp);
    return 0;
}

    