#include<stdio.h>
 
int main()
{
  int i, number, Sum = 0;
 
  printf("\nPlease Enter the Max number limit : ");
  scanf("%d", &number);
  
  printf("\nOdd Numbers between 0 and %d are : ", number);
  for(i = 1; i <= number; i++)
  {
  	if ( i % 2 != 0 ) 
  	{
  		printf("%d  ", i);
        Sum = Sum + i;
  	}
  }
  printf("\n \nThe Sum of Odd Numbers from 1 to %d  = %d", number, Sum);

  return 0;
}