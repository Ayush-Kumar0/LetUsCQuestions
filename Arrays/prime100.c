#include <stdio.h>
int main()
{
    int l = 100000;
    int a[l];
    int i = 0, j;
    while (i < l)
    {
        a[i] = i + 1;
        i++;
    }

    //
    for (i = 1; i < l; i++)
    {
        int x = a[i];
        if (x != 0)
            for (j = i + 1; j < l; j = j++)
            {
                if (a[j] != 0 && a[j] % x == 0)
                    a[j] = 0;
            }
    }
    //

    for (i = 1; i < l; i++)
    {
        if (a[i] != 0)
            printf("%d, ", a[i]);
    }
    return 0;
}