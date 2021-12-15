#include <stdio.h>

void calc(int *p);
void main()
{
    int x = 10;
    printf("\nValue of x before modification = %d", x);
    calc(&x);
    printf("\nValue of x after modification = %d\n\n", x);
}

void calc(int *p)
{
    *p = *p + 10;
    printf("\nValue of p in function = %d", *p);
}