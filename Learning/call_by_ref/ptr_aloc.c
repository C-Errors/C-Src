#include <stdio.h>
void main()
{
    int num=10;
    float temp=12.79;
    int *ptr=&num;
    float *tp = &temp;

    printf("Value of ptr = %x",ptr);

    printf("\nValue of ptr after ptr++ = %x",++ptr);

    printf("\n\nValue of tp = %x", tp);

    printf("\nValue of tp after tp++ = %x",++tp);
    printf("\n\nValue of tp-- = %x", --tp);
} 