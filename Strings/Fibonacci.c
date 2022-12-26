#include <stdio.h>
#include <string.h>
void fibWords(int);
int main()
{
    fibWords(24);
    return 0;
}

void fibWords(int n)
{
    char a[100000] = "a", b[100000] = "b";
    char ch[100000] = "";
    if (n == 1)
        strcpy(ch, a);
    else if (n == 2)
        strcpy(ch, b);
    else
    {
        strcpy(ch, a);
        strcat(ch, b);
        char temp[100000] = "";
        int i = 3;
        for (; i <= n; i++)
        {
            strcpy(temp, b);
            strcat(b, a);
            strcpy(a, temp);
            strcat(ch, b);
        }
    }
    printf("%s\n", ch);
}