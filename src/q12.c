#include <stdio.h>

int main() {
    int a, b, c;
    int pras;

    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    pras = (a>b) && (c!=0);
    
    printf("%d\n", pras);
    return 0;
}