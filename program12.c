//Program 12

#include <stdio.h>

void EquiTri(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
}

void StarPyr(int n) 
{
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }
}

int main() 
{
    int n, choice;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("Choose the pattern to print:\n");
    printf("1. Equilateral Triangle\n");
    printf("2. Star Pyramid\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        printf("Equilateral Triangle:\n");
        EquiTri(n);
    } 
    else if (choice == 2) 
    {
        printf("Star Pyramid:\n");
        StarPyr(n);
    } 
    else 
    {
        printf("Invalid choice.\n");
    }

    return 0;
}
