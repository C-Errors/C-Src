#include <stdio.h>
#include <conio.h>
void clrscr(void);

int simple(float P , float N , float R)
{
    float answer = (P * N * R) / 100;
    return answer;
}
void main()
{
    void clrscr();
    float answer;

    float P , N , R;
    printf("\nEnter Principal Amount: ");
    scanf("%f", &P);
    printf("\nEnter Period (Term) of Deposit: ");
    scanf("%f", &N );
    printf("\nEnter Rate of Interest: ");
    scanf("%f", &R);

    answer = simple(P , N , R);
    printf("\nSimple Interest = %.2f",answer);
}