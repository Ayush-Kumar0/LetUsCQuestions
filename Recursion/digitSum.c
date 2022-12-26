#include <stdio.h>
int recSum(int);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int s = recSum(n);
    printf("Sum of the digits: %d\n", s);
    return 0;
}

int recSum(int n)
{
    if (n == 0)
        return 0;
    return (n % 10 + recSum(n / 10));
}