#include<stdio.h>
#include <stdlib.h>

int main()
{
    int base;
    int height;
    float area; 

    printf("Program to calculate area of a triangle\n");

    printf("\nEnter the base of triangle: ");
    scanf ("%d", &base);

    printf("Enter the height of triangle: ");
    scanf ("%d", &height);

    printf("\n\nBase = %d , Height = %d ", base, height);
    printf("\nArea of the triangle = %f sqcm", area = 0.5 * base * height);

    return 0;
    
}