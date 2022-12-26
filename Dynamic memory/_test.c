#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    fptr();
    int *ptr = (int *)malloc(0);
    if (ptr == NULL)
    {
        printf("Null");
    }
    else
    {
        *ptr = 439;
        free(ptr);
        printf("%u", *ptr);
    }
    return 0;
}