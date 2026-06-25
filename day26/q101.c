#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int secretNum, guess, attempts = 0;
    srand(time(0)); 
    secretNum = rand() % 100 + 1; 
    printf("Guess a number between 1 and 100: ");

    do {
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNum) {
            printf("Too high! Try again: ");
        } else if (guess < secretNum) {
            printf("Too low! Try again: ");
        } else {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
        }
    } while (guess != secretNum);

    return 0;
}