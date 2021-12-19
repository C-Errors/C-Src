#include<stdio.h>  
int main()    
{    
    int i, number;
    long factorial = 1;

    printf("Enter a number: ");    
    scanf("%d",&number);  // num = 5

    for(i = 1;i <= number; i++)
    {    
      factorial = factorial*i;   
      printf("\nWhen number is %d\nFactorial of %d is: %d",i ,number,factorial); 
    }    
      printf("\n\nMain answer = %d is: %d",number,factorial);    
    return 0;  
}  