#include <stdio.h>

int main()
{
    int i = 1, num, ans = 4;
    int guessLimit = 5;

    printf("Guess the number between 1 and 10");
    printf("\nYou have %d guesses\n", guessLimit);

    for(i=1;i<=5;i++)
    {   
        printf("\nGuess the number: ");
        scanf("%d", &num);

        if(num==ans){
            printf("\nCongrats , you guessed the number correctly");
            break;
        }
        else
        printf("\nSorry , Try again\n");
    }
    if(i==6 && num !=ans)
    printf("You have used all your chances");

    for(i = 1;i<=30;i++)
    {
        if(i%7==0){
            printf("Multiples of 7 died\n");
            continue;
        }
        printf("Value of i = %d\n", i);
    }

    while(i<=30)
    {
        i++;
        if(i%7==0){
            printf("Multiples of 7 died\n");
            continue;
        }
        printf("Value of i = %d\n", i);
    }
    return 0;
}