#include<stdio.h>
int main() {
    int n,k,i;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter the elements: \n");
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);

}

printf("Enter the value of k: ");
scanf("%d", &k);
int sum=0;
for(int i=0;i<n;i++){
    int count=0, checked=0;
    for(int j=0; j<i; j++){ 
         if(arr[j] == arr[i]){  
            checked=1;
            break;
    }
}
if(checked)continue;
for(int j=0;j<n;j++){
    if(arr[j]==arr[i]){
        count++;
}
}
if(count==k){
    sum+=arr[i];
}
}
printf("Sum of all distinct elements that appear %d times: %d\n",k,sum);

return 0;
}
