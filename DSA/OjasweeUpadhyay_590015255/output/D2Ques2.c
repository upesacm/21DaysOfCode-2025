#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &nums[i]);
    }
    printf(" First : %d , Last: %d", nums[0], nums[n-1]);
    return 0;
}