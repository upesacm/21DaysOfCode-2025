#include <stdio.h>

int arr[100];
int num;
int size;

int main(){
    printf("Enter the number of elements (Less than 100) : ");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Missing element(s) : ");
    for(int i = 1; i < size; i++){
        int diff = arr[i] - arr[i-1];
        if(diff > 1){
            for(int j = diff - 1; j > 0; j--){
                printf("%d ", arr[i] - j);
            }
        }
    }
}

