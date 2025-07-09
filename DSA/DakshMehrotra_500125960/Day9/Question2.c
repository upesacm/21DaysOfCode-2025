#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    int n;
    printf("Enter size of string: ");
    if (scanf("%d", &n) != 1 || n <= 0) 
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

    int vowels = 0, consonants = 0;
    for (size_t i = 0; str[i] != '\0'; i++) 
    {
        if (isalpha((unsigned char)str[i])) 
        {
            char ch = tolower((unsigned char)str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
            {
                vowels++;
            } 
            else 
            {
                consonants++;
            }
        }
    }

    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
    return 0;
}
