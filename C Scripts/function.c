#include<stdio.h>
#include <stdlib.h>

int main()
{
    sayHi("Criz", 20);
    sayHi("Syntax", 25);
    sayHi("Pocky", 30);

    return 0;
}

void sayHi(char name[], int age[]) {
    printf("Hello %s , You are %d years old\n" , name , age);
}