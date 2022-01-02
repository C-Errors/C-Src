#include <stdio.h>
#include <conio.h>
void clrscr(void);

char ascii(char c)
{
    char answer = printf("ASCII value of %c = %d\n\n", c, c);
    return answer;
}
int sizeofint(int n)
{
    int sizeint = printf("And size of int is %d\n", sizeof(int));
    return sizeint;
}
void main()
{
    void clrscr();
    char answer , c;
    int sizeint , n;

    printf("\nEnter a character: ");
    scanf("%c", &c);
    answer = ascii(c);

    printf("Enter a number: ");
    scanf("%d", &n);
    sizeint = sizeofint(n);

    double num;
    float num1;
    int num3;

    num = 5;
    num1 = 2.0;
    num3 = 5;

    printf("\n\nSIZE OF\n");
    printf("Taking double as 5 , float as 2.0 and integer as 5 we get \n\n");
    printf("Value of double is %lf\n", num);
    printf("And size of double is %lf\n", sizeof(double));

    printf("\nValue of float = %f\n", num1);
    printf("And size of float is %f\n", sizeof(float));


    printf("\nValue of int = %d\n", num3);
    printf("And size of int is %d\n", sizeof(int));

}