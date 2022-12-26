typedef long long int mydata;
#include <stdio.h>
int main(void)
{
    int a;
    mydata fact = 1;
    printf("Enter a number: ");
    // Maximum number can be 20
    scanf("%d", &a);
    if (a < 0)
        printf("Factorial of negative numbers is not defined.");
    else
    {
        while (a > 0)
            fact *= a--;
        printf("Factorial of number is %lld", fact);
    }
    return 0;
}