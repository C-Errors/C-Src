#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;
    int cnt;
    float minTemperature[10];
    float maxTemperature[10];

    printf("\n\n======================================\n\t\t UwU\n======================================\n");

    printf("Enter City Count : ");
    scanf("%d",&cnt);

    printf("\n");

    for(i=0;i<=cnt-1;i++){
    printf("Enter the Minimum temp for City %d: ",i+1);
    scanf("%f" , &minTemperature[i]);
    }

    printf("\n");

    for(j=0;j<=cnt-1;j++){
    printf("Enter the Maximum temp for City %d: ",j+1);
    scanf("%f" , &maxTemperature[j]);
    }

    printf("\n");

    printf("======================================\n  CITY   --    MIN\t||\tMAX\n======================================\n");
    for(i=0,j=0;i<=cnt-1,j<=cnt-1;i++,j++)
    {
        printf("CITY [%d] --   %.2f\t||\t%.2f\n", i , minTemperature[i],maxTemperature[j]);
    }
    printf("======================================\n\n");

    printf("\n");

    char Test[] = "Test work";

    // // minTemperature[0] = 20.8;   //initialising of an array
    // // minTemperature[1] = 21.8;
    // // minTemperature[2] = 22.8;
    // // minTemperature[3] = 23.8;
    // // minTemperature[4] = 24.8;

    // for(i=0;i<=10;i++)
    // {
    //     printf("Value of MinTemperature [%d] = %.2f\n", i , minTemperature[i]);
    // }

    // // printf("Value of Mintemperature[0] = %.2f\n", minTemperature[0]);
    // // printf("Value of Mintemperature[1] = %.2f\n", minTemperature[1]);
    // // printf("Value of Mintemperature[2] = %.2f\n", minTemperature[2]);

    // for(j=0;j<=10;j++){
    // printf("Enter the Maximum temperature for City %d: ",j+1);
    // scanf("%f" , &maxTemperature[j]);
    // }

    // printf("\n");

    // for(j=0;j<=10;j++)
    // {
    //     printf("Value of MaxTemperature [%d] = %.2f\n", j , maxTemperature[j]);
    // }
    
    // printf("\n");

    // {
    //     for(i=0;i<=10;i++)
    //     {
    //         printf("City [%d] = %.2f\n", i , minTemperature[i]);
    //     }
    //     for(j=0;j<=10;j++)
    //     {
    //         printf("Max City [%d] = %.2f\n", j , maxTemperature[j]);
    //     }

    //     for(i=0,j=0;i<=10,j<=10;i++,j++)
    //     {
    //         printf("CITY [%d] -- %.2f\t||\t%.2f\n", i , minTemperature[i],maxTemperature[j]);
    //     }
    // }
    
    return 0;
}