#include <stdio.h>

int main() {
    int a, b;
    int pras;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    pras = a;
    a = b;
    b = pras;
    
    printf("After swapping:  a = %d, b = %d\n", a, b);
    return 0;
}
