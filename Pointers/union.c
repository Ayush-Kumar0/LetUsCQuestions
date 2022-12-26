#include <stdio.h>
int main(void)
{
    union en
    {
        int a;
        short int b;
    };
    union en x;
    x.a = 0x9035AB3D;
    union en *p = &x;
    printf("%X\n", p->a);
    x.b = 0x0348;
    printf("%X\n", x.b);
    printf("%X\n", x.a);
    return 0;
}