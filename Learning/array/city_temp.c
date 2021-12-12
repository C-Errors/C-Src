#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;
    float minTemperature[10];
    float maxTemperature[10];  //Creation , declaration of an array

    printf("CITY -- MIN\t||\tMAX");

    for(i=0;i<=10;i++){
    printf("\nMin Temp Values: %d: ",i+1);
    scanf("%f" , &minTemperature[i]);
    }

    for(j=0;j<=10;j++){
    printf("\nMax Temp Values: %d: ",j+1);
    scanf("%f" , &maxTemperature[j]);
    }

    printf("\n");

    for(i=0;i<=10;i++)
    {
        printf("CITY [%d] -- %.2f\n", i+1 , minTemperature[i]);
    }

    return 0;
}