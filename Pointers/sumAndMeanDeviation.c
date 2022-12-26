#include <stdio.h>
#include <math.h>
double avg;
void sum(int *, int *, double *);
double x(int);

int main(void)
{
    int a[5];
    int i, *fnum = &a[0];
    for (i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", fnum + i);
    }

    int b, c, d, e, su;
    double std;
    int *s = &su;
    double *dev = &std;
    sum(fnum, s, dev);
    printf("\nSum= %d\n", *s);
    printf("Average= %.2lf\n", avg);
    printf("Standard Deviation= %.2lf\n", *dev);
    return 0;
}
void sum(int *fn, int *su, double *stdev)
{
    int i;

    for (i = 0; i < 5; i++)
    {
        *su += (*(fn + i));
    }

    avg = *su / 5.0;

    for (i = 0; i < 5; i++)
    {
        *stdev += x(*(fn + i));
    }
}
double x(int n)
{
    return ((n - avg) * (n - avg) / 5.0);
}