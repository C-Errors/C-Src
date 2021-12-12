#include<stdio.h>
#include <stdlib.h>

int main()
{
    float p;
    float c;
    float b;

    float avg;

    printf("Program to calculate average of three subjects\n");

    printf("\nEnter marks of Physics: ");
    scanf ("%f", &p);

    printf("Enter marks of Chemistry: ");
    scanf ("%f", &c);

    printf("Enter marks of Biology: ");
    scanf ("%f", &b);

    printf("\n\nMarks - physics = %f , chemistry = %f , biology = %f ", p , c , b);
    printf("\nAverage of three subjects = %f", avg = (p+c+b)/3);

    return 0;
    
}