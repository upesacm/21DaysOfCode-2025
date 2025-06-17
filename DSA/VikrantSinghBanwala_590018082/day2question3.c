#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 1000
void countFrequency(int nums[],int n,int frequency[]){
    for(int i=0;i<n;i++){
        frequency[nums[i]]++;
    }
}
bool areEqual(int nums1[],int n1,int nums2[],int n2){
    if(n1 != n2){
        return false;
    }    
    int frequency1[MAX_SIZE]={0};
    int frequency2[MAX_SIZE]={0};
    countFrequency(nums1,n1,frequency1);
    countFrequency(nums2,n2,frequency2);    
    for(int i=0;i<MAX_SIZE;i++){
        if(frequency1[i]!=frequency2[i]){
            return false;
        }
    }
    
    return true;
}
int main(){
    int nums1[]={1,2,3,4};
    int nums2[]={4,3,2,1};
    int n1=sizeof(nums1)/sizeof(nums1[0]);
    int n2=sizeof(nums2)/sizeof(nums2[0]);    
    if(areEqual(nums1,n1,nums2,n2)){
        printf("true\n");
    } else{
        printf("false\n");
    }
    return 0;
}