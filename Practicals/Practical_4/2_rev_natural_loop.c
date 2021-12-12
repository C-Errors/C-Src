#include <stdio.h>  
   
int main() {  
    int counter, num;  

    printf("Enter a Number: ");  
    scanf("%d", &num);  
   
    printf("\nNumbers form %d to 1\n", num);  

    counter = num;
    do {  
        printf("%d ", counter);  
        counter--;
    } while(counter > 0);
     
    return 0;  
} 
