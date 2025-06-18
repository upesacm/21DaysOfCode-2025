#include<stdio.h>
void evensum(int n,int arr[ ]){
int sum=0;
for(int i=0;i<n;i++){
    if(arr[i] %2 ==0){
    sum = sum + arr[i];
    }
}
printf("%d",sum);
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
    evensum(n,arr);
}
