#include <stdio.h>

void main(){
    int i, j, rows, k, q = 1 , space;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    //First method 

    for(i=rows;i>=1;i--){
        for (j=1;j<=i-1; ++j)
        {
            printf(" ");
        }
        for(k=1;k<=q;k++)
        {
            printf("*");
        }
        printf("\n");
        q++;
    }

    //Second method 
    
    for(i=1;i<=rows;i++){
        for(space = 1; space<=(rows-i); space++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    };
}