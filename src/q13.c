#include <stdio.h>

int main() {
    int num;
    int pras;
 
    printf("Enter a number: ");
    scanf("%d", &num);

    pras = (num / 2 * 2 == num) && (num / 3 * 3 == num);

    printf("%d\n", pras);
    return 0;
}