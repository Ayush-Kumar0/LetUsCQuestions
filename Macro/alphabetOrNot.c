#include <stdio.h>
#define __isSmall(ch) ch >= 97 && ch <= 122
#define __isCapital(ch) ch >= 65 && ch <= 90
#define __isLetter(ch) __isSmall(ch) || __isCapital(ch)
int main(void)
{
    register int i = 1;
    for (;; i++)
    {
        printf("Test %d:\n\t", i);
        printf("Enter a character: ");
        char ch;
        fflush(stdin);
        scanf(" %c", &ch);
        if (__isSmall(ch))
            printf("\tCharacter is smallercase letter.\n");
        else if (__isCapital(ch))
            printf("\tCharacter is uppercase letter.\n");
        if (__isLetter(ch))
            printf("\tIt's a letter.\n");
        else
            printf("\tIts not a letter\n");
    }
    return 0;
}