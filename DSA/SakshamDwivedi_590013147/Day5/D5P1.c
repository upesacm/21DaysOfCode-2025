#include <stdio.h>

int arr[100];
int num;
int size;
int unique[100];

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
    int j = 0;
    for(int i = 0; i < size;){
        if(arr[i] != arr[i+1]){
            unique[j] = arr[i];
            j++;
            i++;
        }
        else{
            while(i < size -1 && arr[i] == arr[i+1]){
                i++;
            }
            i++;
        }
    }
    printf("Unique Element(s): ");
    for(int i = 0; i < j; i++){
        printf("%d ", unique[i]);
    }
}

