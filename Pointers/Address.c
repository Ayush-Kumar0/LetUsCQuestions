#include <stdio.h>
int gvar;
int fa();
int fb();
int fc();
int main()
{
    int a, b;
    int *x, *y, *z;
    x = &a;
    y = &b;
    z = &gvar;
    printf("%16u %16u %16u\n", gvar, x, y);
    printf("%16x %16x %16x\n", gvar, x, y);
    printf("%p %p %p\n", gvar, x, y);
    printf("%p %p %p\n", fa, fb, fc);

    int (*pt[3])() = {fa};
    pt[0]();
    if (pt[1] == NULL)
        printf("It's NULL\n");
    return 0;
}

int fa()
{
    int a = 9;
    printf("%d\n", a);
    return 'A';
}
int fb()
{
    return 'B';
}
int fc()
{
    return 'C';
}