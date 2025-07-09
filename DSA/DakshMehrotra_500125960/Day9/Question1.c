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

    if (str[0] == '\0') 
    {
        printf("Empty input is a palindrome\n");
        return 0;
    }

    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n') 
    {
        str[len-1] = '\0';
        len--;
    } 
    else if (len == n) 
    {
        clear_input_buffer();
    }

    size_t i = 0, j = len - 1;
    int is_palindrome = 1;

    while (i < j) 
    {        
        if (i < j) 
        {
            if (tolower((unsigned char)str[i]) != tolower((unsigned char)str[j])) 
            {
                is_palindrome = 0;
                break;
            }
            i++;
            j--;
        }
    }

    if (is_palindrome) 
    {
        printf("\"%s\" is a palindrome\n", str[0] ? str : "");
    } 
    else 
    {
        printf("\"%s\" is not a palindrome\n", str[0] ? str : "");
    }

    return 0;
}