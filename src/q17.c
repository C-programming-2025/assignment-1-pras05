#include <stdio.h>

int main() {
    char alphabet;
    int pras;

    printf("Enter the single character: ");
    scanf("%c", &alphabet);

    pras = alphabet>='A' && alphabet<='Z';

    printf("%d\n", pras);
    return 0;
}