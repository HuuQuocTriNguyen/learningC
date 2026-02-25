#include <stdio.h>

int main() {
    int choice = 0;
    float weightInput = 0.0f;
    float weightOutput = 0.0f;

    printf(
        "Weight Conversion Program\n"
        "1. Kilograms to pounds\n"
        "2. Pounds to kilograms\n"
    );

    printf("Enter your choice (1 or 2): ");
    scanf("%i", &choice);
    
    switch(choice) {
        case 1:
            printf("Enter the weight in kilograms: ");
            scanf("%f", &weightInput);
            weightOutput = weightInput * 2.205;
            printf("%.2f kilograms = %.2f pounds\n", weightInput, weightOutput);
            break;
        case 2:
            printf("Enter the weight in pounds: ");
            scanf("%f", &weightInput);
            weightOutput = weightInput / 2.205;
            printf("%.2f pounds = %.2f kilograms\n", weightInput, weightOutput);
            break;
        default:
            printf("Invalid Choice! Please enter one or two.\n");
            break;
    }

    return 0;
}