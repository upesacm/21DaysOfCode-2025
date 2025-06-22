#include<stdio.h>
int i, min, n;
int main() {
    printf("Enter the number of elements in the array: \n");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    min=arr[0];

    for(i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }

    printf("The minimum number in the array is: %d\n", min);

    return 0;
}
