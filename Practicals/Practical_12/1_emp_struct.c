#include <stdio.h>
// #include <stdlib.h>
// #include <string.h>    //not necessary

struct Employee{
    char name[50];
    int id;
    int salary;
};                       //defining struct

int main()
{
    struct Employee employee;
    employee.name;
    employee.id;
    employee.salary;
    
    printf("\n");

    printf("Enter employee name: ");
    scanf("%s", &employee.name);

    printf("Enter employee id: ");
    scanf("%d", &employee.id);

    printf("Enter employee salary: ");
    scanf("%d", &employee.salary);

    printf("\nEmployee name: %s\nEmployee Id: %d\nEmployee Salary: %d\n", employee.name , employee.id , employee.salary);

    return 0; 
}