#include <stdio.h>
#define __biggerNum(x, y) (x > y) ? x : y
int main(void)
{
    printf("Enter two numbers: ");
    int a, b;
    fflush(stdin);
    scanf("%d %d", &a, &b);

    printf("Bigger number is : %d\n", __biggerNum(a, b));
    return 0;
}