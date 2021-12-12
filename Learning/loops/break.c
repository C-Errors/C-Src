// BREAK , CONTINUE 

#include <stdio.h>

int main()
{
    int i = 1, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=1;i<=10;i++)
    {   
        if(i==num){
            break;
        }
        else
        printf("Value of i = %d\n", i );
    }
    return 0;
}