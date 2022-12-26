#include <stdio.h>
#include <math.h>
int main()
{
    printf("You need to enter three points (X1,Y1) , (X2,Y2) and (X3,Y3).\n");
    int x1, y1, x2, y2, x3, y3;
    printf("Enter (X1,Y1): ");
    scanf("%d%d", &x1, &y1);
    printf("Enter (X1,Y1): ");
    scanf("%d%d", &x2, &y2);
    printf("Enter (X1,Y1): ");
    scanf("%d%d", &x3, &y3);
    float d1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    float d2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    float d3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    if ((d1 + d2) == d3)
        printf("Points are Collinear.\n");
    else
        printf("Points are not Collinear.\n");
    return 0;
}