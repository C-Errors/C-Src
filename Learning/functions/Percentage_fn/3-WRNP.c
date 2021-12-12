#include <stdio.h>
#include <conio.h>

int addition()
{
    int eng , sci , math;
    float percentage;
    char per = '%';

    printf("Enter marks for Eng , Sci , Maths: ");
    scanf("%d%d%d",&eng, &sci , &math);

    return ( (eng + sci + math ) / 3.0 );
}
void main()
{
    float percentage;
    char per = '%';

    printf("\n");

    percentage = addition();
    printf("percentage = %.2f %c\n", percentage, per);

    printf("\n");
}