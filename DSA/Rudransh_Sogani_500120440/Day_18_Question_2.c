#include <stdio.h>
void isort(int arr[], int n){
    for(int i=1; i<n; i++){
        int key=arr[i];
        int j;
        for(j=i-1;j>=0 && arr[j]>key;j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
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
    isort(arr, n);
    printf(" ");
    output(arr, n);
    return 0;
}
