// c program 
/*
Name:moses
reg:CT100/G/26258/25
description:program withdraw and balance from bank 
*/
#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50;
}

int main() {
    float distance;
    printf("Enter distance traveled (km): ");
    scanf("%f", &distance);

    printf("Total fare = KSh. %.2f\n", calculateFare(distance));
    return 0;
}
    