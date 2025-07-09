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

    char no_space[n + 1];
    int j = 0;
    for (size_t i = 0; str[i] != '\0'; i++) 
    {
        if (!isspace((unsigned char)str[i])) 
        {
            no_space[j++] = str[i];
        }
    }
    no_space[j] = '\0';

    size_t start = 0, end = len;
    while (start < len && isspace((unsigned char)str[start])) start++;
    while (end > start && isspace((unsigned char)str[end-1])) end--;
    char trimmed[n + 1];
    strncpy(trimmed, str + start, end - start);
    trimmed[end - start] = '\0';

    char single_space[n + 1];
    int k = 0, space_flag = 0;
    size_t i = start;
    while (i < end) 
    {
        if (!isspace((unsigned char)str[i])) 
        {
            single_space[k++] = str[i];
            space_flag = 0;
        } 
        else 
        {
            if (!space_flag) 
            {
                single_space[k++] = ' ';
                space_flag = 1;
            }
        }
        i++;
    }
    if (k > 0 && single_space[k-1] == ' ') k--;
    single_space[k] = '\0';

    printf("Remove all: \"%s\", Trim: \"%s\", Single spaces: \"%s\"\n", no_space, trimmed, single_space);
    return 0;
}