#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
    int size;
    printf("Enter size of String: ");
    scanf("%d", &size);

    if (size < 0) 
    {
        printf("Invalid size. Size must be >= 0.\n");
        return 1;
    }

    char *str = (char *)malloc((size + 1) * sizeof(char));
    if (!str) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter String: ");
    scanf("%s", str);

    if (strlen(str) != size) 
    {
        printf("Input string length does not match the given size.\n");
        free(str);
        return 1;
    }

    char *result = (char *)malloc((2 * size + 1) * sizeof(char));
    if (!result) 
    {
        printf("Memory allocation failed.\n");
        free(str);
        return 1;
    }

    int i = 0, j = 0;
    while (i < size) 
    {
        char current = str[i];
        int count = 1;
        while (i + count < size && str[i + count] == current) 
        {
            count++;
        }
        result[j++] = current;
        if (count > 1) 
        {
            int len = sprintf(result + j, "%d", count);
            j += len;
        }
        i += count;
    }
    result[j] = '\0';

    if (strlen(result) < strlen(str)) 
    {
        printf("Compressed String: %s\n", result);
    } 
    else 
    {
        printf("Compressed String: %s\n", str);
    }

    free(str);
    free(result);
    return 0;
}