#include <stdio.h>

int main()
{
    int num1 , num2 , sum , sub;
    int *ptr1 , *ptr2;

    printf("\nEnter two numbers: ");
    scanf("%d%d", &num1 , &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;
    printf("\nSum of 2 numbers = %d", sum);

    sub = *ptr1 - *ptr2;
    printf("\nSub of 2 numbers = %d\n\n", sub);

    return 0;
}