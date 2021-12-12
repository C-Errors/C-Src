#include <stdio.h>
#include <stdlib.h>

void main()
{
    
    int num1 , num2 , num3;
    int result;

    printf("Enter three numbers: ");
    scanf ("%d%d%d", &num1 , &num2 , &num3);

    if(num1 >= num2 && num1 > num3){
        printf("\n%d is the greater of the three numbers", num1);
    }
    else if(num1 > num2 && num1 >= num3){
        printf("\n%d is the greater of the three numbers", num1);
    } 
    else if (num2 >= num1 && num2 > num3){
        printf("\n%d is the greater of the three numbers", num2);
    }
    else if (num2 > num1 && num2 >= num3){
        printf("\n%d is the greater of the three numbers", num2);
    } 
    else if (num3 >= num1 && num3 > num2){
        printf("\n%d is the greater of the three numbers", num3);
    }
    else if (num3 > num1 && num3 >= num2){
        printf("\n%d is the greater of the three numbers", num3);
    }
    else if (num1 == num2 && num1 == num3){
        printf("\nThree numbers are equal");
    }

}