#include <stdio.h>

int main() {
    int x, y, z;
    int pras;

    printf("Enter three numbers: ");
    scanf ("%d %d %d", &x, &y, &z);

    pras = x;
    x = y;
    y = z;
    z = pras;

    printf("After swapping: x=%d, y=%d, z=%d\n", x, y, z);
    return 0;
}
