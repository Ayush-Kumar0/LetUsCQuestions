#include <stdio.h>
#include <math.h>
float PI = 3.1459;
int main()
{
    printf("You have to enter position in Latitudes and Longitudes on Earth.\n");
    printf("Position 1 is (L1,G1) and Position 2 is (L2,G2).\n");
    float L1, G1, L2, G2;
    printf("Enter Postion 1: ");
    scanf("%f%f", &L1, &G1);
    printf("Enter Position 2: ");
    scanf("%f%f", &L2, &G2);
    float disNM = 3963 * acos(sin(L1 * 180 / PI) * sin(L2 * 180 / PI) + cos(L1 * 180 / PI) * cos(L2 * 180 / PI) * cos((G2 - G1) * 180 / PI));
    printf("Distance between (%f,%f) and (%f,%f) in Nautical_Miles = %f\n", L1, G1, L2, G2, disNM);
    return 0;
}