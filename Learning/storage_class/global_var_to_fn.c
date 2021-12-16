#include <stdio.h>

int x = 10;          //Sets as global int bc its defined outside all the functions

void showValue()
{
    x++;
    printf("\nValue of x = %d", x);
}

void main()
{
    printf("\n\nValue of x = %d", x);
    showValue();
    showValue();
    printf("\n\n");
}