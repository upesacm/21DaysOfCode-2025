#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    printf("Enter a character to count: ");
    scanf(" %c", &ch); // space before %c to consume leftover newline

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch)
            count++;
    }

    printf("Output: %d\n", count);
    return 0;
}
