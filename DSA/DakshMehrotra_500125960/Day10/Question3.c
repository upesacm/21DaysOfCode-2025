#include <stdio.h>
#include <string.h>
#include <ctype.h>

int are_anagrams(const char *s1, const char *s2) 
{
    int freq1[26] = {0}, freq2[26] = {0};

    for (size_t i = 0; s1[i] != '\0'; i++) 
    {
        if (isalpha((unsigned char)s1[i])) 
        {
            freq1[tolower((unsigned char)s1[i]) - 'a']++;
        }
    }
    for (size_t i = 0; s2[i] != '\0'; i++) 
    {
        if (isalpha((unsigned char)s2[i])) 
        {
            freq2[tolower((unsigned char)s2[i]) - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) 
    {
        if (freq1[i] != freq2[i])
            return 0;
    }
    return 1;
}

int main() 
{
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

    if (are_anagrams(str1, str2))
        printf("True. The strings are anagrams.\n");
    else
        printf("False. The strings are not anagrams.\n");

    return 0;
}