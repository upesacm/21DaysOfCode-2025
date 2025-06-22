#include<stdio.h>
int findMissingNumber(int nums[],int size){
    int eSum=size*(size+1)/2;
    int aSum=0; 
    for(int i=0;i<size;i++) aSum+=nums[i];
    return eSum-aSum;
}
int main(){
    int nums1[] = {3, 0, 1};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Missing number: %d\n", findMissingNumber(nums1, size1));

    int nums2[] = {0, 1};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Missing number: %d\n", findMissingNumber(nums2, size2)); 

    int nums3[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Missing number: %d\n", findMissingNumber(nums3, size3)); 
    return 0;
}
