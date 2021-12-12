#include <stdio.h>

void simple(float P ,float N, float R)
{
    printf("\nSimple Interest = %.2f",(P * N * R) / 100);
}

void main()
{
    float P , N,  R;

    printf("\nEnter Principal Amount: ");
    scanf("%f", &P);
    printf("\nEnter Period (Term) of Deposit: ");
    scanf("%f", &N );
    printf("\nEnter Rate of Interest: ");
    scanf("%f", &R);

    simple(P , N , R);
}