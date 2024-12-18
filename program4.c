//Program4 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Opin = 1997;
    int i, pin;
    
    for(i = 1; i < 4; i++)
    {
        printf("Enter Pin: ");
        scanf("%d", &pin);
        
        if(pin == Opin)
        {
            printf("Login Successful!");
        }
        else if(i == 3)
        {
            printf("Login Unsuccessful.\n");
            exit(0);
        }
        
        else 
        {
            printf("Retry Login. %d Attempt/s Available.\n", 3-i);
        }
    }
    
    return 0;
}