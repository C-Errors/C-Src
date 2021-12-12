#include <stdio.h>
#include <stdlib.h>

void main()
{
    
    int num1 , num2;
    int result;

    printf("Enter two numbers: ");
    scanf ("%d%d", &num1 , &num2);

    if(num1 > num2){
        printf("%d is the greater of the two numbers", num1);
    } else if (num2 > num1){
        printf("%d is the greater of the two numbers", num2);
    } else {
        printf("Both the numbers are equal");
    }

}