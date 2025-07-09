#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void reverse(char *s, int start, int end) 
{
    while (start < end) 
    {
        char t = s[start];
        s[start] = s[end];
        s[end] = t;
        start++;
        end--;
    }
}

int main() 
{
    int size;
    printf("Enter size of string: ");
    scanf("%d", &size);

    if (size <= 0) 
    {
        printf("Output: \"\"\n");
        return 0;
    }

    char str[size + 2];
    getchar();
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') 
    {
        str[length - 1] = '\0';
        length--;
    }

    char *temp = (char *)malloc(length + 1);
    if (temp == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < length; i++) 
    {
        temp[i] = str[length - 1 - i];
    }
    temp[length] = '\0';

    int i = 0;
    while (i < length) 
    {
        while (i < length && isspace((unsigned char)temp[i]))
            i++;
        int word_start = i;
        while (i < length && !isspace((unsigned char)temp[i]))
            i++;
        int word_end = i - 1;
        if (word_start < length)
            reverse(temp, word_start, word_end);
    }

    strcpy(str, temp);
    free(temp);

    printf("Output: \"%s\"\n", str);
    return 0;
}