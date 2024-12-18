//Program7 (Pointers)

#include <stdio.h>

int main() 
{
    int n, temp, arr[31];

    printf("Enter the number of elements of the array:\n");
    scanf("%d", &n);
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    int *ptr = arr;
    
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (*(ptr + j) < *(ptr + i)) 
            {
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp;
            }
        }
    }
    
    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d\t", *(ptr + i));
    }
    printf("\n");
    
    printf("The Second Largest Element in the array: %d\n", arr[n-2]);
    
    return 0;
}