#include <stdio.h>  
int main()  
{  
    int i , j, sum;
    int arr[5];

    for(i=0;i<5;i++)
    {
        printf("Enter a number: ");
        scanf("%d",&arr[i]);
    }

    for(j=0;j<5;j++)
    {
        sum = sum + arr[j];
    }
    
    printf("The sum is : %d", sum);
} 