#include <stdio.h>
int duplicate_element(int nums[],int size);
void sort(int arr[],int size);

int main(){
int n;

printf("Enter the size of n:\n");
scanf("%d",&n);
int nums[n];

// Prompt the user to enter the elements of the array
printf("Enter %d elements of the array from 1 to n (inclusive):\n",n);
for(int i=0;i<n;++i){
scanf("%d",&nums[i]);
}

printf("The duplicate number that appears in the array is: %d\n",duplicate_element(nums,n));
return 0;
}

// Function to return the duplicate element in the array
int duplicate_element(int nums[],int size){

sort(nums,size);
for(int i=0;i<size-1;i++){
if(nums[i]==nums[i+1])
return nums[i];
}
}

// Insertion sort to sort the array
void sort(int arr[],int size){
for(int i=1;i<size;++i){
int key=arr[i];
int j=i-1;
while(j>=0 && arr[j]>key){
arr[j+1]=arr[j];
j--;
}
arr[j+1]=key;
}
}
