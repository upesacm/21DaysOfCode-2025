#include<stdio.h>
int sumeven(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sum=sum+arr[i];
        }
    }
    return sum;
}
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int sumeven = sumeven(arr, n);
    printf("Sum of even elements in the array: %d\n", sumeven);
    return 0;
}