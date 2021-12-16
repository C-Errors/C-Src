#include <stdio.h>
// Before using static variable

void showValue()
{
    static int counter = 1;
    printf("\nYou invoked showValue %d time/s", counter);
    counter++;
}

void main()
{
    showValue();
    showValue();
    showValue();
    printf("\n\n");
}