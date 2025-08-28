#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int root;
    int pras;

    printf("Enter a number: ");
    scanf("%d", &n);

    root = (int)sqrt(n);
    pras = (root * root == n);

    printf("%d\n", pras);
    return 0;
}
