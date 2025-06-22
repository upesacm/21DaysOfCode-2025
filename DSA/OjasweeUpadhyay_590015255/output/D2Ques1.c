#include<stdio.h>
int evensum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }
    }
    return sum;
}
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int total = evensum(arr, n);
    printf("Sum of even elements in the array: %d\n", total);
    return 0;
}