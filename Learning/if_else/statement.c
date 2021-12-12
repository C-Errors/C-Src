#include<stdio.h>
#include <stdlib.h>

int main()
{
    int x , y ;

    printf("\nEnter the first number: ");
    scanf ("%d", &x);

    printf("Enter the second number: ");
    scanf ("%d", &y);

    if(x < y)
        printf("X < Y\n");

    if(x > y)
        printf("X > Y\n");

    if(x == y)
        printf("X == Y\n");

    if(x <= y)
        printf("X <= Y\n");

    if(x >= y)
        printf("X >= Y\n");

    if(x != y)
        printf("X != Y\n");


    return 0;
    
}