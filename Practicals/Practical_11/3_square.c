#include <stdio.h>

void addition()
{
    int num1;
    printf("\nPlease enter a number: ");
    scanf("%d", &num1);

    printf("Square of number %d is %d", num1 , num1 * num1);
}

void main()
{
    printf("\nStart of the program\n");

    addition();

    printf("\n\nEnd of program\n\n");
}