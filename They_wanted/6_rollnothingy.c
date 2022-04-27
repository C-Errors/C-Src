#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll;
    float percent;
};

int main()
{
    struct Student student[3];
    int i = 0, number;
    for (i = 0; i < 3; i++)
    student[i].percent;
    student[i].roll;
    student[i].name;

    printf("\nWelcome\n");
    for (i = 0; i < 3; i++)
    {
        printf("Enter student name: ");
        scanf("%s", &student[i].name);

        printf("Enter student roll no: ");
        scanf("%d", &student[i].roll);

        printf("Enter student percentage: ");
        scanf("%f", &student[i].percent);

        printf("\nStudent name: %s\nStudent roll no: %d\nStudent Percentage: %.2f %%\n", student[i].name, student[i].roll, student[i].percent);

        printf("\n");
    }
    printf("\nCheck By Roll No\n");

    printf("Enter a Roll No: ");
    scanf("%d", &number);

    if (number == student[1].roll)
    {
        printf("\nStudent with %d as roll no exists \n", number);
        printf("\nHis data\n\n");

        printf("\nStudent name: %s\nStudent roll no: %d\nStudent Percentage: %.2f %%\n", student[1].name, student[1].roll, student[1].percent);
    }
    else if (number == student[2].roll)
    {
        printf("\nStudent with %d as roll no exists \n", number);
        printf("\nHis data\n");

        printf("\nStudent name: %s\nStudent roll no: %d\nStudent Percentage: %.2f %%\n", student[2].name, student[2].roll, student[2].percent);
    }
    else if (number == student[3].roll)
    {
        printf("\nStudent with %d as roll no exists \n", number);
        printf("\nHis data\n\n");

        printf("\nStudent name: %s\nStudent roll no: %d\nStudent Percentage: %.2f %%\n", student[3].name, student[3].roll, student[3].percent);
    }
    else{
        printf("Stdent with that roll no does not exists");
    }

    return 0;
}