#include <stdio.h>

void main()
{  
    int a,b;

    printf("\nENTER 2 NUMBERS: ");
    scanf("%d%d",&a,&b);

    printf("\nVALUES BEFORE SWAPPING A = %d and B = %d",a,b);

    //Let a = 10 , b = 20

    a = a + b;    // 10 + 20 = 30 -a
    b = a - b;    // 30 - 20 = 10 -b Main
    a = a - b;    // 30 - 10 = 20 -a Main

    printf("\nVALUES BEFORE SWAPPING A = %d and B = %d",a,b);
}