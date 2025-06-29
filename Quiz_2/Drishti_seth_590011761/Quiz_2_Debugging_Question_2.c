#include <stdio.h>
#include <string.h>

int first_non_repeating(const char *s) {
    int count[256] = {0};
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        count[(unsigned char)s[i]]++;
    }

    for (int i = 0; i < len; i++) {
        if (count[(unsigned char)s[i]] == 1) {
            return i;
        }
    }

    return -1;
}

int main() {
    const char *test = "aabbcde";
    int index = first_non_repeating(test);
    if (index != -1) {
        printf("First non-repeating character is '%c' at index %d\n", test[index], index);
    } else {
        printf("No non-repeating character found\n");
    }
    return 0;
}
