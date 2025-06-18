#include <stdio.h>
#include <stdlib.h>
int uniq(int* nums,int numsSize){
    int first=-1,second=-1;
    for(int i=0;i<numsSize;i++){
        if(nums[i]>first){
            second=first;
            first=nums[i];
        } else if(nums[i]>second && nums[i]<first){
            second=nums[i];
        }
    }
    return (second==-1)?-1:second;
}
int main(){
    int nums1[]={10,20,30,40};
    printf("Output:%d\n",uniq(nums1,sizeof(nums1)/sizeof(nums1[0])));
    int nums2[]={5,5,5};
    printf("Output:%d\n",uniq(nums2,sizeof(nums2)/sizeof(nums2[0])));
    return 0;
}