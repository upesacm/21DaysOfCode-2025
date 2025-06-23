
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    char upper[1000];
    char lower[1000];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if exists
    str[strcspn(str, "\n")] = 0;

    strcpy(upper, str);
    strcpy(lower, str);

    for (i = 0; upper[i] != '\0'; i++) {
        upper[i] = toupper(upper[i]);
    }

    for (i = 0; lower[i] != '\0'; i++) {
        lower[i] = tolower(lower[i]);
    }

    printf("Length: %lu, Original: "%s", Uppercase: "%s", Lowercase: "%s"\n",
           strlen(str), str, upper, lower);

    return 0;
}
