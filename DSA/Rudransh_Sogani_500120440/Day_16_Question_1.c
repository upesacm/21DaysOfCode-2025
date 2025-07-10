#include<stdio.h>
int ls(int arr[], int size, int target){
    int i;
    for(i=0; i<size; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int size, target, i;
    printf("Enter the number of elements:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements:\n", size);
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Target:");
    scanf("%d",&target);
    int index=ls(arr, size,target);
    if(index!=-1){
        printf(" %d\n", index);
    }else{
        printf("Element not present in the array\n");
    }
    return 0;
}
