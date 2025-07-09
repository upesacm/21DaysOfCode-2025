#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter size of string: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }
    getchar();

    char str[n + 1];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }

    char ch;
    printf("Please enter the character you'd like to count (only the first character will be considered; note that spaces or newlines will not be accepted): ");
    ch = getchar();

    int count = 0;
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}