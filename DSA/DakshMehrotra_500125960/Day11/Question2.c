#include <stdio.h>
#include <string.h>

int longestpalindrome(const char* s, int left, int right, int* start) 
{
    int len = strlen(s);
    while (left >= 0 && right < len && s[left] == s[right]) 
    {
        left--;
        right++;
    }
    int palLen = right - left - 1;
    if (palLen > 0) *start = left + 1;
    return palLen;
}

void clear_input_buffer() 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() 
{
    int n;
    printf("Enter size of string: ");
    if (scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Invalid size.\n");
        return 1;
    }
    clear_input_buffer();

    char str[n + 1];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) 
    {
        printf("Input error.\n");
        return 1;
    }
    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n')
        str[len-1] = '\0';

    if (str[0] == '\0') 
    {
        printf("Longest palindromic substring: \"\"\n");
        return 0;
    }

    int maxLen = 1, startIdx = 0;
    for (int i = 0; str[i]; i++) 
    {
        int s1, s2;
        int len1 = longestpalindrome(str, i, i, &s1);
        int len2 = longestpalindrome(str, i, i+1, &s2);
        if (len1 > maxLen) 
        {
            maxLen = len1;
            startIdx = s1;
        }
        if (len2 > maxLen) 
        {
            maxLen = len2;
            startIdx = s2;
        }
    }

    printf("Longest palindromic substring: \"");
    for (int i = startIdx; i < startIdx + maxLen; i++)
        putchar(str[i]);
    printf("\"\n");

    return 0;
}