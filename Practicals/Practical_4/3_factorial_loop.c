#include<stdio.h>  
int main()    
{    
    int i, number;
    long factorial = 1;

    printf("Enter a number: ");    
    scanf("%d",&number);

    for(i=1;i<=number;i++)
    {    
      factorial = factorial*i;    
    }    
        printf("\nFactorialorial of %d is: %d",number,factorial);    
    return 0;  
}  