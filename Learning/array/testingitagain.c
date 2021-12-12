#include<stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    float minTemperature[10];
    float maxTemperature[10];  //Creation , declaration of an array

    for(i=0;i<=4;i++){
    printf("Enter the minimum temperature for City %d: ",i+1);
    scanf("%f" , &minTemperature[i]);
    }

    printf("\n");

    // minTemperature[0] = 20.8;   //initialising of an array
    // minTemperature[1] = 21.8;
    // minTemperature[2] = 22.8;
    // minTemperature[3] = 23.8;
    // minTemperature[4] = 24.8;

    for(i=0;i<=4;i++)
    {
        printf("Value of MinTemperature [%d] = %.2f\n", i , minTemperature[i]);
    }

    // printf("Value of Mintemperature[0] = %.2f\n", minTemperature[0]);
    // printf("Value of Mintemperature[1] = %.2f\n", minTemperature[1]);
    // printf("Value of Mintemperature[2] = %.2f\n", minTemperature[2]);
    
    return 0;
}