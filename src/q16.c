#include <stdio.h>

int main() {
    double x, y;
    double pras;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);

    pras= (x + y) / 2;

    printf("Average: %.2lf\n", pras);
    return 0;
}