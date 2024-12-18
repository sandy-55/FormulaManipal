//Program5

#include <stdio.h>  
int main ()  
{  
    int arr[20], i, j, k, num;  
    
    printf ("Enter the number of elements in an array: ");  
    scanf (" %d", &num);
    
    printf ("Enter the elements of an array:\n");  
    for ( i = 0; i < num; i++)  
    {  
        scanf (" %d", &arr[i]);  
    }  
    

    for ( i = 0; i < num; i ++)  
    {  
        for ( j = i + 1; j < num; j++)  
        {  
            if ( arr[i] == arr[j])  
            {  
                for ( k = j; k < num - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                num--;  
                j--;      
            }  
        }  
    }  
    
    printf ("Array elements after deletion of the duplicate elements:\n");  
    for ( i = 0; i < num; i++)  
    {  
        printf (" %d\t", arr[i]);  
    }  
    return 0;  
}  