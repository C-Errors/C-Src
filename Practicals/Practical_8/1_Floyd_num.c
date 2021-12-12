#include <stdio.h>

int main() {

    printf("\n");
    int rows, i, j, num = 1;

    printf("Enter the num of rows: ");
    scanf("%d", &rows);

    printf("\n\n");

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; ++j) {
            printf("%d ", num);
            ++num;
        }
        printf("\n");
    }

    printf("\n\n");
    
    return 0;
}