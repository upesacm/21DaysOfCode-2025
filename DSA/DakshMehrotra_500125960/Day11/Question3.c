#include <stdio.h>
#include <string.h>

void clear_input_buffer() 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int countpalindromes(const char* s, int left, int right) 
{
    int count = 0;
    int len = strlen(s);
    while (left >= 0 && right < len && s[left] == s[right]) 
    {
        count++;
        left--;
        right++;
    }
    return count;
}

int main() 
{
    int n;
    printf("Enter size of string: ");
    if (scanf("%d", &n) != 1 || n < 0) 
    {
        printf("Invalid size.\n");
        return 1;
    }
    clear_input_buffer();

    if (n == 0) 
    {
        printf("Total palindromic substrings: 0\n");
        return 0;
    }

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
        printf("Total palindromic substrings: 0\n");
        return 0;
    }

    int total = 0;
    for (int i = 0; str[i]; i++) 
    {
        total += countpalindromes(str, i, i);
        total += countpalindromes(str, i, i+1);
    }

    printf("Total palindromic substrings: %d\n", total);
    return 0;
}