#include<stdio.h>
#include <stdlib.h>

int main(){

    const int limit = 50000;
    const int pin = 1234;

    const int limit1 = 20000;
    const int pin1 = 5678;

    int amt;

    printf("Please enter your pin : ");
    scanf("%d", &pin);

    if (pin == 1234 ){

        if (pin!= 1234){
            printf("Incorrect pin, Please try again , You have 2 more chances: ");
            printf("Please enter your pin : ");
            
            scanf("%d", &pin);
        }
        else {
            goto pin; }
        if (pin!= 1234){
            printf("Incorrect pin, Please try again , You have 1 more chances: ");
            printf("Please enter your pin : ");
            scanf("%d", &pin);
        }
        else {
            goto pin;
        }
        if (pin!= 1234){
            printf("Incorrect pin");
        }

    else {
        pin:
        printf("Enter the withdrawal amount : ");
        scanf("%d", &amt);

    if (amt>limit) {
        printf("You cannot withdraw amount greater than 50,000/-");
    goto first;
    }
    else {
        printf("Withdrawal amount sccessful");
        exit(amt<limit);
    }

    {
        first: 
    printf("\nEnter the withdrawal amount : ");
    scanf("%d", &amt);

    if (amt>limit) {
        printf("You cannot withdraw amount greater than 50,000/-");
    goto first;
    }
    else {
        printf("Withdrawal amount sccessful");
        }
        }
        }
    } 

    //Account 2
    
    else if(pin1 == 5678)
    
    {
        if (pin1!= 5678){
            printf("Incorrect pin, Please try again , You have 2 more chances: ");
            printf("Please enter your pin : ");
            scanf("%d", &pin1);
    }
        else {
            goto pin1; }
        if (pin1!= 5678){
            printf("Incorrect pin, Please try again , You have 1 more chances: ");
            printf("Please enter your pin : ");
            scanf("%d", &pin1);
        }
        else {
            goto pin1;
        }
        if (pin1!= 5678){
            printf("Incorrect pin");
        }

    else {
        pin1:
        printf("Enter the withdrawal amount : ");
        scanf("%d", &amt);

    if (amt>limit1) {
        printf("You cannot withdraw amount greater than 20,000/-");
    goto first1;
    }
    else {
        printf("Withdrawal amount sccessful");
        exit(amt<limit1);
    }

    {
        first1: 
    printf("\nEnter the withdrawal amount : ");
    scanf("%d", &amt);

    if (amt>limit1) {
        printf("You cannot withdraw amount greater than 50,000/-");
    goto first1;
    }
    else {
        printf("Withdrawal amount sccessful");
    }
    }
    }
    }
    return 0;

}