#include <stdio.h>

int main() {
    int a;
    printf("Enter one numbers:");
    scanf("%d", &a);

    printf("Answer=%d\n", ((++a)*3)-10);
return 0;
}