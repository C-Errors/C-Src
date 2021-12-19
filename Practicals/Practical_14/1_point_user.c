#include <stdio.h>
int main()
{
    int num , *p;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Value is %d\n", num);
    printf("Address is %d\n", &num);

    p =  &num;

    printf("\nAddress of pointer p is: %p", *p);

    return 0;
}