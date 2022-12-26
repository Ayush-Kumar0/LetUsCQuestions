#include <stdio.h>
int runSum(int);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int s = runSum(n);
    printf("Sum of natural numbers till %d : %d\n", n, s);
    return 0;
}

int runSum(int n)
{
    if (n == 1)
        return 1;
    else
        return (runSum(n - 1) + n);
}