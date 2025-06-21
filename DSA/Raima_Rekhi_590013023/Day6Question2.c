#include <stdio.h>
int fully_increasing_array(int nums[],int size);

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

if(fully_increasing_array(nums,n)==1)
printf("True\nThe array is a fully increasing array.");
else
printf("False\nThe array is not a fully increasing array.");
return 0;
}

// Function to return 1 if the array is fully increasing array,else 0
int fully_increasing_array(int nums[],int size){
for(int i=0;i<size-1;i++){
if(nums[i]>=nums[i+1])
return 0;
}
return 1;
}

