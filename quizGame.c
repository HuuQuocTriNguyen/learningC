#include <stdio.h>
#include <ctype.h>

int main() {
    char questions[][100] = {
        "What is the largest planet in the solar system?",
        "What is the hottest planet?",
        "What planets has the most moon?",
        "Who is the most goated JJK Character? "
    }; 

    char options[][100] = {
        "A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
        "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
        "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
        "A. Gojo\nB. Sukuna\nC. Yuji\nD. Mahogara"
    };

    char answerKeys[] = {'A', 'B', 'D', 'A'};
    char userChoice = '\0';
    int points = 0;
    int questionCounts = sizeof(questions) / sizeof(questions[0]);

    printf("*** QUIZ GAME ***\n");
    for (int i = 0; i < questionCounts; i++) {
        printf( 
            "\n%s\n"
            "%s\n"
            "Enter your Choice: "
        , questions[i], options[i]);
        scanf(" %c", &userChoice);
        
        if (toupper(userChoice) == answerKeys[i]) {
            printf("\nCORRECT!\n");
            points++;
        } else {
            printf("\nWRONG!\n");
        }
    }

    printf("\nYour score is %i out of %i points.\n", points, questionCounts);

    return 0;
}