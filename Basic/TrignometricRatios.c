#include <stdio.h>
#include <math.h>
int main()
{
    float ang;
    printf("Enter any angles in degrees: ");
    scanf("%f", &ang);
    ang *= 3.14159 / 180;
    printf("Sin() = %f\nCos() = %f\nTan() = %f\n", sin(ang), cos(ang), tan(ang));
    return 0;
}