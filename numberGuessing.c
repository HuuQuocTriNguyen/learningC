#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int userChoice = 0;
    int min = 1;
    int max = 100;
    int targetedNumber = (rand() % (max - min + 1)) + min;
    int attempt = 0;

    printf("*** NUMBER GUESSING GAME ***\n");

    do {
        printf("Guess a number between 1 - 100: ");
        scanf("%d", &userChoice);
        attempt++;

        if (userChoice > targetedNumber) {
            printf("TOO HIGH!\n");
        } 
        else if (userChoice < targetedNumber) {
            printf("TOO LOW!\n");
        } 
        else {
            printf(
                "CORRECT!\n"
                "The answer is %d.\n"
                "It took you %d tries.\n" 
            , targetedNumber, attempt);
        }
    } while (targetedNumber != userChoice);

    return 0;
}