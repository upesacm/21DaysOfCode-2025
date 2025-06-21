#include <stdio.h>
int size;
int arr[100];
int main(){
    printf("Enter the number of elements (Less than 100) : ");
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
    int i = 0;
    for(i = 0; i < size; i++){
        if(arr[i] == arr[i+1]){
            break;
        }
    }
    printf("REPEATED VALUE : %d", arr[i]);
