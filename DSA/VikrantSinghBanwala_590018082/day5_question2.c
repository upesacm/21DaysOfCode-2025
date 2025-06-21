#include <stdio.h>
int missingNumber(int* nums,int numsSize){
    int expectedSum=numsSize*(numsSize+1)/2;
    int actualSum=0;
    for(int i=0;i<numsSize;i++){
        actualSum+=nums[i];
    }
    return expectedSum-actualSum;
}
int main(){
    int nums1[]={3,0,1};
    int size1=sizeof(nums1)/sizeof(nums1[0]);
    printf("Output:%d\n",missingNumber(nums1,size1));
    int nums2[]={0,1};
    int size2=sizeof(nums2)/sizeof(nums2[0]);
    printf("Output:%d\n",missingNumber(nums2,size2));
    return 0;
}