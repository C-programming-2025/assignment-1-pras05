#include <stdio.h>

int main() {
    char name[30]; 

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Welcome to my computer, %s!\n", name);
    return 0;
}