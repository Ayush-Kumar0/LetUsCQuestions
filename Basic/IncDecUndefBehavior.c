// #include <stdio.h>
int printf(char *, ...);
int scanf(char *, ...);
int main(void)
{
    int a = 4, b = 4, c = 4;
    int x = (++a) + (--a);
    printf("%d\n", x);
    int y = (++b) + 1 + (--b);
    printf("\n%d", y);
    int z = (++c) + printf("\n\n%d\t", c) + (--c) + printf("%d\n\n", c);

    return 0;
}