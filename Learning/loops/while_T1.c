#include <stdio.h>

void main()
{
    int start, end , counter;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);
    
    counter = start;

    while(counter < end - 2)
    {
        counter = counter + 2;
        printf("%d\n", counter);
    }
    printf("The above numbers are between %d and %d", start , end);
    // int sum = 0 , counter = 1;

    // while(counter <= 10)
    // {
    //     sum = sum + counter;
    //     counter++;
    // }
    // printf("Sum of numbers from 1 to 10 is: %d\n", sum);
}