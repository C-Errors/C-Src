//No return type no parameters - NRNP//

#include <stdio.h>
#include <conio.h>
void clrscr(void);

void addition()
{
    int num1 , num2;
    printf("\n\nPlease enter two numbers: ");
    scanf("%d%d", &num1 , &num2);

    printf("Addition of %d and %d = %d", num1 , num2 , num1 + num2);
}

void substraction()
{
    int num1 , num2;
    printf("\n\nPlease enter two numbers: ");
    scanf("%d%d", &num1 , &num2);

    printf("\nSubstraction of %d and %d = %d", num1 , num2 , num1 - num2);
}

void main()
{
    void clrscr();
    printf("\nStart of the program\n");

    addition();
    substraction();

    printf("\n\nEnd of program\n\n");
}