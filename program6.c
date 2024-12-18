//Program6 

#include <stdio.h>
#include <string.h>

int main()
{
    char str[31]; 
    int i, len, vowel, consonant;

  
    printf("Enter any string: ");
    gets(str);

    vowel = 0;
    consonant = 0;
    len = strlen(str);

    for(i=0; i<len; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            switch(str[i])
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    vowel++;
                    break;
                    
                default:
                    consonant++;
            }
        }
    }

    printf("Number of Vowels = %d\n", vowel);
    printf("Number of Consonants = %d\n", consonant);

    return 0;
}