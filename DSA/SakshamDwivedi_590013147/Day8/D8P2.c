#include <stdio.h>
#include <string.h>

char string[100];
int char_count = 0;
char character;
int size;

int main(){
    printf("Enter a string : ");
    fgets(string, 100, stdin);
    fflush(stdin);
    if (string[strlen(string) - 1] == '\n') {
    string[strlen(string) - 1] = '\0';
    }
    printf("Enter the character to be counted : ");
    scanf("%c", &character);

    size = strlen(string);

    for(int i = 0; i < size; i++){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            string[i] = string[i] + 32;
        }
        else{
            string[i] = string[i];
        }
    }

    if(character >= 'A' && character <= 'Z'){
        character += 32;
    }
    for(int i = 0; i < size; i++){
        if(string[i] == character){
            char_count += 1;
        }
    }

    printf("Character count : %d", char_count);

    return 0;
}
