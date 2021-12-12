#include <stdio.h>

void main()
 {
    int arr1[10], arr2[10], arr3[10];
    int i,j=0,a=0,n;
	
    printf("\nEnter array limit: ");
    scanf("%d",&n);
   
    printf("\nInput %d elements in the array : \n\n",n);
    for(i=0;i<n;i++)
        {
	        printf("element - %d : ",i);
	        scanf("%d",&arr1[i]);
	    }

    for(i=0;i<n;i++)
    {
	    if (arr1[i]%2 == 0)
	        {
	            arr2[j] = arr1[i];
	            j++;
	        }
	    else
	        {
	            arr3[a] = arr1[i];
	            a++;
	        }
    }

    printf("\nEven numbers: \n");
    for(i=0;i<j;i++)
        {
	        printf("%d ",arr2[i]);
        }

    printf("\n");

    printf("\nOdd numbers :\n");
    for(i=0;i<a;i++)
        {
	        printf("%d ", arr3[i]);
        }
    
    printf("\n");
}