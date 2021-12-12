#include <stdio.h>

void main ()
{
    float a, b , c , d;

    printf("Enter Four numbers: ");
    scanf("%f%f%f%f", &a , &b , &c , &d);

    float add = a + b + c + d;

    printf("\nSum of four numbers = %f\n", add);

    printf("\nAverage of four numbers = %f", add/4);

}