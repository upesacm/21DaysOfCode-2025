#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    char target;
    int count = 0;

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    printf("Enter a character to count: ");
    scanf("%c", &target);

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == target) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
