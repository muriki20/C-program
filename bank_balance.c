// c program 
/*
Name:moses
reg:CT100/G/26258/25
description:program withdraw and balance from bank 
*/


   #include <stdio.h>

int main() {
    float balance, withdraw;

    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance -= withdraw;

        printf("Remaining balance: %.2f\n", balance);

        if (balance <= 0) {
            printf("Account balance is zero or negative. Transaction stopped.\n");
        }
    }

    return 0;
}