#include <stdio.h>

void function1(); //function declaration

void main()
{
    function1();
    printf("\nRunning from main function \n");
}

void function1() //function defination
{
    printf("Hi ! From function1 !");
}