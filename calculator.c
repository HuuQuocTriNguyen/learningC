#include <stdio.h>

int main() {
    double numOne = 0.0;
    double numTwo = 0.0;
    char sign = '\0';
    double result = 0.0;

    printf("Enter the equation (ValueOne) (+, -, *, /) (ValueTwo): ");
    scanf("%lf %c %lf", &numOne, &sign, &numTwo);

    switch (sign) {
        case '+':
            result = numOne + numTwo;
            break;
        case '-':
            result = numOne - numTwo;
            break;
        case '*':
            result = numOne * numTwo;
            break;
        case '/':
            result = (numTwo == 0) ? printf("You can't divide by 0.") : (numOne / numTwo);
            break;
        default:
            printf("Invalid operator\n");
            break;
    }

    printf("Result: %.4lf\n", result);
    return 0;
}