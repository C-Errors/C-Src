#include <stdio.h>

int main()
{
    int n, rem, sum = 0 , main;

    printf("Enter any number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        main = n * n;
        
        rem = n % 10;
        sum = sum + rem*rem;
        n = n/10;
    }
    printf("\nSum of Square of Digits = %d", sum);

    printf("\nMain = %d", main);
    return 0;
}