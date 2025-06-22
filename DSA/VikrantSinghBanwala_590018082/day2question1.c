#include<stdio.h>
int sumeven(int nums[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(nums[i]%2==0){
            sum+=nums[i];
        }
    }
    return sum;
}
int main(){
    int nums[]={1,2,3,4,5};
    int n=sizeof(nums)/sizeof(nums[0]);
    int result=sumeven(nums,n);
    printf("Sum of even numbers: %d\n",result);
    return 0;
}