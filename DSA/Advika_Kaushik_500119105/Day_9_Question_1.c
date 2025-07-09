#include<stdio.h>
#include<stdbool.h>
char s[100];
int len, i;
int main(){
    printf("Enter the string: ");
    scanf("%s", &s);
    
     for(i = 0; s[i]; i++) {
        len++;
    }


    bool Palindrome=true;

    for(i=0; i<len/2; i++){
        if(s[i]!=s[len-i-1]){
            Palindrome=false;
            break;
        }
    }

    if(Palindrome){
        printf("true\n");
    } 
    else {
        printf("false\n");
    }

    return 0;
}
