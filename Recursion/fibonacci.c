#include <stdio.h>
typedef long long int myint;
int k = 1;
myint fib(int);
int main(void)
{
    int ulim;
    printf("Enter number of terms: ");
    scanf("%d", &ulim);
    printf("The terms of fibonacci series are: \n");
    int i;
    for (i = 1; i <= ulim; i++)
        printf("%lld\n", fib(i));
    return 0;
}

myint fib(int n)
{
    if (n == 1 || n == 2)
        return n - 1;
    else
    {
        myint x = (myint)fib(n - 1) + (myint)fib(n - 2);
        return x;
    }
}