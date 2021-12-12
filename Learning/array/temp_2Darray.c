#include <stdio.h>
#include <stdlib.h>

int main(){

    int temp[4][3];
    int i , j = 1;
    
    printf("\n-----Program 1-----\n\n");

    for(i=0;i<=3;i++)
    {

        printf("City %d\n",j++);

        printf("Enter Max Temp: ");
        scanf("%d",&temp[i][0]);

        printf("Enter Min Temp ");
        scanf("%d",&temp[i][1]);

        printf("Enter Avg Temp ");
        scanf("%d",&temp[i][2]);

        if(i<3){
            printf("\nInput temp for next city:\n");
        }
        
    }
    if(i>3){

        printf("\n-----Program 2-----\n\n");

        int a[2][2] , o , p;

        a[0][0]=1;
        a[0][1]=2;
        a[1][0]=3;
        a[1][1]=4;

        for(o=0;o<=1;o++) //i=0;
        {
            for(p=0;p<=1;p++) //j=0,1;
            {
                printf("%d\t",a[o][p]); //a[1][0]   [1][1]
            }
            printf("\nEnd Of Program\n");
        }
    }
}