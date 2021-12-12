#include <stdio.h>

int main()
{
    int a[500],i,min,max,n;
 
    printf("\n\nEnter the limit : ");
    scanf("%d",n);

    printf("\n\nEnter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
 
    min=max=a[0];
    for(i=1; i<n; i++)
    {
        if(min>a[i])
        {
		    min=a[i];
        }   
		if(max<a[i])
        {
		    max=a[i]; 
        }      
    }
    printf("\nSmallest number in the array : %d",min);
    printf("\nBiggest number in the array : %d",max);
 
    return 0;
}