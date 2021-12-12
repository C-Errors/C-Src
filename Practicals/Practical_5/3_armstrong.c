#include <stdio.h>

void main(){

    int num,p,sum=0,tem;

    printf("\nInput  a number: ");
    scanf("%d",&num);

    for(tem=num;num!=0;num=num/10){
         p=num % 10;
         sum=sum+(p*p*p);
    }   
    if(sum==tem)
         printf("\n%d is an Armstrong number.\n",tem);
    else
         printf("\n%d is not an Armstrong number.\n",tem);

}
