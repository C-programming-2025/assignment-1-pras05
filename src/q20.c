#include <stdio.h>

int main() {
    int n;
    int pras;

    printf("Enter a number: ");
    scanf("%d", &n);

    pras= (n % 3 == 0) || (n % 5 == 0);

    printf("%d\n", pras);
    return 0;
}