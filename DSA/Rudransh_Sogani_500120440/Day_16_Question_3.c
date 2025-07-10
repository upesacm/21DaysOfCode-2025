#include<stdio.h>
int max(int arr[], int size){
    int i, max=arr[0];

    for(i=1; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int size, i;
    printf("Enter the number of elements:");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements:\n",size);
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    int maximum=max(arr, size);

    printf("%d",maximum);

    return 0;
}
