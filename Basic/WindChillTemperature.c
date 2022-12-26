#include <stdio.h>
#include <math.h>
int main()
{
    float t, v;
    printf("Enter the Air Temperature and Air Velocity: ");
    scanf("%f%f", &t, &v);
    float wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);
    printf("Wind Chill Factor = %f\n", wcf);
    return 0;
}