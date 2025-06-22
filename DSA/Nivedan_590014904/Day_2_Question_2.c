#include<stdio.h>
void fun(int arr[], int n ){
    printf("The first element is %d ",arr[0]);
    printf("\nThe last element is %d ",arr[n-1]);
}
int main(){
    int n;
    printf("Enter the Length of the Array: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n", n);
     int arr[n];  
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 fun(arr, n);
}
