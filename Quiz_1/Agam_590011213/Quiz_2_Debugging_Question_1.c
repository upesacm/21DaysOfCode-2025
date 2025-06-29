#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool is_digits_only(const char *s) {
    if (strlen(s) == 0) {
        return false;
    }
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] < '0' || s[i] > '9') {
            return false;
        }
    }
    return true;
}

int main() {
    const char *test1 = "123456";
    const char *test2 = "";
    printf("Test 1: %s\n", is_digits_only(test1) ? "True" : "False");
    printf("Test 2: %s\n", is_digits_only(test2) ? "True" : "False");
    return 0;
}
