#include <stdio.h>

void percentage(int eng ,int sci , int math)
{
    float percentage;
    char per = '%';
    percentage = (eng + sci + math) / 3.0;

    printf("percentage = %.2f %c\n", percentage, per);
}

void main()
{
    int eng , sci , math;

    printf("\nEnter marks of Eng , Sci , Maths: ");
    scanf("%d%d%d",&eng, &sci , &math);
    percentage(eng , sci ,math);

    printf("\n");
}