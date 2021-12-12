#include <stdio.h>  
  
int main()    
{    
    int a=0, b=1; 
    int c, i, number;

    printf("\n\nEnter the number of elements: ");    
    scanf("%d",&number);   

    printf("\n%d %d",a,b);

    for(i=2;i<number;++i)
    {    
        c=a+b;

        printf(" %d",c);    
        a=b;    
        b=c;    
    }  

    printf("\n\n");
    return 0;  
} 