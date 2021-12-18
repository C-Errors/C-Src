#include <stdio.h>

void main()
{
    const int num = 20;
    printf("\nValue of num = %d\n", num);
    int *p;
    p = &num;
    *p = 80;
    printf("Value of num = %d\n\n", num);
}