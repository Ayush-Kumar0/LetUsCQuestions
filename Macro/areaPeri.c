#include <stdio.h>

#ifndef _MATH_H_
#include <math.h>
#endif

#include "areaperi.h"

#define FLUSH fflush(stdin)

int main(void)
{
    printf("Available choices : \n\t1> Triangle\n\t2> Square\n\t3>Circle\n");
    printf("\nYour choice: ");
    int ch = 0;
    scanf("%d", &ch);
    FLUSH;
    printf("\n\t");
    switch (ch)
    {
    case 1:
    {
        printf("Enter three sides of triangle: ");
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        printf("\t  Area of Triangle = %.2lf\n", __areaTri(a, b, c));
        printf("\t  Perimeter of Triangle = %d\n", __prTri(a, b, c));
        break;
    }
    case 2:
    {
        printf("Enter side of square: ");
        int a;
        scanf("%d", &a);
        printf("\t  Area of Square = %d\n", __areaSq(a));
        printf("\t  Perimeter of Square = %d\n", __prSq(a));
        break;
    }
    case 3:
    {
        printf("Enter radius of circle: ");
        int r;
        scanf("%d", &r);
        printf("\t  Area of Circle = %.2lf\n", __areaCir(r));
        printf("\t  Circumference of Circle = %.2lf\n", __prCir(r));
        break;
    }
    default:
        printf("None of the choices matched.\n");
    }
    return 0;
}