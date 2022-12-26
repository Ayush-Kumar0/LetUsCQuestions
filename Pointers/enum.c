#include <stdio.h>
int main(void)
{
    /*
        enums are collection of MACROS
        address of enum variables do exist
        enum elements can be directly used
        enum elements are of int type only
        enum elements do not have addresses since they are not stored in memory
        enum variable can only be assigned with keys present in enum or any other integer(which may or may not be associated with any key of enum)
    */
    enum en
    {
        a,
        b,
        c
    };
    enum en xyz;
    xyz = c;
    printf("%d\n", xyz);
    xyz = 100;
    printf("%d\n", xyz);
    printf("%u\n", &xyz);
    printf("%u\n", &xyz + 1);
    // printf("%u\n", &a); //error
    return 0;
}