#include<stdio.h>
#include <stdlib.h>

int main(){

    int age;                   //int - interger datatype - complete numbers , can also write as int age, height aka using comma
    char game[] = "game";      //char - character
    char name[20];

    printf("What is your name:" "\n");
    fgets (name, 20 , stdin);

    printf("Enter your age: ""\n");
    scanf ("%d", &age);

    printf("Your name is %s and You are %d years old", name , age);

    return 0;

}