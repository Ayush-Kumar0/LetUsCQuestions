#include <stdio.h>
int main(void)
{
    int a = -1;
    while (a++ < 255)
        printf("%d = %c\n", a, a);
    return 0;
}