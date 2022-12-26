#include <stdio.h>
void primeF(int);
void recprimeF(int);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime factors without recursion: \n");
    primeF(n);
    printf("Prime factors by recursion: \n");
    recprimeF(n);
    return 0;
}

void primeF(int a)
{
    int i;
    for (i = 2; a > 1; i++)
    {
        while (a % i == 0)
        {
            printf("%d\n", i);
            a /= i;
        }
    }
}

void recprimeF(int a)
{
    int i = 2;
    while (a % i != 0)
        i++;
    if (a != i)
        recprimeF(a / i);
    printf("%d\n", i);
}