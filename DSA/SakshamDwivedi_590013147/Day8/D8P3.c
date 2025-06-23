#include <stdio.h>
#include <string.h>

char string[100];
int size;

int main(){
    printf("Enter the string : ");
    fgets(string, 100, stdin);
    fflush(stdin);
    if(string[strlen(string)-1] == '\n'){
        string[strlen(string)-1] = '\0';
    }

    size = strlen(string);

    char* p1 = &string[0];
    char* p2 = &string[size-1];

    for(int i = 0; i < size / 2; i++){
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;

        p1 = &string[i+1];
        p2 = &string[size - i - 2];
    }

    printf("%s", string);
}
