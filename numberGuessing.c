#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int targetedNumber = (rand() % 100) + 1;
    int userChoice = 0;
    int attempt = 0;

    printf("*** NUMBER GUESSING GAME ***\n");

    do {
        printf("Guess a number between 1 - 100: ");
        scanf("%d", &userChoice);

        if (userChoice > targetedNumber) {
            printf("TOO HIGH!\n");
            attempt++;
        } else if (userChoice < targetedNumber) {
            printf("TOO LOW!\n");
            attempt++;
        } else {
            printf(
                "CORRECT!\n"
                "The answer is %d.\n"
                "It took you %d tries.\n" 
            , targetedNumber, attempt);
        }
    } while (targetedNumber != userChoice);

    return 0;
}