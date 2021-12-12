#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy( student1.name, "Criz");
    strcpy( student1.major , "Programming");

    struct Student student2;
    student2.age = 10;
    student2.gpa = 4.5;
    strcpy( student2.name, "Syntax");
    strcpy( student2.major , "Finance");

    printf("\n%s , %d , %s , %.2lf\n", student1.name, student1.age, student1.major , student1.gpa);
    printf("%s , %d , %s , %.2lf\n\n", student2.name, student2.age, student2.major , student2.gpa);

    return 0; 
}