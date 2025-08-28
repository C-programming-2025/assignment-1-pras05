// Write a C program to calculate the area of a rectangle. Prompt the user to enter the length and width, and display the result.
#include <stdio.h>

int main() {
    int length, width;
    int pras;

    printf("Enter the length and width ");
    scanf("%d %d", &length, &width);
   
    pras = length * width;
    printf("Area: %d\n", pras);
    return 0;
}