#include <stdio.h>
#include <conio.h>
void clrscr(void);

void showTable()
{
    int num;
    printf("\nEnter a number:- ");
    scanf("%d", &num);

    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d * %d\t =  %d\n", num , i , num*i);
    }
}

void main()
{
    void clrscr();

    showTable();
    printf("\n\n");
    showTable();

    printf("\n\n===========================\n\n");

    getch();
}

// void showTable(int num)
// {
//     int i;
//     for(i=1;i<=10;i++)
//     {
//         printf("%d * %d\t =  %d\n", num , i , num*i);
//     }
// }
// void main()
// {

//     void clrscr();
//     printf("\nCreating user def function\n");
//     sayHello();
//     printf("\n\nI am in main function again");
//     printf("\nCalling showTable function below\n\n");

//     showTable(5);
//     printf("\n\n");
//     showTable(10);
//     printf("\n\n===========================\n\n");
//     getch();
// }