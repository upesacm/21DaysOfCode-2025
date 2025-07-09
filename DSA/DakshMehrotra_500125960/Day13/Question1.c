#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    int size;
    printf("Enter size of string: ");
    scanf("%d", &size);

    if (size <= 0) 
    {
        printf("Word count: 0\nLongest word: \"\"\n");
        return 0;
    }

    char str[size + 2];
    getchar();
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    int word_count = 0, max_len = 0, curr_len = 0;
    char longest[101] = "", curr_word[101] = "";
    int i = 0, j = 0;

    while (str[i] != '\0') 
    {
        if (!isspace(str[i]) && str[i] != '\n') 
        {
            curr_word[j++] = str[i];
            curr_len++;
        } 
        else 
        {
            if (curr_len > 0) 
            {
                curr_word[j] = '\0';
                word_count++;
                if (curr_len > max_len) 
                {
                    max_len = curr_len;
                    strcpy(longest, curr_word);
                }
                curr_len = 0;
                j = 0;
            }
        }
        i++;
    }
    if (curr_len > 0) 
    {
        curr_word[j] = '\0';
        word_count++;
        if (curr_len > max_len) 
        {
            max_len = curr_len;
            strcpy(longest, curr_word);
        }
    }

    printf("Word count: %d\n", word_count);
    printf("Longest word: \"%s\"\n", longest);

    return 0;
}