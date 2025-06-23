#include <stdio.h>
#include <string.h>

char string[100];
char upper[100];
char lower[100];
int size;

int main(){
    printf("Enter the string (Less than 100 characters ) : ");
    fgets(string, 100, stdin);
    fflush(stdin);
    if (string[strlen(string) - 1] == '\n') {
    string[strlen(string) - 1] = '\0';
    }
    size = strlen(string);
    printf("Length : %d, ", size);
    printf("Original string : %s, ", string);
    for(int i = 0; i < size; i++){
        if(string[i] >= 'a' && string[i] <= 'z'){
            upper[i] = string[i] - 32;
        }
        else{
            upper[i] = string[i];
        }
    }
    upper[size] = '\0';
    printf("Upper : %s, ", upper);

    for(int i = 0; i < size; i++){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            lower[i] = string[i] + 32;
        }
        else{
            lower[i] = string[i];
        }
    }
    lower[size] = '\0';
    printf("Lower : %s\n", lower);
}

