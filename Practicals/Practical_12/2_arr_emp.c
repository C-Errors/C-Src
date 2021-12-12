#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee{
    char name[50];
    int id;
    int salary;
};

int main()
{
    struct Employee employee[3];
    int i = 0;
    for(i=0;i<3;i++)
    employee[i].salary;
    employee[i].id;
    employee[i].name;

    printf("\nBegin lol\n");

    for(i=0;i<3;i++){
        printf("Enter employee name: ");
        scanf("%s", &employee[i].name); 

        printf("Enter employee id: ");
        scanf("%d", &employee[i].id);

        printf("Enter employee salary: ");
        scanf("%d", &employee[i].salary);

        printf("\nEmployee name: %s\nEmployee Id: %d\nEmployee Salary: %d\n", employee[i].name , employee[i].id , employee[i].salary);

        printf("\n");
    }

    return 0; 
}