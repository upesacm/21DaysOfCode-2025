#include <stdio.h>
int find_missing(int nums[],int n);

int main(){
int n;

printf("Enter the value of n (range is 0 to n):\n");
scanf("%d",&n);
int nums[n];

// Prompt the user to enter the elements of the array
printf("Enter the elements:\n");
for(int i=0;i<n;++i){
scanf("%d",&nums[i]);
}

printf("The missing number is: %d\n",find_missing(nums,n)); // Output result
return 0;
}


// Function to find the missing number using sum formula
int find_missing(int nums[],int n){

int expected_sum=n*(n+1)/2; // Sum of numbers from 0 to n
int actual_sum=0;
for(int i=0;i<n;++i){
actual_sum+=nums[i]; // Compute actual sum of array elements
}
return expected_sum-actual_sum; // Missing number is the difference
}

