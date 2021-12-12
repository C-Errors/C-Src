#include <stdio.h>
#include <conio.h>
void clrscr(void);

void percentage()
{
    
    int eng , sci , math ;
    float percentage;
    char per = '%';

    printf("\nEnter marks for Eng , Sci , Maths: ");
    scanf("%d%d%d",&eng, &sci , &math);

    percentage = (eng + sci + math ) / 3.0;

    printf("percentage = %.2f %c\n", percentage, per);
    printf("\n");

}

void main()
{

    void clrscr();
    percentage();

}