#include <stdio.h>
int main()
{
    int daysElp;
    printf("Enter the year: ");
    scanf("%d", &daysElp);
    daysElp -= 1;
    daysElp = daysElp * 365 + daysElp / 4;
    daysElp %= 7;
    if (daysElp == 1)
        printf("First day is Monday.\n");
    if (daysElp == 2)
        printf("First day is Tuesday.\n");
    if (daysElp == 3)
        printf("First day is Wednesday.\n");
    if (daysElp == 4)
        printf("First day is Thursday.\n");
    if (daysElp == 5)
        printf("First day is Friday.\n");
    if (daysElp == 6)
        printf("First day is Saturday.\n");
    if (daysElp == 7)
        printf("First day is Sunday.\n");
    return 0;
}