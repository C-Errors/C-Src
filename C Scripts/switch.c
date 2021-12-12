#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade = 'B';

    switch(grade){
    case 'A' :
        printf("You did great!");
        break;
    case 'B' :
        printf("You did alright!");
        break;
    case 'C' :
        printf("Could have done better");
        break;
    case 'D' :
        printf("You did poorly!");
        break;
    case 'E' :
        printf("You Failed!");
        break;
    default :
        printf("Invalid grade");

    }

    return 0;
}