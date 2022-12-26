#include <stdio.h>
#include <math.h>
int main(void)
{
    int n = 21, flag;
    while (n >= 0)
    {
        printf("Remaining matchsticks: %d\n", n);
        printf("User chooses: ");
        int u;
        scanf("%d", &u);

        while (u < 1 || u > 4 || u > n)
        {
            printf("\tRe-enter the choice: ");
            scanf("%d", &u);
        }

        n -= u;
        if (n == 0)
        {
            flag = 0;
            break;
        }
        int c = 3;
        if (n == 1)
        {
            flag = 1;
            printf("Remaining matchsticks: 1\n");
            break;
        }
        else if (n == 2)
            c = 1;
        else if (n == 3)
            c = 2;
        else if (n == 4)
            c = 3;
        if (n == 5)
            c = 4;
        n -= c;
        printf("Computer chooses: %d\n\n", c);
        if (n == 0)
            flag = 1;
    }

    if (flag == 0)
        printf("Computer wins....\n");
    else
        printf("User Wins....\n");
    return 0;
}