//No return type with parameters - NRWP//

#include <stdio.h>

void addition(int num1 ,int num2)
{
    printf("\nAddition of %d and %d = %d", num1 , num2 , num1 + num2);
}

void substraction(int num1 ,int num2)
{
    printf("\nSubstraction of %d and %d = %d", num1 , num2 , num1 - num2);
}

void main()
{
    int num1 , num2;

    printf("\nStart of the program\n");

    printf("\nPlease enter two numbers: ");
    scanf("%d%d", &num1 , &num2);
    addition(num1 , num2);

    printf("\nPlease enter two numbers: ");
    scanf("%d%d", &num1 , &num2);
    substraction(num1 , num2);

    printf("\n\nEnd of program\n\n");
}