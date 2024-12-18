//Program8

#include <stdio.h>

int main() 
{
    int n, i, arr[31];
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n - 1; i += 2) 
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + i + 1);
        *(arr + i + 1) = temp;
    }

    printf("Array after swapping adjacent elements:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}