#include <stdio.h>

int main()
{
    int x , y;

    printf("Enter value of x and y: ");
    scanf("%d%d", &x , &y);

    while(x > y)
    {
        printf("x is bigger");
        break;
    }
    while(x < y)
    {
        printf("y is bigger");
        break;
    }
    while(x == y)
    {
        printf("x = y");
        break;
    }
}