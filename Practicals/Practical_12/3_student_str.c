#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    int id;
    float percent;
};

int main()
{
    struct Student student[3];
    int i = 0;
    for(i=0;i<3;i++)
    student[i].percent;
    student[i].id;
    student[i].name;

    printf("\nBegin lol\n");

    for(i=0;i<3;i++){
        printf("Enter student name: ");
        scanf("%s", &student[i].name); 

        printf("Enter student id: ");
        scanf("%d", &student[i].id);

        printf("Enter student percentage: ");
        scanf("%f", &student[i].percent);

        if(i == 2){
            printf("\nStudent name: %s\nStudent Id: %d\nStudent Percentage: %.2f %%\n", student[i==2].name , student[i==2].id , student[i==2].percent);
        }
        printf("\n");
    }

    return 0; 
}