#include <stdio.h>
#include <string.h>
#include <ctype.h>

int case_insensitive_equal(const char *s1, const char *s2) 
{
    while (*s1 && *s2) 
    {
        if (tolower((unsigned char)*s1) != tolower((unsigned char)*s2))
            return 0;
        s1++;
        s2++;
    }
    return *s1 == *s2;
}

int main() {
    int n1, n2;
    printf("Enter size of first string: ");
    if (scanf("%d", &n1) != 1 || n1 <= 0) 
    {
        printf("Invalid size.\n");
        return 1;
    }
    getchar();

    char str1[n1 + 1];
    printf("Enter first string: ");
    if (fgets(str1, sizeof(str1), stdin) == NULL) 
    {
        printf("Input error.\n");
        return 1;
    }
    size_t len1 = strlen(str1);
    if (len1 > 0 && str1[len1-1] == '\n') str1[len1-1] = '\0';

    printf("Enter size of second string: ");
    if (scanf("%d", &n2) != 1 || n2 <= 0) 
    {
        printf("Invalid size.\n");
        return 1;
    }
    getchar();

    char str2[n2 + 1];
    printf("Enter second string: ");
    if (fgets(str2, sizeof(str2), stdin) == NULL) 
    {
        printf("Input error.\n");
        return 1;
    }
    size_t len2 = strlen(str2);
    if (len2 > 0 && str2[len2-1] == '\n') str2[len2-1] = '\0';

    if (strcmp(str1, str2) == 0)
        printf("Equal, ");
    else
        printf("Not equal, ");

    if (case_insensitive_equal(str1, str2))
        printf("Equal ignoring case, ");
    else
        printf("Not equal ignoring case, ");

    int cmp = strcmp(str1, str2);
    if (cmp == 0)
        printf("Strings are identical\n");
    else if (cmp < 0)
        printf("\"%s\" comes before \"%s\"\n", str1, str2);
    else
        printf("\"%s\" comes before \"%s\"\n", str2, str1);

    return 0;
}