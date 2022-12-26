#include <stdio.h>
long long strInt(char *);
int main()
{
    char str[100];
    printf("Enter the number: ");
    scanf("%s", str);
    long long num = strInt(str);
    printf("The Integer obtained : %lld\n", num);
    return 0;
}

long long strInt(char *p)
{
    long long num = 0;
    while (*p != 0)
    {
        num = num * 10 + (int)*p++ - 48;
    }
    return num;
}