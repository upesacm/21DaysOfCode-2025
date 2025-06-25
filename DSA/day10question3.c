#include <stdio.h>
#include <ctype.h>

int main(void) {
    char s1[200], s2[200];
    int freq[256] = {0};

    fgets(s1, sizeof s1, stdin);
    fgets(s2, sizeof s2, stdin);

    for (int i = 0; s1[i]; i++) {
        unsigned char c = (unsigned char) s1[i];
        if (c != ' ' && c != '\n')
            freq[tolower(c)]++;
    }


    for (int i = 0; s2[i]; i++) {
        unsigned char c = (unsigned char) s2[i];
        if (c != ' ' && c != '\n')
            freq[tolower(c)]--;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams\n");
            return 0;
        }
    }

    printf("Anagrams\n");
    return 0;
}
