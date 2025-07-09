#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>

typedef struct {
    char *str;
    int length;
    int index;
} String;

char *trim_whitespace(char *str) {
    char *end;
    while (isspace((unsigned char)*str)) str++;
    if (*str == '\0') return str;
    end = str + strlen(str) - 1;
    while (end > str && isspace((unsigned char)*end)) end--;
    end[1] = '\0';
    return str;
}

int compare(const void *a, const void *b) {
    const String *sa = (const String *)a;
    const String *sb = (const String *)b;
    if (sa->length != sb->length) {
        return sa->length - sb->length;
    } else {
        return sa->index - sb->index;
    }
}

int main() {
    int n;
    
    printf("Enter the number of strings: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size. Size must be a positive integer.\n");
        return 1;
    }
    
    getchar();
    
    char **strings = (char **)malloc(n * sizeof(char *));
    if (strings == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        return 1;
    }
    
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        char *buffer = NULL;
        size_t buffer_size = 0;
        ssize_t len;
        printf("String %d: ", i + 1);
        len = getline(&buffer, &buffer_size, stdin);
        if (len == -1) {
            printf("Error reading input.\n");
            free(buffer);
            for (int j = 0; j < i; j++) free(strings[j]);
            free(strings);
            return 1;
        }
        if (len > 0 && buffer[len - 1] == '\n') {
            buffer[len - 1] = '\0';
        }
        char *trimmed = trim_whitespace(buffer);
        strings[i] = strdup(trimmed);
        free(buffer);
        if (strings[i] == NULL) {
            printf("Memory allocation failed for string %d.\n", i + 1);
            for (int j = 0; j < i; j++) free(strings[j]);
            free(strings);
            return 1;
        }
    }
    
    String *info = (String *)malloc(n * sizeof(String));
    if (info == NULL) {
        printf("Memory allocation failed. Exiting.\n");
        for (int i = 0; i < n; i++) free(strings[i]);
        free(strings);
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        info[i].str = strings[i];
        info[i].length = strlen(strings[i]);
        info[i].index = i;
    }
    
    qsort(info, n, sizeof(String), compare);
    
    printf("Sorted strings by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", info[i].str);
    }
    
    for (int i = 0; i < n; i++) {
        free(strings[i]);
    }
    free(strings);
    free(info);
    
    return 0;
}