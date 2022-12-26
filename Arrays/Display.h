#ifndef _STDIO_H_
#include <stdio.h>
#endif
#define _DISPLAY_H_
void display(int *, int);

void display(int *arr, int l)
{
    int i;
    for (i = 0; i < l; i++)
    {
        if (i < l - 1)
            printf("%d ,   ", *(arr + i));
        else
            printf("%d", *(arr + i));
        if (i != 0 && i % 15 == 0)
            printf("\n");
    }
}