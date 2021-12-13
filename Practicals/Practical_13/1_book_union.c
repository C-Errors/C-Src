#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union bookinfo{
    char name[20];
    char author[20];
    int price;
};

int main()
{
    union bookinfo book;
    book.name;
    book.author;
    book.price;

    printf("\nEnter books name: ");
    scanf("%s", &book.name);

    printf("Books name = %s\n\n" , book.name);

    printf("Enter books author: ");
    scanf("%s", &book.author);

    printf("Books author = %s\n\n" , book.author);

    printf("Enter books price: ");
    scanf("%d", &book.price);

    printf("Books price = %d\n\n" , book.price);

    printf("Book name = %s \n Book author = %s \n Book price = %d", book.name , book.author , book.price);

    return 0; 
}