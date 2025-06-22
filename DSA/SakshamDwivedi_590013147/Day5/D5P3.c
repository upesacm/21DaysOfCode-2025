#include <stdio.h>

int arr[100];
int num;
int size;
int arr2[100];

int main(){
    printf("Enter the number of elements (Less than 100) : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int j = 0;
    for(int i = size - 1; i >= 0; i--){
        arr2[j] = arr[i];
        j++;
    }

    int pal = 0;

    for(int i = 0; i<size; i++){
        if(arr[i] == arr2[i]){
            pal = 1;
            continue;
        }
        else{
            pal = 0;
            break;
        }
    }
    if(pal == 0){
        printf("False");
    }
    else{
        printf("True");
    }
}

