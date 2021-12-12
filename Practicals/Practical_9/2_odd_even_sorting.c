#include <stdio.h>

void main()
{
   int i,j=0,a=0;
   int n [10];
   int o [10];
   int e [10];
  
    for (i=0;i<10;i++)
    {
        printf("\nEnter a number :");
        scanf("%d",&n[i]);
    }
 
    for (i=0;i<10;i++)
    {
        if (n[i]%2 == 0)
	        {
	            o[j] = n[i];
	            j++;
	        }
	    else
	        {
	            e[a] = n[i];
	            a++;
	        }
    }
    printf("\nEven numbers: \n");
    for(i=0;i<j;i++)
        {
	        printf("%d ",o[i]);
        }

    printf("\n");

    printf("\nOdd numbers :\n");
    for(i=0;i<a;i++)
        {
	        printf("%d ", e[i]);
        }
    
    printf("\n");
}