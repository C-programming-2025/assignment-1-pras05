#include <stdio.h>

int main() {
    int num;
    int pras;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    pras = (num > 0) && ((num & (num - 1)) == 0);
    printf("%d\n", pras);
    return 0;
}
