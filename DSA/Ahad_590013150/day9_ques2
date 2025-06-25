#include <stdio.h>
#include <ctype.h>

void countVowelsConsonants(const char* str, int* vowels, int* consonants) {
    *vowels = *consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                (*vowels)++;
            else
                (*consonants)++;
        }
    }
}

int main() {
    int v, c;

    countVowelsConsonants("hello", &v, &c);
    printf("Vowels: %d, Consonants: %d\n", v, c);

    countVowelsConsonants("Programming", &v, &c);
    printf("Vowels: %d, Consonants: %d\n", v, c);

    countVowelsConsonants("aeiou", &v, &c);
    printf("Vowels: %d, Consonants: %d\n", v, c);

    return 0;
}
