#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int* nums,int numsSize){
    for(int i=0;i<numsSize/2;i++){
        if(nums[i]!=nums[numsSize-1-i]){
            return false;
        }
    }
    return true;
}
int main(){
    int nums1[]={1,2,3,2,1};
    int size1=sizeof(nums1)/sizeof(nums1[0]);
    printf("Output: %s\n",isPalindrome(nums1,size1)?"true":"false");
    int nums2[]={1,2,3,4};
    int size2=sizeof(nums2)/sizeof(nums2[0]);
    printf("Output:%s\n",isPalindrome(nums2,size2)?"true":"false");
    return 0;
}