#include<stdio.h>
#include<conio.h>
void clrscr(void);

void main()
{
    int x,y, *large, *xptr,*yptr;

    void clrscr();

    printf("\nEnter the value of x and y : ");
    scanf("%d%d",&x,&y);

    xptr = &x;
    yptr = &y;

    if(*xptr > *yptr)
    {
        large = xptr;
    }
    else
    {
        large = yptr;
    }
    printf("\nThe largest nmuber is : %d",*large);
    getch();   //not needed
}