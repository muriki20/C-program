// c program 
/*
Name:moses
reg:CT100/G/26258/25
description:program number guess game 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;

    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 20 (inclusive)
    secretNumber = (rand() % 20) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 20. Try to guess it.\n");

    // Repeat until the player guesses correctly
    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed it right!\n");
            printf("Total attempts: %d\n", attempts);
            break;
        }
    }

    return 0;
}
    