#include<stdio.h>
#include<string.h>
void compressString(char *str) {
    int n = strlen(str);
    if (n == 0) return;
    char compressed[2 * n + 1];
    int count = 1, index = 0;
    for (int i = 1; i <= n; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            index += sprintf(compressed + index, "%c%d", str[i - 1], count);
            count = 1;
        }
    }
    if (index >= n) {
        strcpy(str, str);
    } else {
        strcpy(str, compressed);
    }
}
int main() {
    char str1[] = "aabcccccaaa";
    compressString(str1);
    printf("%s\n", str1);
    char str2[] = "abc";
    compressString(str2);
    printf("%s\n", str2);
    char str3[] = "aabbcc";
    compressString(str3);
    printf("%s\n", str3);
    return 0;
}
