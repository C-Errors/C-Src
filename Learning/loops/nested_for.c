#include <stdio.h>

void main(){
    int i, j;
    i = 1;

    for(i-1;i<=5;i++){
        printf("Interval = %d\n", i);
        for(j=1;j<=5;j++){
            printf("J = %d, Hello world\n", j);
        }
    }
}