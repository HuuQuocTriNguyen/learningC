#include <stdio.h>
#include <math.h>

int main() {
    double r = 0.0;
    double area = 0.0;
    double perimeter = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &r);

    perimeter = PI * pow(r, 2);
    area = 4 * PI * pow(r, 2);
    volume = (4/3) * PI * pow(r, 3);

    printf("Area: %.2lf\n", perimeter);
    printf("Surface area: %.2lf\n", area);
    printf("Volume: %.2lf\n", volume);

    return 0;
}