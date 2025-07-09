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

    int seen[256] = {0};
    char *result = (char *)malloc((size + 1) * sizeof(char));
    if (!result) 
    {
        printf("Memory allocation failed.\n");
        free(str);
        return 1;
    }

    int j = 0;
    for (int i = 0; i < size; i++) 
    {
        unsigned char ch = str[i];
        if (!seen[ch]) {
            result[j++] = ch;
            seen[ch] = 1;
        }
    }
    result[j] = '\0';

    printf("String after removing duplicates: %s\n", result);

    free(str);
    free(result);
    return 0;
}