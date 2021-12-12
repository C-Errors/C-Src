#include <stdio.h>
#include <stdlib.h>

char equal[] = "All the numbers are same";
int chill (int num1 , int num2, int num3) {
    int result;

    if(num1 >= num2 && num1 >= num3){
        result = num1;
    } else if (num2 >= num1 && num2 >= num3){
        result = num2;
    }else {
        result = num3;
    }

    return result;

}

int main(){
    
    printf(" %d", chill(10 , 20 , 30));
    return 0;

}