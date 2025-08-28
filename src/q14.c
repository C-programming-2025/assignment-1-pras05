#include <stdio.h>

int main() {
    int x, y;

    printf("Enter two values: ");
    scanf("%d %d", &x, &y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("After swapp:  x = %d, y = %d\n", x, y);
    return 0;
}