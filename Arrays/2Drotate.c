#include <stdio.h>
void rotateArr(int[], int, int);
void display(int[], int);
int main()
{

    int len;
    printf("Give the size of the array: ");

    scanf("%d", &len);
    int n[len][len];
    int *p = *n;

    printf("Enter the %d Integers for array : ", len * len);
    int i;
    for (i = 0; i < len * len; i++)
    {
        scanf("%d", (p + i));
    }

    int k;
    printf("By what number to rotate: ");
    scanf("%d", &k);

    printf("\nThe array elements before rotation: \n");
    for (i = 1; i <= len; i++)
    {
        display(*(n + i - 1), len);
    }

    for (i = 1; i <= len; i++)
    {
        rotateArr(*(n + i - 1), len, k);
    }
    printf("The array elements after rotation: \n");
    for (i = 1; i <= len; i++)
    {
        display(*(n + i - 1), len);
    }
    return 0;
}

void rotateArr(int *arr, int l, int k)
{
    if (k >= l)
        k %= l;
    int i, j;
    if (k > 0 && k < l)
    {
        for (i = 0; i < k; i++)
        {

            j = k;

            int temp = *(arr + i);
            *(arr + i) = *(arr + j);
            *(arr + j) = temp;

            for (; j < l - 1; j++)
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void display(int *arr, int l)
{
    int i, j;
    for (i = 0; i < l; i++)
    {
        if (i < l - 1)
            printf("%d, ", *(arr + i));
        else
            printf("%d\n", *(arr + i));
    }
}