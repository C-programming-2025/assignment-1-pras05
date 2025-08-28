#include <stdio.h>

int main() {
    int a, b, c;
    int pras;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    pras = (a == b) && (b != c);
    
    printf( "%d\n", pras);
    return 0;
}