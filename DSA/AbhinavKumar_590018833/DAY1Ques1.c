#include<stdio.h>
void ReplaceWithZero(int nums[],int size){
    for(int i=0;i<size;i++){
        if(nums[i]<0) nums[i]=0;
    }
}
void printArray(int nums[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",nums[i]);
    }
    printf("\n");
}
int main(){
    int size;
    printf("Enter the size of the Array");
    scanf("%d",&size);
    int nums[size];
    printf("Enter the elements of the Array(They can be negative too!)");
    for(int i=0; i<size;i++){
        scanf("%d",&nums[i]);

    }
    printf("The elementsd that you've enterted are:");
    printArray(nums,size);
    ReplaceWithZero(nums,size);
    printf("the modified array is:");
    printArray(nums,size);
    return 0;
}
