#include <stdio.h>

void swap(int *a, int *b)
{

    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int num1 , num2;

    printf("\n==================================\n");
    printf("Enter value of num1: ");
    scanf("%d", &num1);

    printf("Enter value of num2: ");
    scanf("%d", &num2);

    printf("\nBefore swapping num1 = %d , num2 = %d\n", num1 , num2);

    swap(&num1,&num2);

    printf("\nAfter swapping num1 = %d , num2 = %d\n", num1 , num2);

    return 0;
}