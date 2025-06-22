#include <stdio.h>
int element_appear_once(int nums[],int size);
void sort(int arr[],int size);

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

printf("The value which appears only once in the array is: %d\n",element_appear_once(nums,n));
return 0;
}

// Function to return the element which is appearing once in the array
int element_appear_once(int nums[],int size){

// If array has fewer than 2 elements,then the only element is the one appearing once
if(size<2) return nums[0];

sort(nums,size);
for(int i=0;i<size;i+=2){
if(nums[i]!=nums[i+1])
return nums[i];
}
return nums[size-1];
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
