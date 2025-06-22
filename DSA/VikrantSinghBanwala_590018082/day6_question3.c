#include <stdio.h>
int longestConsecutiveIncreasingSubarray(int* nums,int numsSize){
    if(numsSize==0)return 0;
    int maxLength=1;
    int currentLength=1;
    for(int i=1;i<numsSize;i++){
        if(nums[i]==nums[i-1]+1){
            currentLength++;
        }else{
            if(currentLength>maxLength){
                maxLength=currentLength;
            }
            currentLength=1;
        }
    }
    if(currentLength>maxLength){
        maxLength=currentLength;
    }
    return maxLength;
}
int main(){
    int nums1[]={1,2,2,3,4,1,2,3,4,5};
    int size1=sizeof(nums1)/sizeof(nums1[0]);
    printf("Output:%d\n",longestConsecutiveIncreasingSubarray(nums1,size1));
    int nums2[]={5,4,3,2};
    int size2=sizeof(nums2)/sizeof(nums2[0]);
    printf("Output:%d\n",longestConsecutiveIncreasingSubarray(nums2,size2));
    return 0;
}