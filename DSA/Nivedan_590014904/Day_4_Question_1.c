#include<stdio.h>
void smol(int n,int arr[]){
   int smol = arr[0];
for(int i=0;i<n;i++){
    if(arr[i]< smol){
        smol = arr[i];
    }
}
printf("The smallest element is %d",smol);
}
int main(){
    int n;
    printf("Eneter the number of element: ");
    scanf("%d",&n);
    int  arr[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
smol(n,arr);
}
