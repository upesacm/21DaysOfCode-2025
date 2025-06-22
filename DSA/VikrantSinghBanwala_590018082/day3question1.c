#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int value;
    int count;
} Element;
int compare(const void *a,const void *b){
    return ((Element*)a)->value-((Element*)b)->value;
}
int sums(int* nums,int numsSize,int k){
    Element* freqMap=malloc(numsSize*sizeof(Element));
    int uniqueCount=0;
    for(int i=0;i<numsSize;i++){
        int found=0;
        for(int j=0;j<uniqueCount;j++){
            if(freqMap[j].value==nums[i]){
                freqMap[j].count++;
                found=1;
                break;
            }
        }
        if(!found){
            freqMap[uniqueCount].value=nums[i];
            freqMap[uniqueCount].count=1;
            uniqueCount++;
        }
    }
    int sum=0;
    for(int i=0;i<uniqueCount;i++){
        if(freqMap[i].count==k){
            sum+=freqMap[i].value;
        }
    }
    free(freqMap);
    return sum;
}
int main(){
    int nums1[]={2,3,9,9};
    int k1=1;
    printf("Output:%d\n",sums(nums1,sizeof(nums1)/sizeof(nums1[0]),k1));
    int nums2[]={1,8,8,8,5,6,2};
    int k2=3;
    printf("Output:%d\n",sums(nums2,sizeof(nums2)/sizeof(nums2[0]),k2));
    return 0;
}