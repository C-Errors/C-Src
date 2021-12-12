#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    int x;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch(grade){
    case 'A':   
    case 'a':
        x = 10;
        switch(x)
        {
            case 10: printf("\nI have entered 10");
            default : printf("\nInvalid value of x\n");
        }
        printf("Oh nice! You have scored A grade");
        printf("\nWell done");
        break;
    case 'B' :
    case 'b':
        printf("You did alright!, You have scored B grade");
        printf("\nNice!");
        break;
    case 'C' :
    case 'c':
        printf("Could have done better , You have scored C grade");
        printf("\nBetter luck next time");
        break;
    case 'D' :
    case 'd':
        printf("You did poorly! , You have scored D grade");
        break;
    case 'E' :
    case 'e':
        printf("You Failed! , You have scored E grade");
        break;
    default :
        printf("Invalid grade");
    }

    printf("\n\nEnd of switch statement and the program");
    return 0;

};

