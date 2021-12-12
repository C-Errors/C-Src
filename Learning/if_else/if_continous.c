#include <stdio.h>

void main()
{
    float percentage;
    printf("Enter the Percentage : ");
    scanf("%f", &percentage);
    if (percentage<40)
        printf("\nNot Qualified");

    if (percentage>=80 && percentage <=100)
        printf("\nO grade");

    if (percentage>=60 && percentage <=79)
        printf("\nA grade");

    if (percentage>=50 && percentage <=59)
        printf("\nB grade");

    if (percentage>=40 && percentage <=49)
        printf("\nC grade");

    printf("\nEND OF PROGRAM");
}