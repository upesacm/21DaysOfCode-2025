#include <stdio.h>
#include <string.h>

void clear_input_buffer() 
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() 
{
    int n;
    printf("Enter size of string: ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("Invalid size.\n");
        return 1;
    }
    getchar();

    char str[n + 1];
    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) 
    {
        printf("Input error.\n");
        return 1;
    }

    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n') 
    {
        str[len-1] = '\0';
        len--;
    } 
    else if (len == n) 
    {
        printf("Input exceeds specified size. Please try again.\n");
        clear_input_buffer();
    }

    char reverse[n + 1];
    for (size_t i = 0; i < len; i++) 
    {
        reverse[i] = str[len - 1 - i];
    }
    reverse[len] = '\0';

    printf("Reversed string: \"%s\"\n", reverse);
    return 0;
}