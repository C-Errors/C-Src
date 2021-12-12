#include <stdio.h>
#include <stdlib.h>

void main()
{
    int age;

    printf("Enter your age: ");
    scanf ("%d", &age);

    if(age >= 18 && age < 100){
        printf("\nYou are elegible for votings as you are above 18", age);
    } 
    else if (age > 100){
        printf("\nYou are elegible for voting, Plese be carefull", age);
    }
    else if (age < 18 && age > 0){
        int temp = 18 - age;
        printf("\nYou are not elegible for voting , You have to wait for %d years", temp);
    }
    else {
        printf("Wrong Input");
    }

}