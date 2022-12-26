#include <stdio.h>
#include "Display.h"
extern void display(int *, int);
void cpy(int[], int[]);

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10];
    printf("Elements of first array:\n");
    display(a, 10);
    cpy(a, b);
    printf("\nElements of second array after copying:\n");
    display(b, 10);
    return 0;
}

void cpy(int arr1[], int arr2[])
{
    // arr2 = arr1;   Array is a constant pointer.

    int i;
    for (i = 0; i < 10; i++)
        arr2[i] = arr1[9 - i];
}