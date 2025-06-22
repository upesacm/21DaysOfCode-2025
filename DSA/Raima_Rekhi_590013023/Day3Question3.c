#include <stdio.h>
int find_second_largest(int arr[],int size);

int main(){
int n;

printf("Enter the size of the array:\n");
scanf("%d",&n);
int nums[n];

// Prompt the user to enter the elements of the array
printf("Enter the elements of the array:\n");
for(int i=0;i<n;++i){
scanf("%d",&nums[i]);
}

// Print result based on whether a second largest was found
int result=find_second_largest(nums,n);
if(result==-1)
printf("Second largest unique element does not exist.\n");
else
printf("Second largest unique element is: %d\n",result);

return 0;
}

// Function to find the second largest unique element in the array

int find_second_largest(int arr[],int size){
// If array has fewer than 2 elements, second largest can't exist
if(size<2) return -1;

//Find the largest element that is not equal to max
int max=arr[0];
for(int i=1;i<size;++i){
if(arr[i]>max) max=arr[i];
}

int second=-1;
for(int i=0;i<size;++i){
if(arr[i]!=max){
if(second==-1||arr[i]>second) second=arr[i];
}
}
return second;
}


