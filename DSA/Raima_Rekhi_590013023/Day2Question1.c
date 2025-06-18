#include <stdio.h>
// Function to calculate the sum of even elements in the array
int sum_of_even_elements(int limit,int arr[]);
int main(){
int n;
printf("Enter the size of the array:\n");
scanf("%d",&n);
int nums[n];

// Prompt the user to enter the elements of the array
printf("Enter the elements of the array: \n");
for(int i=0;i<n;++i)
{
 scanf("%d",&nums[i]);
}

// Call the function and display the sum
printf("The sum of the even elements of the array is: %d ",sum_of_even_elements(n,nums));
}

// Computes and returns the sum of even array elements
int sum_of_even_elements(int limit,int arr[]){
int sum=0;
for(int i=0;i<limit;++i){
if(arr[i]%2==0){
sum+=arr[i];
}
}
return sum;
}


