#include <stdio.h>
#include <string.h>
#include <ctype.h>

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
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n')
    {
        str[len-1] = '\0';
        len--;
    }

    char upper[n + 1], lower[n + 1];
    for (size_t i = 0; i <= len; i++) 
    {
        upper[i] = toupper((unsigned char)str[i]);
        lower[i] = tolower((unsigned char)str[i]);
    }

    printf("Length: %zu, Original: \"%s\", Uppercase: \"%s\", Lowercase: \"%s\"\n", len, str, upper, lower);
    return 0;
}