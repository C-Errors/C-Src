//Simple if , simple if else , if_else if ladder , nested if , nested if else statement

#include <stdio.h>

void main()
{
    //Simple if statement
    int num, status;
    int T = 1, F = 0;

    printf("\nEnter the number: ");
    scanf("%d", &num);
    if (num%5 == 0)             //if (condition made up of relational or logical operators)
    {   
        printf("%d is divisible by 5", num);
    } else {
        printf("%d is not divisible by 5", num);
    }
               //<expression condition> ? <iftrue> = 1 , <else> = 0;
    status = (num%5 == 0)? T : F ; //Ternary Operator ? ;
    printf("\n\nValue of status %d", status);

    (num%5 == 0)? printf("\n\nValue of status is True") : printf("\n\nValue of status is False") ; //Ternary Operator ? ;

    printf("\n\nEND OF PROGRAM");
}