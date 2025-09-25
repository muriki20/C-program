// c program 
/*
Name:moses
reg:CT100/G/26258/25
description:prompt student to compute surface area of cylinder 
*/#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, height, volume, surfaceArea;

    // Get user input
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculations
    volume = PI * radius * radius * height;
    surfaceArea = (2 * PI * radius * radius) + (2 * PI * radius * height);

    // Display results
    printf("Volume of the cylinder = %.2f\n", volume);
    printf("Surface area of the cylinder = %.2f\n", surfaceArea);

    return 0;
}