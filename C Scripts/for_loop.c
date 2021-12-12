#include<stdio.h>
#include <stdlib.h>

int main()
{
    int luckNumbers[] = {10,20,30,40,50};

    int i;
    for(i = 0; i < 5; i++){
        printf("%d\n", luckNumbers[i]); //increments i value that is the array
    }
    return 0;
    
}