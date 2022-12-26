#include <stdio.h>
int main(void)
{
    int range = 100;
    int i, j, k;
    for (i = 1; i <= range; i++)
        for (j = 1; j <= i; j++)
            for (k = 1; k <= j; k++)
            {
                if (i * i == j * j + k * k)
                    printf("\t\t%d\t,\t%d\t,\t%d\n", j, k, i);
            }
    return 0;
}