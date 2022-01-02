#include <stdio.h>
#include <conio.h>
void clrscr(void);

int ez()
{
    char vowel;

    printf("\nEnter any alphabet: ");
    scanf("%c", &vowel);

    switch(vowel)
    {
        case 'a':
        case 'A':  
            printf("Vowel");
            break;
        case 'e':
        case 'E':  
            printf("Vowel");
            break;
        case 'i':
        case 'I': 
            printf("Vowel");
            break;
        case 'o':
        case 'O':  
            printf("Vowel");
            break;
        case 'u': 
        case 'U': 
            printf("Vowel");
            break;
        default: 
            printf("\nUser input is not a vowel.\nThus it is a Consonant\n\n");
    }
    return 0;
}

void main()
{
    char answer;

    answer = ez();
}