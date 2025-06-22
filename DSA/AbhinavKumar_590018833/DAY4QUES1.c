#include <stdio.h>
void printArray(int nums[],int n){
    for(int i=0; i<n;i++){
        printf("%d ",nums[i]);
    }
    printf("\n");
}

int findMinimum(int nums[], int n) {
    int min = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    return min;
}
int main(){
    int nums[]={9,3,4,7,6,1};
    int n=6;
    printArray(nums,n);
    printf("The minimum element is:");
    int a=findMinimum(nums, n);
    printf("%d",a);
  
}