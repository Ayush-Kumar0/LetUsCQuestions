#include <stdio.h>
#include <math.h>
int main(void)
{
    int num = 1;
    int i, j;
    while (num <= 5000000000)
    {
        int a = (int)cbrt(num);
        int c = 0;
        int k = 0;
        for (i = 1; i <= a; i++)
        {
            if (k == i)
                continue;
            for (j = 1; j <= a; j++)
            {
                if (num == i * i * i + j * j * j)
                {
                    k = j;
                    c++;
                }
                if (c == 2)
                {
                    printf("Ramanujan number is %d\n", num);
                    goto end;
                }
            }
        }
    end:
        num++;
    }
    return 0;
}