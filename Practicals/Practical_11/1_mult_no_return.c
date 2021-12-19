#include <stdio.h>
// #include <conio.h>

void showTable()
{
    int i, num;
    printf("\n\n===========================\n\n");
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(i=1;i<=10;i++)
    {
        printf("%d * %d\t =  %d\n", num , i , num*i);
    }
}

void main()
{
    showTable();
    printf("\n\n===========================\n\n");
}