#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE *file = NULL;
    file = fopen("a.txt", "r");
    if (file == NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }

    long long int i = 1;
    for (; i <= 10; i++)
    {
        char ch[50];
        sprintf(ch, "%15lld\t", i);
        char *ptr = ch;
        while (*ptr != 0)
        {
            fputc(*ptr, file);
            ptr++;
        }
        if (i % 10 == 0)
        {
            fputc('\n', file);
        }
    }
    fclose(file);

    file = fopen("a.txt", "r");
    while (1)
    {
        char ch = fgetc(file);
        if (ch == -1)
            break;
        printf("%c", ch);
    }
    fclose(file);
    printf("Successful\n");
    return 0;
}