#include<stdio.h>
void replaceneg(int nums[],int n){
    for(int i=0;i<n;i++){
        if(nums[i]<0){
            nums[i] = 0;
        }
    }
}
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &nums[i]);
    }
    replaceneg(nums, n);
    printf("Array after replacing negative numbers with 0:\n");
    for(int i=0;i<n;i++){
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}