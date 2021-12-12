//With return type No parameters - WRNP//

#include <stdio.h>
#include <conio.h>
void clrscr(void);

int addition()
{
    int num1 , num2;
    printf("\nPlease enter two numbers: ");
    scanf("%d%d", &num1 , &num2);
    return ( num1 + num2 );
}

int substraction()
{
    int num1 , num2;
    printf("\nPlease enter two numbers: ");
    scanf("%d%d", &num1 , &num2);
    return ( num1 - num2 );
}

void main()
{
    void clrscr();
    int answer;
    printf("\nStart of the program\n");

    answer = addition();
    printf("Addition result is %d\n", answer);

    answer = substraction();
    printf("Substraction result is %d\n", answer);

    printf("\nEnd of program\n\n");
}