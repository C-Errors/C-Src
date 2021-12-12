#include <stdio.h>

int main()
{
    int i,num;
    long factorial=1;
    printf("Enter Number for factorial table : ");
    scanf("%d",&num);
    for (i=num; i>=1; i--)
    {
        factorial = factorial * i; 
    }
    printf ("\nFactorial is %ld", factorial);
}