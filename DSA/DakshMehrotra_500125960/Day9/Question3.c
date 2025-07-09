#include <stdio.h>
#include <string.h>

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

    int freq[256] = {0};
    for (size_t i = 0; str[i] != '\0'; i++) 
    {
        freq[(unsigned char)str[i]]++;
    }

    int found = 0;
    for (size_t i = 0; str[i] != '\0'; i++) 
    {
        if (freq[(unsigned char)str[i]] == 1) 
        {
            printf("'%c' is the first character that appears only once.\n", str[i]);
            found = 1;
            break;
        }
    }
    if (!found) 
    {
        printf("No unique character found.\n");
    }
    return 0;
}