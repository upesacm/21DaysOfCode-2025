#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    printf("Length: %d\n", length);
    printf("Original: \"%s\"\n", str);

    printf("Uppercase: \"");
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(toupper(str[i]));
    }
    printf("\"\n");

    printf("Lowercase: \"");
    for (int i = 0; str[i] != '\0'; i++) {
        putchar(tolower(str[i]));
    }
    printf("\"\n");

    return 0;
}
