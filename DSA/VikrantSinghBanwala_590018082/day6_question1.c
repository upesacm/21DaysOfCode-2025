#include<stdio.h>
int findDuplicate(int* nums,int numsSize){
    int slow=nums[0];
    int fast=nums[0];
    //Finding the intersection point
    do{
        slow=nums[slow];
        fast=nums[nums[fast]];
    } while(slow!=fast);
    //Finding the entrance to the cycle
    slow=nums[0];
    while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
    }
    return slow;
}
int main(){
    int nums1[]={1,3,4,2,2};
    int size1=sizeof(nums1)/sizeof(nums1[0]);
    printf("Output:%d\n",findDuplicate(nums1,size1));
    int nums2[]={3,1,3,4,2};
    int size2=sizeof(nums2)/sizeof(nums2[0]);
    printf("Output:%d\n",findDuplicate(nums2,size2));
    return 0;
}