//Program10

#include <stdio.h>

void bubbleSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void selectionSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[minIndex]) 
            {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;
    while (low <= high) 
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; 
}

int main()
{
    int n, choice, key;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Choose sorting method:\n1. Bubble Sort\n2. Selection Sort\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) 
    {
        bubbleSort(arr, n);
        printf("Array sorted using Bubble Sort.\n");
    } 
    else if (choice == 2) 
    {
        selectionSort(arr, n);
        printf("Array sorted using Selection Sort.\n");
    } 
    else 
    {
        printf("Invalid choice. Exiting program.\n");
        return 1;
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");


    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);
    if (result != -1)
        printf("Element found at position-%d\n", result+1);
    else
        printf("Element not found.\n");

    return 0;
}
