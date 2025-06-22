#include <stdio.h>
int find_minimum(int arr[],int size);

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

printf("The minimum element in the array is: %d\n",find_minimum(nums,n));
return 0;
}

//Function to find the minimum element 
int find_minimum(int arr[],int size){
int min=arr[0];
for(int i=1;i<size;++i){
if(arr[i]<min) min=arr[i];
}
return min;
}
