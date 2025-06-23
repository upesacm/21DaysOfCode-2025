
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char ch;
    int count = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = 0;

    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("Output:\n%d\n", count);

    return 0;
}
