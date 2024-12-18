//Program9

#include <stdio.h>

int main() 
{
    int matrix[4][4];
    int i, j;
    int totalSum = 0;
    int diagonalSum1 = 0; 
    int diagonalSum2 = 0; 

    printf("Enter the elements of the 4x4 matrix:\n");
    for (i = 0; i < 4; i++) 
    {
        for (j = 0; j < 4; j++) 
        {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe 4x4 matrix is:\n");
    for (i = 0; i < 4; i++) 
    {
        for (j = 0; j < 4; j++) 
        {
            printf("%d\t", matrix[i][j]);
            totalSum += matrix[i][j];
            if (i == j) 
            {
                diagonalSum1 += matrix[i][j]; 
            }
            if (i + j == 3) 
            {
                diagonalSum2 += matrix[i][j]; 
            }
        }
        printf("\n");
    }

    printf("\nThe sum of all elements in the matrix: %d\n", totalSum);
    printf("The sum of the main diagonal: %d\n", diagonalSum1);
    printf("The sum of the secondary diagonal: %d\n", diagonalSum2);

    return 0;
}