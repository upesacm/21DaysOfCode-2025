#include <stdio.h>

int size1;
int size2;
int arr1[100];
int arr2[100];

int main(){
    printf("Enter the size of array 1 : ");
    scanf("%d", &size1);
    printf("Enter the elements of array 1 : ");
    for(int i = 0; i < size1; i++){
        scanf("%d", &arr1[i]);
    }
    for(int i = 0; i < size1 - 1; i++){
        for(int j = 0; j < size1 - i - 1; j++){
            if(arr1[j] > arr1[j+1]){
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }

    printf("Enter the size of array 2 : ");
    scanf("%d", &size2);
    printf("Enter the elements of array 2 : ");
    for(int i = 0; i < size2; i++){
        scanf("%d", &arr2[i]);
    }
    for(int i = 0; i < size2 - 1; i++){
        for(int j = 0; j < size2 - i - 1; j++){
            if(arr2[j] > arr2[j+1]){
                int temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }
    }
    int eq = 1;

    if(size1 != size2){
        eq = 0;
    }
    else{
        for(int i = 0; i < size1; i++){
            if(arr1[i] != arr2[i]){
                eq = 0;
                break;
            }
            else{
                eq = 1;
            }
        }
    }

    if(eq == 0){
        printf("False");
    }
    else{
        printf("True");
    }

    return 0;
}
