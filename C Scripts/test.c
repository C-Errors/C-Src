#include <stdio.h>

void main()
{
    int birth_year, current_year ,birthday;
    printf("What is your Birth Year? : ");

    scanf ("%d", &birth_year);
    printf("What is the current Year? : ");

    scanf ("%d", &current_year);
    birthday= current_year - birth_year;

    printf("Your birthday is : %d \n", birthday);
}