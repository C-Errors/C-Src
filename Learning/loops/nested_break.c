#include <stdio.h>

int main(){
    int i , j;
    for(i=1;i<=5;i++)
    {
        printf("We are in the outer loop:- %d\n",i);
        for(j=1;j<=3;j++)
        {
            if(j==2)
            {
                continue;  //or use break instead of continue
            }
            printf("We are in the inner loop:- %d\n", j);
        }
    }
    return 0;
}