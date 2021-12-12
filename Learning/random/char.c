#include<stdio.h>
#include <stdlib.h>

int main()
{
    char division;
    char course[30];

    division = 'B';

    printf("\nEnter the name of your course : ");

    //scanf("%s", &course);                          //multi character aka string
    //printf("\nCourse name : %s", course);

    gets(course);                                    //gets s in gets represents string
    printf("Course name : %s\n", course);
    //puts(course);

    printf("\nEnter your class division: ");
    division = getchar();                             //single character
    printf("Your division is : ");
    putchar(division);

    return 0;
    
}