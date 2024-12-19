//Program6 

#include <stdio.h>
#include <string.h>
#include <time.h>

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

    srand(time(0));
    for(i = 0; i < len - 1; i++)
    {
        int j = i + rand() % (len - i); // Select a random index
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Scrambled String: %s\n", str);

    return 0;
}
