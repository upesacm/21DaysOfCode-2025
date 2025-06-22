#include<stdio.h>
void single(int arr[],int n){
    int single;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (arr[i]==arr[j]&& i!=j){
                continue;
            }
            else{
                single = arr[i];
            }
        }
        
    }
printf("The singular element is %d",single);
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
single(arr,n);
}
