#include <stdio.h>
#include <string.h>
#include <ctype.h>

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

    char filtered[n + 1];
    int idx = 0;
    for (int i = 0; str[i]; i++) 
    {
        if (isalnum((unsigned char)str[i])) 
            filtered[idx++] = tolower((unsigned char)str[i]);
    }
    filtered[idx] = '\0';

    int left = 0, right = idx - 1, is_palindrome = 1;
    while (left < right) 
    {
        if (filtered[left] != filtered[right]) 
        {
            is_palindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (is_palindrome) 
        printf("true\n");
    else 
        printf("false\n");

    return 0;
}