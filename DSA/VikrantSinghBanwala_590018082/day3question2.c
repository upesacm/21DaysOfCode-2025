#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool dupli(int* nums,int numsSize){
    int* hashMap=(int*)calloc(1000000,sizeof(int));
    for(int i=0;i<numsSize;i++){
        if(hashMap[nums[i]]>0){
            free(hashMap);
            return true;
        }
        hashMap[nums[i]]++;
    }
    free(hashMap);
    return false;
}
int main(){
    int nums1[]={1,2,3,4};
    printf("Output:%s\n",dupli(nums1,sizeof(nums1)/sizeof(nums1[0]))?"true":"false");
    int nums2[]={1,2,3,2};
    printf("Output:%s\n",dupli(nums2,sizeof(nums2)/sizeof(nums2[0]))?"true":"false");
    return 0;
}