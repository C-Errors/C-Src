#include <stdio.h>

void main()
{
    int array1[100], array2[100];
    int i, n;
	   
    printf("Enter array limit :");
    scanf("%d",&n);
   
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
        {
	        printf("element - %d : ",i);
	        scanf("%d",&array1[i]);
	    }

    for(i=0; i<n; i++)
    {
        array2[i] = array1[i];
    }

    printf("\nFirst array elements : \n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", array1[i]);
    }

    printf("\n\nSecond array elements : \n");
    for(i=0; i<n; i++)
    {
        printf("% 5d", array2[i]);
    }
}