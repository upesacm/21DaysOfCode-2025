#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() 
{
    int size;
    printf("Enter size of string: ");
    scanf("%d", &size);

    if (size <= 0) 
    {
        printf("Output: true\n");
        return 0;
    }

    char str[size + 2];
    getchar();
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    int freq[256] = {0};
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (!isspace(str[i]) && str[i] != '\n') 
        {
            freq[(unsigned char)tolower(str[i])]++;
        }
    }

    int oddCount = 0;
    for (int i = 0; i < 256; i++) 
    {
        if (freq[i] % 2 != 0) 
        {
            oddCount++;
        }
    }

    if (oddCount <= 1) 
    {
        printf("Output: true\n");
    } 
    else 
    {
        printf("Output: false\n");
    }

    return 0;
}