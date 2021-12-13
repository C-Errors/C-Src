#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union empinfo{
    char name[20];
    char depname[20];
    int age;
};

int main()
{
    union empinfo emp1;
    emp1.name;
    emp1.depname;
    emp1.age;

    printf("\nEnter 1st Employee name: ");
    scanf("%s", &emp1.name);

    printf("\n==================================\n");
    printf("1st Employee name = %s" , emp1.name);\
    printf("\n==================================\n\n");

    printf("Enter 1st Employee dep name: ");
    scanf("%s", &emp1.depname);

    printf("\n==================================\n");
    printf("1st Employee dept name = %s" , emp1.depname);
    printf("\n==================================\n\n");

    printf("Enter 1st Employee age: ");
    scanf("%d", &emp1.age);

    printf("\n==================================\n");
    printf("1st Employee age = %d" , emp1.age);
    printf("\n==================================\n\n");

    union empinfo emp2;
    emp2.name;
    emp2.depname;
    emp2.age;

    printf("\nEnter 2nd Employee name: ");
    scanf("%s", &emp2.name);

    printf("\n==================================\n");
    printf("2nd Employee name = %s" , emp2.name);
    printf("\n==================================\n\n");

    printf("Enter 2nd Employee dep name: ");
    scanf("%s", &emp2.depname);

    printf("\n==================================\n");
    printf("2nd Employee dept name = %s" , emp2.depname);
    printf("\n==================================\n\n");

    printf("Enter 2nd Employee age: ");
    scanf("%d", &emp1.age);

    printf("\n==================================\n");
    printf("2nd Employee age = %d" , emp2.age);
    printf("\n==================================\n\n");

    return 0; 
}