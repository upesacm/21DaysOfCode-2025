#include<stdio.h>
int rmEle(int* nums,int n,int val){
    int newLen=0; 
    for(int i=0;i<n;i++){
        if(nums[i]!=val){
            nums[newLen]=nums[i];
            newLen++;
        }
    }  
    return newLen;
}
int main(){
    int n,val;
    printf("Enter the size of the array: ");
    scanf("%d",&n);  
    int nums[n];
    printf("Enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    printf("Enter the value to remove: ");
    scanf("%d",&val);    
    int newLen=rmEle(nums,n,val);
    printf("The new length of the array after removals is: %d\n",newLen);
    printf("The modified array is:");
    for(int i=0;i<newLen;i++){
        printf("%d",nums[i]);
    }
    printf("\n");
    return 0;
}