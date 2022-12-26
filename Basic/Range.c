#include <stdio.h>
int main(void)
{
    int max, min;
    int n;
    printf("Enter a numbers: ");
    scanf("%d", &n);
    max = min = n;
    while (n != -9999)
    {
        (max < n) ? max = n : 1;
        (min > n) ? min = n : 1;
        scanf("%d", &n);
    }
    printf("Range is from %d to %d.\n", min, max);
    return 0;
}