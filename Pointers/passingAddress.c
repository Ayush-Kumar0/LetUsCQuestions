#include <stdio.h>
void fun(int *k, int *);
int main()
{
    int i = 5, j = 2;
    int *x = &i, *y = &j;
    fun(x, y);
    printf("%d %d\n", i, j);
    return 0;
}
void fun(int *i, int *j)
{
    *i = *i * *i;
    *j = *j * *j;
}