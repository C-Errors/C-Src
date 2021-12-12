#include <stdio.h>

void main()
{
   int i,n,a[50];
   
    printf("Enter the limit of the array :");
    scanf("%d",&n);
   
    printf("Input %d numbers in the array :\n",n);
    for(i=0;i<n;i++)
        {
	        printf("element - %d : ",i);
	        scanf("%d",&a[i]);
	    }
      
    printf("\nOriginal values are : \n");
    for(i=0;i<n;i++)
        {
	        printf("% 5d",a[i]);
	    }
 
    printf("\n\nReversed values are :\n");
    for(i=n-1;i>=0;i--)
        {
	        printf("% 5d",a[i]);
	    }
    printf("\n\n");
}