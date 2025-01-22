#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// TODO: Keep track of the number of attempts
// TODO: Add a feature to restart the game.

int main() {
    int secretNumber, guess;

    srand(time(0));
    secretNumber = rand() % 100 + 1;

    printf("Guess the Number Game (1 to 100)\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed it.\n");
        }
    } while (guess != secretNumber);

    return 0;
}

