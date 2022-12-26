#include <stdio.h>
int main(void)
{
    int range = 3;
    int i, j, k;
    for (i = 1; i <= range; i++)
        for (j = 1; j <= range; j++)
            for (k = 1; k <= range; k++)
            {
                if (j == i || k == j || k == i)
                    continue;
                printf("%d%d%d\n", i, j, k);
            }
    return 0;
}