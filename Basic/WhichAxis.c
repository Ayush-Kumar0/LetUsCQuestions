#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter coordinates of a point: ");
    scanf("%d%d", &x, &y);
    if (x == 0 && y == 0)
        printf("Point lies on Origin.\n");
    else if (x == 0)
        printf("Point lies on Y-Coordinate.\n");
    else if (y == 0)
        printf("Point lies on X-Coordinate.\n");
    else
        printf("Point does not lie on any axes.\n");
    return 0;
}