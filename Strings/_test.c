#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    // char *st = NULL, ch[50];
    // gets(ch);
    // st = (char *)malloc(51);
    // strcpy(st, ch);

    char *st = "abc", *st1;
    st1 = st;
    st1 = "bcs";

    printf("%s %s\n", st, st1);
    return 0;
}