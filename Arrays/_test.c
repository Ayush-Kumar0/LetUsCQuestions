#include <stdio.h>
void fun(int[]);
int main()
{
    int arr[][2][2] = {
        {{1, 3},
         {4, 6}},
        {{5, 2},
         {6, 1}}};
    int *p = NULL + 6422000;
    printf("%d\n", *p);
    return 0;
}

void fun(int arr[])
{
    int a[] = {4, 5};
    int n = a[0];
    arr = a;
    printf("%d\n", arr[0]);
}