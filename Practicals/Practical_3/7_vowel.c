#include <stdio.h>

int main()
{
    char vowel;

    printf("Enter any alphabet: ");
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
            printf("User input is not a vowel.\nConsonant");
    }
    return 0;
}