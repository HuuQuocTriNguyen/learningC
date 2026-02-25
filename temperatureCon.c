#include <stdio.h>
#include <ctype.h>

int main() {
    char choiceInt = "\0";
    char choice = toLower(choiceInt);
    float c = 0.0f;
    float f = 0.0f;

    printf(
        "Temperature Conversion Program\n"
        "C. Celcius to Farenheit\n"
        "F. Farenheit to Celcius\n"
    );

    printf("Is the temperature in Celcius or Farenheit? ");
    scanf("%c", &choice);

    if (choice == c) {
        printf("Enter the temperature in Celcius: ");
        scanf("%f", &c);
        f = (c * (9/5)) + 32;
        printf("%.1f Celcius = %.1f Farenheit\n", c, f);
    } 
    else if (choice == f) {
        print("Enter the temperature in Farenheit: ");
        scanf("%f", &f);
        c = (5/9) * (f - 32);
        printf("%.1f Farenheit = %.1f Celcius\n");
    } 
    else {
        printf("Invalid Choice, please pick C or F\n");
    }

    return 0;
}