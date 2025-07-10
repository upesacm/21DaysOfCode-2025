#include<stdio.h>
char s[100];
int i, v, c;
int main() {
    printf("Enter the string: \n");
    scanf("%s", &s);

    if(s[i]>='a' || s[i]<='z'){
    for(i=0; s[i]; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            v++;
    }
    else{
        c++;
    }

    }
    
    }

    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);

    return 0;

}
