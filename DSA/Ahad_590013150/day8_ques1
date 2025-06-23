#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    int length = strlen(str);
    char upper[1000], lower[1000];

    // Convert to uppercase and lowercase
    for (int i = 0; i < length; i++) {
        upper[i] = toupper(str[i]);
        lower[i] = tolower(str[i]);
    }
    upper[length] = '\0';
    lower[length] = '\0';

    printf("Length: %d\n", length);
    printf("Original: \"%s\"\n", str);
    printf("Uppercase: \"%s\"\n", upper);
    printf("Lowercase: \"%s\"\n", lower);

    return 0;
}
