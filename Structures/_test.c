#include <stdio.h>
#include <string.h>
int main(int a, char b[], char *c)
{
    struct gospel
    {
        const int num; // Constant should not be used
        char mess1[50];
        int ch;
        char mess2[50];
    } m;
    // m.num = 1;    //Error
    printf("%d %s %c\n\n", a, b, *c);

    strcpy(m.mess1, "If all that you have is hammer");
    strcpy(m.mess2, "Everything looks like a nail");
    printf("%u %u %u %u\n", m.num, m.mess1, &m.ch, m.mess2);
    return 0;
}