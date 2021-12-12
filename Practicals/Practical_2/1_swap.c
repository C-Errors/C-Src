#include<stdio.h>

void main()
{
    
int a,b;//SWAP

printf("\nENTER 2 NUMBERS: ");
scanf("%d%d",&a,&b);

printf("\nVALUES BEFORE SWAPPING A = %d and B = %d",a,b);

a = a + b;
b = a - b;
a = a - b;

printf("\nVALUES BEFORE SWAPPING A = %d and B = %d",a,b);
}