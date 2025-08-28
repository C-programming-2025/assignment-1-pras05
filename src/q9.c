#include <stdio.h>

int main() {
    int days, weeks;
    int pras;

    printf("Enter number of days: ");
    scanf("%d", &days);
   
    weeks = days / 7;
    pras = days % 7;

    printf("%d week and %d days\n", weeks, pras);
    return 0;
}