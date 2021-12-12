//NESTED LOOPS

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i = 100;
    int pin;
    int limit = 500;

    printf("Enter a pin: ");
    scanf("%d",&pin);

    if(pin == 1234){
        if(i < limit){
            for(i=1; i<=1000; i++){
                break;
                while(i < limit){
                    break;
                }
            }
        }
        else{
        }
    }
    return 0; 
}