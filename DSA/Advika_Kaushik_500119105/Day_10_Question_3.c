#include<stdio.h>
int i, j, len, lenj;
char s[100], s1[100];
int main() {
    printf("Enter a string: \n");
    scanf("%s", &s);

    printf("Enter the second string: \n");
    scanf("%s", &s1);

    for(i=0; s[i]; i++){
        len++;
    }

    for(j=0; s1[j]; j++){
        lenj++;
    }

    for(i=0; i<len; i++){
        for(j=0; j<lenj; j++){
            if(s[i]==s1[j]){
                break;
            }
        }
    }

    if(len==lenj){
        printf("The strings are anagram");
    }
    else{
        printf("the strings are not an anagram");
    }

    return 0;
}
