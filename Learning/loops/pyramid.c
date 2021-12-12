#include <stdio.h>

void main(){
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    //Can change 1 and 0 to *

    for(i=1;i<=rows;i++){
        for (j = 1; j <= i; ++j) {

            if(j%2!=0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    };

    for(i=rows;i>=1;i--){
        for (j = 1; j <= i; ++j) 
        {
            if(j%2!=0){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
}