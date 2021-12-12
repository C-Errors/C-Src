#include<stdio.h>
#include <stdlib.h>

int main(){

    char color[20];
    char pluralNoun[20];
    char celebrityA[20];
    char celebrityB[20];

    printf("Enter a color: ");
    scanf("%s", color);

    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);

    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityA , celebrityB);

    printf("Roses are %s\n", color );
    printf("They are %s\n", pluralNoun);
    printf("I love %s %s\n", celebrityA , celebrityB);

    return 0;

}