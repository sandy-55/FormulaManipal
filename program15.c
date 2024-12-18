//program15

#include <stdio.h>
#include <string.h>

void compressString(char *str, int index, int count, char *result, int *resIndex) 
{
    if (str[index] == '\0') 
    {
        if (count > 0)
            *resIndex += sprintf(result + *resIndex, "%d", count);
        return;
    }

    if (str[index] == str[index + 1]) 
    {
        compressString(str, index + 1, count + 1, result, resIndex);
    } else 
    {
        result[(*resIndex)++] = str[index];
        if (count > 1)
        {
            *resIndex += sprintf(result + *resIndex, "%d", count);
        }
        compressString(str, index + 1, 1, result, resIndex);
    }
}

int main() 
{
    char str[100], result[200];
    int resIndex = 0;

    printf("Enter the string to compress: ");
    scanf("%s", str);

    compressString(str, 0, 1, result, &resIndex);
    result[resIndex] = '\0';

    printf("Compressed string: %s\n", result);

    return 0;
}
