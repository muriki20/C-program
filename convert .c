// c program 
/*
Name:moses
reg:CT100/G/26258/25
description:program withdraw and balance from bank 
*/
#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    printf("Temperature in Celsius = %.2f°C\n", convertToCelsius(f));
    return 0;
}
    