#include <stdio.h>
#include <conio.h>

void clrscr(void);

int perfect(int);
int main(){
        int num,s;
        void clrscr();

        printf("Enter an integer number: ");
        scanf("%d",&num);

        s = perfect(num);
        if(s == num)
        printf("\nThe given number %d is a perfect number",num);
        else
        printf("\nThe given number %d is not a perfect number",num);
        return 0;
        }

int perfect(int number){
        int a=1, sum=0;
        while(a < number){
        if(number % a == 0)
        sum=sum+a;
        a++;
        }
        return(sum);
}