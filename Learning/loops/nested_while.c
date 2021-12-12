#include <stdio.h>

void main(){
    int i, j;
    i = 1;

    while(i<=5){
        printf("Interval = %d\n", i);
        i++;
        j = 1;

        while(j<=5){
            printf("J = %d, Hello world\n", j);
            j++;
        }
    }
}