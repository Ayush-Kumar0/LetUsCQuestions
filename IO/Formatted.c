#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char b;
    char arr[100] = "int 5 char c";
    sscanf(arr, "int %d char %c", &a, &b);
    sprintf(arr, "int 9 char d");
    puts(arr);
    printf("%d %c\n", a, b);
    return 0;
}