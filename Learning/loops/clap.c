#include <stdio.h>

int main()
{
    int i, num, limit;
    long factorial=1;
    printf("Enter Number for clap pattern : ");
    scanf("%d",&num);

    printf("Enter limit for clap pattern : ");
    scanf("%d",&limit);

    for(i = 1; i <= limit ; i++)
    {
        if(i % num== 0)
        {
            printf("CLAP\n");
        } else {
            printf("%d\n", i);
        }
    }
    
}