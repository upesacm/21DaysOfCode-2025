#include <stdio.h>
#include <stdbool.h>
bool isStrictlyIncreasing(int* nums,int numsSize){
    for(int i=1;i<numsSize;i++){
        if(nums[i]<=nums[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int nums1[]={1,2,3,4};
    int size1=sizeof(nums1)/sizeof(nums1[0]);
    printf("Output:%s\n",isStrictlyIncreasing(nums1,size1)?"true":"false");
    int nums2[]={1,2,2,3};
    int size2=sizeof(nums2)/sizeof(nums2[0]);
    printf("Output:%s\n",isStrictlyIncreasing(nums2,size2)?"true":"false");
    return 0;
}