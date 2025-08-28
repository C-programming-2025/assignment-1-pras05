#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int pras = (num % 3 == 0) && (num % 5 == 0);

    printf("%d\n", pras);
    return 0;
}
