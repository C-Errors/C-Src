#include <stdio.h>

void main(){
    int i, rows;

    for(i=1;i<=3;i++){
            printf("*****\n");
    };

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i=1;i<=rows;i++){
        if(i%2!=0){
            printf("*****\n");
        }
        else{
            printf("@@@@@\n");
        }
    };
    
    printf("\n");
    for(i=1;i<=rows;i++){
        if(i%2!=0){
            printf("*@*@*\n");
        }
        else{
            printf("@*@*@\n");
        }
    };

    printf("\n");
    for(i=1;i<=rows;i++){
        if(i%2!=0){
            printf("*");
        }
        else{
            printf("@");
        }
    }

}