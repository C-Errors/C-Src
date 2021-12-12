#include<stdio.h>
#include <stdlib.h>

int main()
{
    int mil;
    int cen; 

    printf("Program to calculate milimeter to centimeter\n");

    printf("\nEnter the number of milimeters: ");
    scanf ("%d", &mil);

    printf("\n\nMilimeters = %d", mil);
    printf("\nConverting %d milimeters to centimeters = %d", mil , cen = mil/100);

    return 0;
    
}