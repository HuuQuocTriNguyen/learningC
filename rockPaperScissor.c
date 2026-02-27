#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int computerChoice, int userChoice);

int main() {
    srand(time(NULL));

    printf("*** ROCK PAPER SCISSORS ***\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch (userChoice) {
        case 1:
            printf("You choose ROCK!\n");
            break;
        case 2:
            printf("You choose PAPER!\n");
            break;
        case 3:
            printf("You choose SCISSOR\n");
            break;
    }

    switch (computerChoice) {
        case 1:
            printf("Computer choose ROCK!\n");
            break;
        case 2:
            printf("Computer choose PAPER!\n");
            break;
        case 3:
            printf("Computer choose SCISSOR\n");
            break;
    }

    checkWinner(userChoice, computerChoice);
    return 0;
}

int getComputerChoice() {
    srand(time(NULL));
    int max = 3;
    int min = 1;
    return (rand() % (max - min + 1)) + min;
}

int getUserChoice() {
    int choice = 0;
    do {
        printf(
            "Choose an option:\n"
            "1. ROCK\n"
            "2. PAPER\n"
            "3. SCISSOR\n"
        );
        printf("Enter your choice: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);
    
    return choice;
}

void checkWinner(int aiChoice, int userChoice) {
    if (aiChoice == userChoice) {
        printf("IT'S A TIE.\n");
    } 
    else if ((userChoice == 1 && aiChoice == 2) || (userChoice == 2 && aiChoice == 1) || (userChoice == 3 && aiChoice == 2)) {
        printf("YOU WIN.\n");
    }
    else {
        printf("YOU LOSE.\n");
    }
}