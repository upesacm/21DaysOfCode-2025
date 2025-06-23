#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[1000];
    char upper[1000], lower[1000];
    int length, i;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';
    
    length = strlen(input);

    for (i = 0; i < length; i++) {
        upper[i] = toupper(input[i]);
        lower[i] = tolower(input[i]);
    }
    upper[length] = '\0';
    lower[length] = '\0';

    printf("Length: %d, Original: \"%s\", Uppercase: \"%s\", Lowercase: \"%s\"\n", length, input, upper, lower);

    return 0;
}
