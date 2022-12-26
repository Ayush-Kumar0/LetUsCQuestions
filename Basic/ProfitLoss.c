#include <stdio.h>
int main()
{
    int cp, sp;
    printf("Enter the Cost Price of the item: ");
    scanf("%d", &cp);
    printf("Enter the Selling Price of the item: ");
    scanf("%d", &sp);
    int dif = sp - cp;
    if (dif > 0)
        printf("You made a profit of %d\n", dif);
    else if (dif < 0)
        printf("You made a loss of %d\n", -dif);
    else
        printf("You have no profit or loss!\n");
    return 0;
}