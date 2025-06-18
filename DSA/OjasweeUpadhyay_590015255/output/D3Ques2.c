#include<stdio.h>
#define MAX 10000
int duplicate(int nums[],int n){
    int s[MAX] = {0};
    for(int i=0;i<n;i++){
        if(s[nums[i]]==1)
        return 1;
    s[nums[i]] = 1;
    }
    return 0;
}
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &nums[i]);
    }
    
    if(duplicate(nums, n)){
        printf("The array contains duplicate elements.\n");
    } else {
        printf("The array does not contain duplicate elements.\n");
    }
    
    return 0;
}