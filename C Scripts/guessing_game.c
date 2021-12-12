#include<stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 5;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGueesses = 0;

    printf("You have %d guesses\n", guessLimit);
    printf("Begin the game\n");
    while(guess != secretNumber && outOfGueesses == 0){
        if(guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGueesses = 1;
        }
    };
    if(outOfGueesses == 1){
        printf("You are out of guesses");
    } else {
        printf("You win, You got the number right!");
    }
    return 0;
}