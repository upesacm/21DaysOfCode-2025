#include<stdio.h>
void rotate(int* nums,int n,int k){
    k=k%n;
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=nums[i];
    }   
    for(int i=0;i<n;i++){
        nums[i]=temp[i];
    }
}
int main(){
    int n,k;
    printf("Enter the size of the array: ");
    scanf("%d",&n);    
    int nums[n];
    printf("Enter the elements of the array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    printf("Enter the number of steps to rotate: ");
    scanf("%d",&k);    
    rotate(nums,n,k);
    printf("The rotated array is:");
    for(int i=0;i<n;i++){
        printf("%d",nums[i]);
    }
    printf("\n");
    return 0;
}