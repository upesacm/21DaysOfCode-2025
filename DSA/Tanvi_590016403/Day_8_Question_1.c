#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Define a structure to hold all string-related data
struct StringData {
    char original[100];
    char uppercase[100];
    char lowercase[100];
    char reversed[100];
    int length;
};

// Function to calculate length and convert to upper/lower
void processString(struct StringData *data) {
    data->length = strlen(data->original);
    
    for (int i = 0; data->original[i] != '\0'; i++) {
        data->uppercase[i] = toupper(data->original[i]);
        data->lowercase[i] = tolower(data->original[i]);
    }

    data->uppercase[data->length] = '\0';
    data->lowercase[data->length] = '\0';
}

// Function to count a specific character (case-sensitive)
int countCharacter(const char *str, char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }
    return count;
}

// Function to reverse the string
void reverseString(struct StringData *data) {
    int len = data->length;
    for (int i = 0; i < len; i++) {
        data->reversed[i] = data->original[len - 1 - i];
    }
    data->reversed[len] = '\0';
}

// Main function
int main() {
    struct StringData strData;
    char targetChar;

    // Input string
    printf("Enter a string: ");
    fgets(strData.original, sizeof(strData.original), stdin);

    // Remove newline character if present
    size_t ln = strlen(strData.original);
    if (strData.original[ln - 1] == '\n')
        strData.original[ln - 1] = '\0';

    // Process string
    processString(&strData);
    reverseString(&strData);

    // Print string basics
    printf("Length: %d\n", strData.length);
    printf("Original: \"%s\"\n", strData.original);
    printf("Uppercase: \"%s\"\n", strData.uppercase);
    printf("Lowercase: \"%s\"\n", strData.lowercase);
    printf("Reversed: \"%s\"\n", strData.reversed);

    // Character count
    printf("Enter a character to count: ");
    scanf(" %c", &targetChar);
    int count = countCharacter(strData.original, targetChar);
    printf("Character '%c' occurs %d time(s) in \"%s\"\n", targetChar, count, strData.original);

    return 0;
}
