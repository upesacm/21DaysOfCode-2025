#include<stdio.h>
void fandl(int nums[],int n){
    if (n>0){
        printf("First:%d,Last:%d\n",nums[0],nums[n-1]);
    }
}
int main(){
    int nums[]={1,2,3,4};
    int n=sizeof(nums)/sizeof(nums[0]);
    fandl(nums,n);
    return 0;
}