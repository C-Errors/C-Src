#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int N, i;
    int * ptr = arr;

    printf("\nEnter size of array: ");
    scanf("%d", &N);

    printf("Enter elements in array: ");
    for (i = 0; i < N; i++)
    {
        scanf("%d", ptr);
        ptr++;   
    }

    ptr = arr;

    printf("\n==================================\n");
    printf("Array elements: ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", *ptr);

        ptr++;
    }
    printf("\n==================================\n");

    return 0;
}