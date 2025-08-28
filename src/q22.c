#include <stdio.h>
#include<math.h>

int main() {
    double x, y;
    printf("Enter two numbers: ");  
    scanf("%lf %lf", &x, &y);

    double sum = x + y;

    int pras = (int) sqrt(sum);

    printf("Nearest square root of the sum = %d\n", pras);
    return 0;
}