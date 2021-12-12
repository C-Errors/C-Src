#include<stdio.h>
#include <stdlib.h>

int main()
{
    int base;
    int height;
    float area; //float = decimal numbers

    base = 25;
    height = 10;
    area = 0.5 * base * height;

    printf("Base = %d \nHeight = %d \n", base , height);
    printf("Area of the triangle is = %f", area);

    return 0;
    
}