#include <stdio.h>

void sortc(int arr[], int n){
    int low=0, mid=0, high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            int temp=arr[low];
            arr[low]=arr[mid];
            arr[mid]=temp;
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            int temp=arr[mid];
            arr[mid]=arr[high];
            arr[high]=temp;
            high--;
        }
    }
}

void output(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    sortc(arr,  n);
    printf("");
    output(arr, n);
    return 0;
}
