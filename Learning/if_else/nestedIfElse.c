#include<stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("Program to find the smallest of the three numbers");
    printf("\nEnter the value of x , y , z: ");
    scanf("%d%d%d", &x , &y , &z);
    if (x==y && y ==z) {
        printf("All the numbers are same");
    };
    if (x < y && x < z){
        printf("\n%d is the smallest of the three numbers", x);
    } else if (y < x && y <z){
        printf("\n%d is the smallest of the three numbers", y);
    } else {
        printf("\n%d is the smallest of the three numbers", z);
    }

    return 0;
    
}