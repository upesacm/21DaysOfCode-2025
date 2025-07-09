#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    int size1, size2;
    printf("Enter size of String1: ");
    scanf("%d", &size1);
    printf("Enter size of String2: ");
    scanf("%d", &size2);

    if (size1 < 0 || size2 < 0) 
    {
        printf("Invalid size. Size must be >= 0.\n");
        return 1;
    }

    char *s1 = (char *)malloc((size1 + 1) * sizeof(char));
    char *s2 = (char *)malloc((size2 + 1) * sizeof(char));

    if (!s1 || !s2) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter String1: ");
    scanf("%s", s1);
    printf("Enter String2: ");
    scanf("%s", s2);

    if (strlen(s1) != size1 || strlen(s2) != size2) 
    {
        printf("Input string length does not match the given size.\n");
        free(s1);
        free(s2);
        return 1;
    }

    if (size1 != size2) 
    {
        printf("%s is not a rotation of %s\n", s2, s1);
        free(s1);
        free(s2);
        return 0;
    }

    char *concat = (char *)malloc((2 * size1 + 1) * sizeof(char));
    if (!concat) 
    {
        printf("Memory allocation failed.\n");
        free(s1);
        free(s2);
        return 1;
    }
    strcpy(concat, s1);
    strcat(concat, s1);

    if (strstr(concat, s2) != NULL) 
    {
        printf("%s is a rotation of %s\n", s2, s1);
    } 
    else 
    {
        printf("%s is not a rotation of %s\n", s2, s1);
    }

    free(s1);
    free(s2);
    free(concat);
    return 0;
}