#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    char major[50];
    char div[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age;
    student1.gpa;
    student1.div;
    student1.name;
    student1.major;

    printf("Enter students age: ");
    scanf("%d", &student1.age);

    printf("Enter students gpa: ");
    scanf("%lf", &student1.gpa);

    printf("Enter students div: ");
    scanf("%s", &student1.div);

    printf("Enter students name: ");
    scanf("%s", &student1.name);

    printf("Enter students major: ");
    scanf("%s", &student1.major);

    printf("\n%d , %.2lf , %s , %s , %s\n\n", student1.age , student1.gpa , student1.div , student1.name , student1.major);

    struct Student student2;
    student2.age;
    student2.gpa;
    student2.div;
    student2.name;
    student2.major;

    printf("Enter Second students age: ");
    scanf("%d", &student2.age);

    printf("Enter Second students gpa: ");
    scanf("%lf", &student2.gpa);

    printf("Enter Second students div: ");
    scanf("%s", &student2.div);

    printf("Enter Second students name: ");
    scanf("%s", &student2.name);

    printf("Enter Second students major: ");
    scanf("%s", &student2.major);

    printf("\n%d , %.2lf , %s , %s , %s\n", student2.age , student2.gpa , student2.div , student2.name , student2.major);

    printf("\n===============Both values===============\n");
    printf("\n%d , %.2lf , %s , %s , %s\n", student1.age , student1.gpa , student1.div , student1.name , student1.major);
    printf("\n%d , %.2lf , %s , %s , %s", student2.age , student2.gpa , student2.div , student2.name , student2.major);

    return 0; 
}