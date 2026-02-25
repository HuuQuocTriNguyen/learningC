#include <stdio.h>
#include <math.h>

int main() {
    double p = 0;
    double r = 0;
    int t = 0;
    int n = 0;
    double a = 0.0;

    printf("====== COMPOUND INTEREST CALCULATOR ======\n");

    printf("Enter the principal (p): ");
    scanf("%lf", &p);

    printf("Enter the interest rate (r): ");
    scanf("%lf", &r);
    r /= 100;

    printf("Enter the # of years (t): ");
    scanf("%i", &t);

    printf("Enter the # of times compounded per year (n): ");
    scanf("%i", &n);

    a = p * pow(1 + (r / n), n * t);
    printf("After %i year(s), the total will be $%.2lf\n", t, a);

    return 0;
}