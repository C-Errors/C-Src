#include<stdio.h>

int main()
{
    double num;
    float num1;
    long num2;
    int num3;

    num = 5;
    num1 = 2.0;
    num2 = 10;
    num3 = 100000000000;

    printf("Value of double is %lf\n", num);
    printf("And size of double is %lf\n", sizeof(double));
    printf("\nValue of float = %f\n", num1);
    printf("And size of float is %f\n", sizeof(float));
    printf("\nValue of long = %ld\n", num2);
    printf("And size of long is %ld\n", sizeof(long));
    printf("\nValue of int = %d\n", num3);
    printf("And size of int is %d\n", sizeof(int));

    return 0;
    
}