#include<stdio.h>
#include <stdlib.h>

int main()
{
    int x , y , z ;

    printf("\nEnter the first number: ");
    scanf ("%d", &x);

    printf("Enter the second number: ");
    scanf ("%d", &y);

    printf("Enter the third number: ");
    scanf ("%d", &z);

    if(x < y && x != y)
        printf("X < Y && x != y  is True\n");

    if(x == y || x > y)
        printf("X == Y || X > Y is TRUE\n");

    if(x >= y || (x == z || x <= z));
        printf("x >= y || (x == z || x <= z) is TRUE\n");

    if(!(x <= y))
        printf("!(x <= y) is TRUE\n");

    if(!(x == y && x > z))
        printf("!(x == y && x > z) is TRUE\n");

    if(!(x != y))
        printf("!(x != y) is TRUE\n");


    return 0;
    
}