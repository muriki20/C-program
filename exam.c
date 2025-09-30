// c program 
/*
Name:moses
reg:CT100/G/26258/25
description:exam eligibility 
*/

#include <stdio.h>

int main() {
    float attendance;
    int marks;

    // Input
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%d", &marks);

    // Check conditions
    if (attendance >= 75 && marks >= 40) {
        printf("Eligible for exam.\n");
    } else {
        printf("Not eligible.\n");
    }

    return 0;
    }

    