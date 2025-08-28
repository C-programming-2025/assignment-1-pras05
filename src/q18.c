#include <stdio.h>

int main() {
    int a, b, c;
    int pras;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    pras = (a * a) + (b * b) + (c * c);

    printf("Sum: %d\n", pras);
    return 0;
}
