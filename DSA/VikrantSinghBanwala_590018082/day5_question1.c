#include <stdio.h>
int singleNumber(int* nums, int numsSize){
    int result=0;
    for(int i=0;i<numsSize;i++){
        result^=nums[i];
    }
    return result;
}
int main(){
    int nums1[]={2,2,1};
    int size1=sizeof(nums1)/sizeof(nums1[0]);
    printf("Output: %d\n",singleNumber(nums1,size1));

    int nums2[]={4,1,2,1,2};
    int size2=sizeof(nums2)/sizeof(nums2[0]);
    printf("Output:%d\n",singleNumber(nums2,size2));
    return 0;
}