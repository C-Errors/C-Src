#include <stdio.h>

void main()
{
	int i,arr1[10],arr2[10],sum[10];

	printf("\nEnter first array:-\n\n");
	for(i=0;i<=4;i++)
	{
		printf("1st Array elements [%d] = ",i);	
		scanf("%d",&arr1[i]);
	}
	printf("\nEnter second array:-\n\n");	
	for(i=0;i<=4;i++)
	{
		printf("2nd Array elements [%d] = ",i);	
		scanf("%d",&arr2[i]);
	}
	
	for(i=0;i<=4;i++)
	{
		sum[i]=arr1[i]+arr2[i];
	}
	
	printf("\nSum of both the arrays :- \n");	
	for(i=0;i<=4;i++)
	{
		printf("\nSum of [%d]= %d",i,sum[i]);	
	}	
}