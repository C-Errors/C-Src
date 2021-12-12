#include <stdio.h>

int main()
{
    int phy, chem, bio; 
    float average; 

    printf("Enter marks of three subjects: ");
    scanf("%d%d%d", &phy, &chem, &bio);

    average = (phy + chem + bio) / 3.0;

    printf("Your average is %f\n", average);

    if(average >= 90 && average <= 100)
    {
        printf("Grade A");
    }
    else if(average >= 80)
    {
        printf("Grade B");
    }
    else if(average >= 70)
    {
        printf("Grade C");
    }
    else if(average >= 60)
    {
        printf("Grade D");
    }
    else if(average >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}