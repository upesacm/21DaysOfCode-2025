#include <stdio.h>

int arr[100];
int size;

int main(){
    //int arr[10] = {1, 2, 3, 4, 5, 6};
    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("Enter the elements of array : ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int result = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            result += arr[i];
        }
    }

    printf("Sum : %d", result);

    return 0;
}

