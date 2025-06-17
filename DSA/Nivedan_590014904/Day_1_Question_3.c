#include<stdio.h>
void findsum(int arr[],int n){
int i=0 , sum=0;
for(i=0; i<n ;i++){
sum = arr[i] + sum;
}
printf("The Sum of the array is %d",sum);
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
 findsum(arr,n);
}
