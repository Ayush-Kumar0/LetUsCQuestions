#include <stdio.h>
#include <string.h>
int main()
{
    FILE *pt = NULL;
    pt = fopen("a.txt", "w");
    fputs("Hello this is me!", pt);
    fclose(pt);
    return 0;
}