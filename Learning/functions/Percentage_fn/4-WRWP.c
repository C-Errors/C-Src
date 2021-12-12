#include <stdio.h>
#include <conio.h>

float percentage(int eng ,int sci , int math)
{
    float answer = (eng + sci + math ) / 3.0;
    return answer;
}

void main()
{
    float answer ;
    int eng , sci , math ;
    char per = '%';

    printf("\nEnter marks of Eng , Sci , Maths: ");
    scanf("%d%d%d",&eng, &sci , &math);

    // answer = percentage(eng , sci , math);
    printf("percentage = %.2f %c\n", percentage(eng , sci , math), per);

    printf("\n");
}