// c program 
/*
Name:moses
reg:CT100/G/26258/25
description:program withdraw and balance from bank 
*/

   #include <stdio.h>
#include <string.h>

int main() {
    char password[20];

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted\n");
    return 0;
} 