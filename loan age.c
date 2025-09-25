// c program 
/*
Name:moses
reg:CT100/G/26258/25
description:prompt student to compute surface area of cylinder 
*/#include <stdio.h>

int main() {
    int age;
    float income;

    // Get user input for age and annual income
    printf("Please enter your age: ");
    scanf("%d", &age);
    
    printf("Please enter your annual income: ");
    scanf("%f", &income);

    // Check if the user qualifies for a loan
    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}