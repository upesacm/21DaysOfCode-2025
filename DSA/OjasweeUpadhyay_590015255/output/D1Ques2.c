#include<stdio.h>
void func(int arr[],int n){
    int s=n*(n+1)/2;
    int sum1=0;
    int sq=n*(n+1)*(2*n+1)/6;
    int sum2=0;
    for(int i=0;i<n;i++){
        sum1+=arr[i];
        sum2+=arr[i]*arr[i];
    }
    int x = s - sum1; 
    int y = sq - sum2; 
    int missing = (x + (y / x)) / 2; 
    int repeating = missing - x; 
    printf("Missing number: %d\n", missing);
    printf("Repeating number: %d\n", repeating);

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
    func(arr, n);
    return 0;
}   