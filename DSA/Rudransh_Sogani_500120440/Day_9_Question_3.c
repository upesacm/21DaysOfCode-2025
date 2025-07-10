#include<stdio.h>
char s[100];
int i, len=0, j;
int main() {
    printf("Enter the string: \n");
    scanf("%s", s);

   for(i=0; s[i]; i++){
    len++;
   }

   for(i=0; i<len; i++){
    for(j=0; j<len; j++){
        if(i!=j && s[i]==s[j]){
            break;
        }
    }

    if(j==len){
        printf("the first non-repeating character is: %c", s[i]);

        return 0;
    }
}

printf("-1\n");

return 0;
}

