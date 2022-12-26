#ifndef _STDIO_H_
#include <stdio.h>
#endif
#define _SORTING_H_

// Declarations
void selectionSort(int[], int, int);
void bubbleSort(int[], int, int);
void insertionSort(int[], int, int);
void mergeSort(int *, int, int);
void merge(int *, int, int, int);

/*







Selection Sort*/
void selectionSort(int arr[], int l, int ch)
{
    int i, j;
    if (ch == 1) // Ascending
    {
        for (i = 0; i < l - 1; i++)
        {
            for (j = i + 1; j < l; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    if (ch == -1) // Descending
    {
        for (i = 0; i < l - 1; i++)
        {
            for (j = i + 1; j < l; j++)
            {
                if (arr[i] < arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    else
        printf("\nInvalid Choice\n");
}

/*







Bubble Sort*/
void bubbleSort(int arr[], int l, int ch)
{
    int i, j;
    if (ch == 1) // Ascending
    {
        for (i = 0; i < l - 1; i++)
        {
            for (j = 0; j < l - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    if (ch == -1) // Descending
    {
        for (i = 0; i < l - 1; i++)
        {
            for (j = 0; j < l - i - 1; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    else
        printf("\nInvalid Choice\n");
}

/*







Insertion Sort*/
void insertionSort(int arr[], int l, int ch)
{
    int i, j;

    if (ch == 1) // Ascending
    {
        for (i = 1; i < l; i++)
        {
            for (j = i; j > 0; j--)
            {
                if (arr[j] < arr[j - 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
            }
        }
    }

    if (ch == -1) // Descending
    {
        for (i = 1; i < l; i++)
        {
            for (j = i; j > 0; j--)
            {
                if (arr[j] > arr[j - 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
            }
        }
    }
    else
        printf("\nInvalid Choice\n");
}

/*







Merge Sort*/
void merge(int *arr, int l, int m, int r)
{
    int i = l, j = m + 1, c = 0;
    int len = r - l + 1;
    int ar[len]; // temporary array

    while (i <= m && j <= r)
    {
        if (*(arr + i) < *(arr + j))
        {
            *(ar + c) = *(arr + i);
            i++;
        }
        else
        {
            *(ar + c) = *(arr + j);
            j++;
        }
        c++;
    }
    while (i <= m)
    {
        *(ar + c++) = *(arr + i++);
    }
    while (j <= r)
    {
        *(ar + c++) = *(arr + j++);
    }

    // copying to original array
    for (c = 0; c < len; c++)
    {
        *(arr + c + l) = *(ar + c);
    }
}

void mergeSort(int *arr, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}