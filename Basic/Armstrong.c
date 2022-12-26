#include <stdio.h>
int main(void)
{
    int a = 0;
    printf("The Armstrong numbers are: \n");
    while (a++ < 500)
    {
        int cop = a;
        int sumOfProd = 0;
        while (cop != 0)
        {
            int d = cop % 10;
            cop /= 10;
            sumOfProd += d * d * d;
        }
        if (a == sumOfProd)
            printf("%d\n", a);
    }
    return 0;
}