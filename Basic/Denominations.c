#include <stdio.h>
int main()
{
    int n;
    printf("Enter the amount in Rupees: ");
    scanf("%d", &n);
    printf("Notes of Rs100: %d\n", (n / 100));
    n %= 100;
    printf("Notes of Rs50: %d\n", (n / 50));
    n %= 50;
    printf("Notes of Rs10: %d\n", (n / 10));
    n %= 10;
    printf("Notes of Rs5: %d\n", (n / 5));
    n %= 5;
    printf("Notes of Rs2: %d\n", (n / 2));
    n %= 2;
    printf("Notes of Rs1: %d\n", n);
    return 0;
}