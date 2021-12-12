#include <stdio.h>
#include <conio.h>
void clrscr(void);

int simple()
{
    float P , N , R;
    printf("\nEnter Principal Amount: ");
    scanf("%f", &P);
    printf("\nEnter Period (Term) of Deposit: ");
    scanf("%f", &N );
    printf("\nEnter Rate of Interest: ");
    scanf("%f", &R);

    return ( (P * N * R) / 100 );
}

void main()
{
    float answer;

    answer = simple();
    printf("\nSimple Interest = %.2f",answer);

}