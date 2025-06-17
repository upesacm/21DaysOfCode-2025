#include<stdio.h>
void bubblesort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
int equal(int nums1,int nums2,int n) {
    for(int i=0;i<n;i++){
        if(nums1[i] != nums2[i]){
            return 0; 
        }
    }
    return 1;
}
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int nums1[n], nums2[n];
    
    printf("Enter the elements of the first array:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &nums1[i]);
    }
    
    printf("Enter the elements of the second array:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &nums2[i]);
    }
    
    bubblesort(nums1, n);
    bubblesort(nums2, n);
    
    if(equal(nums1, nums2, n)){
        printf("The two arrays are equal.\n");
    } else {
        printf("The two arrays are not equal.\n");
    }
    
    return 0;
}