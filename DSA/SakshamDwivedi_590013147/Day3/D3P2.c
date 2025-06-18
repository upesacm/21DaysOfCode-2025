#include <stdio.h>

int arr[100];
int size;
int main(){
    printf("Enter the number of elements (Should be less than 100) : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    int dup = 0;
    for(int i = 0; i < size - 1; i++){
        if(arr[i] == arr[i+1]){
            dup = 1;
            break;
        }
    }
    if(dup == 0){
        printf("False");
    }
    else{
        printf("True");
    }
}
