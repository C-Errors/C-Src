#include <stdio.h>

void main()
{
    int i;
    int num;

    printf("Enter the number for multiplication table: ");
    scanf("%d", &num);

    for(i=1; i<=10; i++){
        printf("%d * %d = %d \n",num , i, num * i);
    }
}