#include <stdio.h>
typedef long long int myint;
myint bin(int);
int main(void)
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    printf("Binary equivalent is %lld\n", bin(num));
    return 0;
}

myint bin(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 2 + 10 * (myint)bin(n / 2));
}