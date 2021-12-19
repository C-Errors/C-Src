#include <stdio.h>

void main()

{
    int a,b , ans;
    printf("ENTER 2 NUMBERS FOR ADDITION:");
    scanf("%d%d",&a,&b);

    ans = a + b;
    printf("THE SUM OF %d AND %d is %d",a,b,ans);

    float n,m;
    printf("\nENTER 2 NUMBERS FOR SUBTRACTION:");
    scanf("%f%f",&n,&m);

    printf("THE SUBTRACTION OF %f AND %f is %f",n,m,(n-m));

    float p,q;
    printf("\nENTER 2 NUMBERS FOR MULTIPLICATION:");
    scanf("%f%f",&p,&q);

    printf("THE PRODUCT OF %f AND %f is %f",p,q,(p*q));

    int c,d;
    printf("\nENTER 2 NUMBERS FOR DIVISION:");
    scanf("%d%d",&c,&d);

    printf("THE DIVISION OF %d AND %d is %d",c,d,(c/d));
}